class Solution {
public:
    int reverse(int x) {
       long long  int sum=0;;
        long long int n=abs(x);
        
        
        
        while(n){
            sum=sum*10+n%10;
            n=n/10;
            
        
        }
        if(x<0){
            sum=sum*(-1);
        }
        if(sum>INT_MAX || sum<INT_MIN  ){
            return 0;
        }
        return sum;
    }
};