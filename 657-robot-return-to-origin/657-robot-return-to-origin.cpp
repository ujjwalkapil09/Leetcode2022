#include<bits/stdc++.h>
class Solution {
    
public:
    bool judgeCircle(string moves) {
        int a=0,b=0,c=0,d=0;
        for(int i=0;i<moves.length();i++){
            if(moves[i]=='R'){
                a++;
            }
            else if(moves[i]=='L'){
                b--;
            }
            else if(moves[i]=='U'){
                c++;
            }
            else{
                d--;
            }
            
        }
        if(a+b==0 && c+d==0){
            return true;
        }
        else{
            return false;
        }
    }
};