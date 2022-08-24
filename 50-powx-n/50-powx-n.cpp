class Solution {
public:
    double myPow(double x, int n) {
        long long nn=n;
        double ans=1.0;
        if(n<0){
            nn=(-1)*nn;
        }
        while(nn){
            if(nn % 2){
                ans=(double)ans*x;
                nn=nn-1;
                
            }
            else{
                x=x*x;
                nn=nn/2;
            }
        }
        cout<<ans;
        if(n<0){
            ans=(double)1.0/(double)ans;
        }
        return ans;
    }
};