Excel Column Number
Asked in:  
Amazon

Given a column title as appears in an Excel sheet, return its corresponding column number.
Example:

    A -> 1
    
    B -> 2
    
    C -> 3
    
    ...
    
    Z -> 26
    
    AA -> 27
    
    AB -> 28 
    
    --------------------------------------------
    
    int Solution::titleToNumber(string A) {
    int l = A.length();
    int i,n=0;
    for(i= 0;i < l; i++){
        n = n + pow(26,i) * (A[l-(i+1)] - 'A' + 1);
    }
    return n;
}
