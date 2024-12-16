#include <vector>
using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int c = 0;
        if (flowerbed.size() == 1 && flowerbed[0] == 0)
            {
                c +=1;
            }
         if (flowerbed.size() == 2)
            {
                if (flowerbed[0] == 0 &&  flowerbed[1] == 0)
                {c+=1;
                    return c>=n;}
                
            }
        for (int i = 1; i < flowerbed.size()-1; i++)
        {
            if (i-1 == 0)
            {
                if (flowerbed[i-1] == 0 && flowerbed[i]==0)
                {
                    flowerbed[i-1] = 1;
                    c+=1;
                }
                if (flowerbed[i-1] == 0 && flowerbed[i]==0 && flowerbed[i+1]==0)
                {
                    flowerbed[i-1] = 1;
                    c+=1;
                    continue;
                }
            }
            if(i+2 == flowerbed.size())
            {
                if (flowerbed[i] == 0 && flowerbed[i+1] == 0)
                {
                    flowerbed[i] = 0;
                    cout << -1;
                    c+=1;
                    continue;
                }
            }
            if (flowerbed[i-1] == 0 & flowerbed[i+1] == 0 && flowerbed[i] == 0)
            {
                flowerbed[i] = 1;
                c+=1;
            }
        }
        if (c >= n){return true;}
        else {return false;}
    }
};