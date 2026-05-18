class Solution {
public:
    int myAtoi(string s) {
        int n=s.size();
        int sign =1;
        int res=0; 
        int idx=0;
        while (idx<n && s[idx]==' '){
            idx++;
        }
        
        if (idx<n && (s[idx]=='-'  || s[idx]=='+')){
            if (s[idx]=='-'){
                sign=-1;
                
                
            }
            idx++;
        }
        
        while(idx<n &&  isdigit(s[idx])){
            int digit= s[idx]-'0';
            
              if (res> INT_MAX/10 || (res==INT_MAX/10 && s[idx]-'0'>7)){
                  return sign==1? INT_MAX : INT_MIN;
                  
              }
              res=10* res + digit;
              idx++;
              
        }
        return (int)res*sign;
        
    }
};