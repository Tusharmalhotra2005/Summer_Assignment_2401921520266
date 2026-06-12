#include <vector>
#include <string>
using namespace std;


class Solution {
public:
    int compress(vector<char>& chars) {
        if(chars.size()==1) return 1;
        
        int read=0;
        int write=0;
        int count=1;
        int i=1;
        
        while(i<chars.size()){

            if(chars[read] == chars[i] ){
                count++;
                i++;
            }
            else{
                chars[write]=chars[read];
                write++;
                
                //converting count to string 
                if(count>1){
                    string cnt = to_string(count);
                    for(char digit : cnt){
                        chars[write]=digit;
                        write++;
                    }
                }
                read=i;
                i++;
                count=1;
            }
        }

        //processing the last group 
        chars[write]=chars[read];
        write++;
        if(count>1){
            string cnt=to_string(count);
            for(char digit : cnt){
                chars[write]=digit;
                write++;
            }
        }

        
        return write;
    }
};