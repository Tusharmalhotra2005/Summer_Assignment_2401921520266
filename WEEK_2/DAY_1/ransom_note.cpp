#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int frequency[26]={0};

        for(char ch:magazine){
            frequency[ch-'a']++;
        }

        for(char ch:ransomNote){
            if(frequency[ch-'a']==0) return false;
            frequency[ch-'a']--;
        }
        return true;
    }
};