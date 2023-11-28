// Without set (2 pointers)
//Runtime: 7 ms, beat 78% of submissions
//Memory Usage: 18.6 MB, beat 89.24% of submisssions
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    int n = nums.size();
    if (n==1) return 1;
    int last=1;
    for (int i = 1; i<n; i++)
    {
        if (nums[i]!=nums[i-1])
        {
            nums[last]=nums[i];
            last++;
        }
    }
    return last;
    }
};
