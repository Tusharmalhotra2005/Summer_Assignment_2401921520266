#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
   vector<int> twoSum(vector<int>& nums,int target){
     unordered_map <int,int> mapp;

     for(int i=0 ; i<nums.size() ; i++){
        int x=nums[i];
        int y=target-x;
        if(mapp.find(y) != mapp.end()){
            return {mapp[y],i};
        }
        mapp[x]=i;
     }
     return {};
   }
};