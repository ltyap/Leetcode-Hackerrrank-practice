//Runtime: 3 ms, beat 99.22% of submissions
//Memory Usage: 11.23 MB, beat 32.91% of submisssions
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int>map;
        vector<int> indexes(2,-1);        
        for (int i=0;i<nums.size();i++)
        {
            int complement=target-nums[i];
            if (map.contains(complement))
            {
                indexes[0]=i;
                indexes[1]=map[complement];
                return indexes;
            }
            map[nums[i]] = i;
        }   
        return indexes;
    }
};
