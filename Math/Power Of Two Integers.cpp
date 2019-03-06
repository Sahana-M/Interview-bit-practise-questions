Power Of Two Integers
Asked in:  
Housing
Amazon

Given a positive integer which fits in a 32 bit signed integer, 
find if it can be expressed as A^P where P > 1 and A > 0. A and P both should be integers.

-----------------------------------------------------

int Solution::isPower(int A) {
       if(A == 1){
        return true;
    }
    
    for(int i = 2; i < 32; i++){
        for(int j = 2; j <= pow(INT_MAX, 1.0/i); j++){
            if(pow(j, i) == A){
                return true;
            }
        }
    }
    return false;
}
    

