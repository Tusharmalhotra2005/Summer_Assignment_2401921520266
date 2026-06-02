#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        double sum=0;
        
        //we will calculate average of first window manually 
        for(int e=0 ; e<k ;e++){
            sum += nums[e];
        }
        double max_avg=sum/k;

        int i=0;
        int j=k;
        
        //we will use sliding window to calculate average of other windows and update max_avg
        while(j < nums.size() ){
             sum-=nums[i];
             sum+=nums[j];
               
             double avg_1 = sum/k;
             max_avg = max(max_avg , avg_1);
             i++;
             j++;
        }
        return max_avg;

    }
};