//Runtime: 27 ms, beat 93.48% of submissions
//Memory Usage: 12 MB, beat 89.91% of submisssions

class Solution {
public:
    string sortVowels(string s)
    {
        string tempString;
        // string sortedString="";

        bool presentvowels = false;
        for (int i=0; i<s.size(); i++)
        {
            if(isVowel(s[i]))
                tempString+=s[i]; 
                presentvowels = true;           
        }
        if (presentvowels == false)
            return s;
        sort(tempString.begin(), tempString.end());
        int j = 0;
        for (int i=0; i<s.size(); i++)
        {
            if(isVowel(s[i]))
            {
                s[i]=tempString[j];
                j++;
            }
        }
        return s;
    }
    bool isVowel(char c)
    {
        if(c=='a'|| c=='e'||c=='i'||c=='o'||c=='u'
        ||c=='A'||c=='E'||c=='I'||c=='O' ||c=='U')
        {
            return true;    
        }

        return false;
    }
        
};