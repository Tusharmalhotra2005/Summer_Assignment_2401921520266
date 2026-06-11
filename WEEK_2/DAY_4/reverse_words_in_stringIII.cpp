#include<algorithm> 
#include<string>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        int i=0;
        int j=0;

        while(j<=s.size()){
            if(s[j]==' ' || j==s.size()){
                reverse(s.begin()+i,s.begin()+j);
                i=j+1;
            }
            j++;
        }
       
        return s;
    }
};                                                