//Runtime: 0 ms, beat 100.00% of submissions
//Memory Usage: 6.2 MB, beat 70.87% of submisssions

class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        int diff_x = abs(fx-sx);
        int diff_y = abs(fy-sy);
        int min_t = max(diff_x, diff_y);

        //Same square
        if (diff_x == 0 && diff_y == 0)
        {
            if (t==1)
                return false;
            return true;
        }
        if (min_t>t)
            return false;    
        return true;
    }
};
