#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int max = -1;
        int x_axis, y_axis;
        int j = 0, t = height.size()-1;
        while (j < t)
        {
            x_axis = t - j;
            y_axis = min(height[j], height[t]);
            // cout << "indices" << j << " " << t << endl;  
            // cout << "values" << height[j] << " " << height[t] << endl;

            if (height[j] < height[t])
            {
                // cout << "j++" << endl;
                j++;
            }
            else
            {
                // cout << "t--" << endl;
                t--;
            }

            if (x_axis*y_axis > max)
            {
                max = x_axis * y_axis;
            }
        }
        return max;
    }
}; 