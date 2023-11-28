//Runtime: 92 ms, beat 92.06% of submissions
//Memory Usage: 83.3 MB, beat 71.05% of submisssions
class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        int len = dist.size();
        int num_monsters=0;
        vector<int> arrival_time(len);
        for (int i=0;i<len;i++)
        {
            arrival_time[i]=(dist[i] + speed[i] - 1) / speed[i];
        }
        sort(arrival_time.begin(),arrival_time.end());
        for (int i = 0; i<len;i++)
        {
            if (arrival_time[i]<=i)
                return num_monsters;
            num_monsters++;
        }
        return num_monsters;
    }
};
