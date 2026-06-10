#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int strStr(string haystack,string needle) {
        if (needle.empty()) return 0;
        if(needle.size() > haystack.size()) return -1;
        
        int i=0, j=0;
        int m=haystack.size();
        int n=needle.size();

        while(i<m){
            if(haystack[i] == needle[j]){
                i++;
                j++;
                if(j==n) return i-n;
            }
            else{
                i=i-j+1; //next starting pointer
                j=0;
            }
        }
        return -1;

    }
};