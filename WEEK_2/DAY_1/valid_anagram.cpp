#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map <char,int> mapp;
        if(s.size() != t.size()) return false;
        for(char ch:s){
            mapp[ch]++;
        }

        for(char ch:t){
            if(mapp[ch]==0) return false;
            mapp[ch]--;
        }
        return true;
    }
};