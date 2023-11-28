//Runtime: 84 ms, beat 93.55% of submissions
//Memory Usage: 24.29 MB, beat 97.06% of submisssions
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        if (n==3)
        {
            if (nums[0]+nums[1]+nums[2]==0)
                result.push_back({nums[0],nums[1],nums[2]});
            return result;
        }
        if (n<3 || nums[0]>0 || nums[n-1]<0) return result;
        
        for (int i=0;i<n;i++)
        {
            //make sure to check for a new number
            if (i>0 && nums[i]==nums[i-1]) continue;
            if (nums[i]>0) return result;
            int lower = i+1;
            int higher = n-1;
            while (lower<higher)
            {
                int sum = nums[i]+nums[lower]+nums[higher];
                if (sum>0)
                    higher--;
                else if (sum<0)
                  lower++;
                else 
                {
                    result.push_back({nums[i], nums[lower], nums[higher]});
                    higher--;
                    lower++;
                    //ensure values of higher and lower are not repeated
                    while (lower<higher && nums[higher]==nums[higher+1])
                        higher--;
                    while (lower<higher && nums[lower]==nums[lower-1])
                        lower++;
                }
            }
        }
        return result;
    }
};
