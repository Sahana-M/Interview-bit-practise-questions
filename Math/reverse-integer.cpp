Reverse integer
Asked in:  
HCL
Bloomberg
Reverse digits of an integer.

Example1:

x = 123,

return 321
Example2:

x = -123,

return -321

Return 0 if the result overflows and does not fit in a 32 bit signed integer




---------------------------------------------


int Solution::reverse(int A) {
    if(A > INT_MAX || A < INT_MIN){
        return 0;
    }
        
    if(A<0){
        A = abs(A);
        long long int rev=0,prev=0, cur;
        while(A!=0){
            cur = A%10;
            rev = (rev*10) +cur;
            if(rev > INT_MAX)
                return 0;
    
           
            A = A/10;
        }
        return -rev;
    }
    else{
        long long int rev=0,prev=0, cur;
        while(A!=0){
            cur = A%10;
            rev = (rev*10) +cur;
            if(rev > INT_MAX)
                return 0;
            
            
            A = A/10;
        }
        return rev;
    }
}
