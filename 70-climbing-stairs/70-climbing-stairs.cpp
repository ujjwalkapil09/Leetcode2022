class Solution {
public:
    
    int climbStairs(int n) {
        if(n<=2)return n;
        int zero = 0;
        int one = 1;
        int sum=0;
        for(int i = 0 ; i < n; i++) {
           sum=zero+one;
            zero=one;
            one=sum;
            
        }
        return sum;
        // return count;
    }
};