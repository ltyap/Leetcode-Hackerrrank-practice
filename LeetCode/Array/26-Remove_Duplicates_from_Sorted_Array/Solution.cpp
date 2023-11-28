// With set
//Runtime: 7 ms, beat 78% of submissions
//Memory Usage: 18.7 MB, beat 53.8% of submisssions
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    
    int num_unique=0;
    set<int> s;
    for (int i=0;i<nums.size();i++)
    {
        s.insert(nums[i]);
    }
    int i=0;
    for (auto it=s.begin();it!=s.end();it++)
    {
        nums[i]=*it;
        i++;
    }

    num_unique = s.size();
    return num_unique;
    }
};
