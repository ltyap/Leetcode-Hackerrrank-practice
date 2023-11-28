//Runtime: 0 ms, beat 100.00% of submissions
//Memory Usage: 23 MB, beat 94.00% of submisssions

class Solution {
public:
    bool isGood(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int len = nums.size();
        if(len==0 || len==1){
            return false;
        }
        if (nums[len-2]!=nums[len-1])
            return false;
        for (int i=0;i<len-1;i++)
        {
            if (nums[i]!=i+1)
                return false;
        }
        return true;
    }
};
