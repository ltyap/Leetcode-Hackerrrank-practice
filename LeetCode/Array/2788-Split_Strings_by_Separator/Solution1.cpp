//Using stringstream
//Runtime: 30 ms, beat 50.12% of submissions
//Memory Usage: 44.71 MB, beat 6.36% of submisssions

class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string> result;
        for (const string& word: words)
        {
            stringstream ss(word);
            string temp="";
            while (getline(ss, temp, separator))
            {
                if (!temp.empty())
                    result.push_back(temp);
            }
        }

        return result;
    }
};
