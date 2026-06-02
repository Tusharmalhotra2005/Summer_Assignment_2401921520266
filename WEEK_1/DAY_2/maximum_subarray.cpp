#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_subarray=INT_MIN;
        int sum=0;

        //kadane's algorithm -> resets path whenever nsum goes negative 
        for(int i=0 ; i<nums.size() ; i++){
            sum+=nums[i];

            max_subarray=max(sum, max_subarray);
            
            if(sum<0){
                sum=0;
            }

        }
        return max_subarray;
    }
};