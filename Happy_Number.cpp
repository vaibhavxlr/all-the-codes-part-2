#include <bits/stdc++.h>
class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> ord;
        int sum = 0, k;
        while(1){
        sum = 0;
        while(n != 0){
            k = n % 10;
            n /= 10;
            sum = sum + k*k;
        }
        if(sum == 1){
            return true;
        }
        else{
            if(ord.count(sum) != 0){
                return false;
            }
            else{
                 ord.insert(sum);
            }
        }
            n = sum;
            
        }
        //return isHappy(sum);
    }
};