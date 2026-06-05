#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        string prefixx="";
        
        //iterates over the characters of the first word
        for(int i=0 ; i<strs[0].size() ; i++){
            char current_char=strs[0][i];

            //compares the character with the character present at that position of other word 
            for(int j=1 ; j<strs.size() ; j++){
                if(i>=strs[j].size() || strs[j][i] != current_char){
                    return prefixx;
                }
            }
            prefixx.push_back(current_char);
        }
        return prefixx;
    }
};