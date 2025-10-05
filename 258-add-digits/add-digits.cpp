class Solution {
public:
    int repsum(int num){
        
        if(num<10){
            return num;
        }
        int sum=0;
        while(num>0){
            sum=sum+num%10;
            num=num/10;
            

        }
        return repsum(sum);
       
        
    }
    int addDigits(int num) {
       return repsum(num);

        
    }
};