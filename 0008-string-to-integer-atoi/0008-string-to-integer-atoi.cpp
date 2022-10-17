#include <stdlib.h>
class Solution {
public:
    int myAtoi(string s) {
      /*  long a=0;
        int i=0, f=0;
       while(i<s.size()){
            if(s[i]==' '){
                i++;
            }else break;
        
           if(s[i]==' '){
                i++;
               //break;
           }
          else if(s[i]=='-'){
                i++;
                f=1;
              //break;
            }
            else if(s[i]=='+'){
                i++;
            }
        
        
        for(int j=i;j<s.size();i++){
            if(s[j]>='0' && s[j]<='9'){
             a=a*10+(s[j]-'0');
                if(a>=INT_MAX) break;
            }
            else break;
        }
        if(f=1){
            a=a*-1;
        }
       // if(a<=INT_MIN)return INT_MIN;       
        //else if(a>=INT_MAX) return INT_MAX;
        return a;
    }*/
             int res=0;
        int i=0;
        int sign=1;
		
        while(i<s.size()&&s[i]==' ')i++;  //ignore leading white space
        
        if(s[i]=='-'||s[i]=='+')          //check if number positve or negative
        {
            sign=s[i]=='-'?-1:1;
            i++;
        }
        // now iterate across digits if any
		// should only be in range 0-9
        while(i<s.length()&&(s[i]>='0'&&s[i]<='9'))  //traverse string till nondigit not found or string ends
        {
            int digit=(s[i]-'0')*sign;
            if(sign==1 && (res>INT_MAX/10 || (res==INT_MAX/10 && digit>INT_MAX%10))) return INT_MAX; //check for overflow
            if(sign==-1 &&(res<INT_MIN/10 || (res==INT_MIN/10 && digit<INT_MIN%10))) return INT_MIN; //check for underflow
            
            res=res*10+digit; // update res
            i++;
        }
    
    return res;}
};