#include <vector>
#include <string>   
using namespace std;    

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n1=s.size(), n2=p.size();

        if(n2>n1) return {};
        vector<int> result;
        vector<int> c1(26,0), c2(26,0);

        for(int i=0 ; i<n2 ; i++){
            c1[s[i]-'a']++;
            c2[p[i]-'a']++;
        }
        if(c1==c2) result.push_back(0);
        
        for(int i=n2 ; i<n1 ;i++){
            c1[s[i]-'a']++;
            c1[s[i-n2]-'a']--;
            if(c1==c2) result.push_back(i - n2 + 1);
        }
        return result;
    }
};