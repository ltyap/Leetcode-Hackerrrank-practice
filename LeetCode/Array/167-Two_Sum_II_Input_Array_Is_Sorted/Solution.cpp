//Runtime: 5 ms, beat 92.12% of submissions
//Memory Usage: 16.02 MB, beat 28.7% of submisssions
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> indices = {2,-1};
        if (numbers.size()==2)
        {
            indices[0]=1;
            indices[1]=2;
            return indices;
        }
        int i = 0;
        int j = numbers.size()-1;
        while (i<j)
        {
            const int sum = numbers[i]+numbers[j]; 
            if (sum==target)
            {
                indices[0]=i+1;
                indices[1]=j+1;
                return indices;
            }
            else if (sum>target)
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        return indices;
    }
};
