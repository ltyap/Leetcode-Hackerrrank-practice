//Without stringstream
//Runtime: 245 ms, beat 66.95% of submissions
//Memory Usage: 13.24 MB, beat 76.58% of submisssions
class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int count=0;
        constexpr int size=26;
        // a = 0, z = 25
        // if char doesnt exists
        // set value to -1
        int first_occurrence[size] = {};
        fill(first_occurrence, first_occurrence+size, -1);
        int last_occurrence[size] = {};
        for (int i = 0;i<s.size();i++)
        {
            int index_check = s[i]-'a';
            if (first_occurrence[index_check] == -1)
                first_occurrence[index_check] = i;
            last_occurrence[index_check] = i;
        }
        for (int i=0;i<size;i++)
        {
            if (first_occurrence[i]!=-1)
            {
                unordered_set<char>unique_chars;
                for (int j=first_occurrence[i]+1;j<last_occurrence[i];j++)
                {   
                    unique_chars.insert(s[j]);           
                }
                count += unique_chars.size();
            }
        }
        return count;
    }
};
