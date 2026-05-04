class Solution {
public:
    int rotatedDigits(int n) {
        int cnt=0;
        for(int i=1;i<=n;i++){
            int n=i;
            bool isvalid=true;
            bool isgood=false;
            while(n>0){
                int digit=n%10;
                if(digit==3 ||  digit==4  || digit==7){
                    isvalid=false;
                    break;
                }
                if(digit==2 || digit==5 || digit==6 || digit==9){
                    isgood=true;
                }
                n/=10;
            }
            if(isvalid && isgood){
                cnt++;
            }
        }
        return cnt;

        
    }
};