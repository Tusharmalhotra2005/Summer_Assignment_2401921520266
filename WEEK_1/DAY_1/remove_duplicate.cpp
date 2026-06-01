#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=1;  //taking j=1 because first element is always unique

        //if array is empty it will return 0;
        if(nums.empty()) return 0;

        for(int i=1 ; i<nums.size() ; i++){
            if(nums[i] != nums[i-1]){
               nums[j]=nums[i];
               j++;
            }
        }
        return j;
    }
};
