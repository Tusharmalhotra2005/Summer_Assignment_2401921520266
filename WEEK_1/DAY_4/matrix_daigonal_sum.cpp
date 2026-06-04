#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int sum=0;
        for(int i=0 ; i<n ; i++){
            sum+=mat[i][i];       // calculate sum of primary diagonal
            sum+=mat[n-i-1][i];  //calculate sum of secondary diagonal
        }

        //removing the double centered element
        if(n%2==1){
           sum-=mat[n/2][n/2];
        }

        return sum;
    }
};