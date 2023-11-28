//Without stringstream
//Runtime: 27 ms, beat 68% of submissions
//Memory Usage: 38.63 MB, beat 84.65% of submisssions

class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string> output;
        for (const string& word: words)
        {
            string tmp = "";
            for (const char c: word)
            {
                if (c==separator&&tmp!="")
                {
                    output.push_back(tmp);
                    tmp = "";
                }
                if (c!=separator)
                    tmp += c;
            }
            if (tmp !="")
                output.push_back(tmp);
        }
        return output;
    }
};
