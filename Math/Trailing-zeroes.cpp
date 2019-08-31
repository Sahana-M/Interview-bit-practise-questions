Trailing Zeros in Factorial
Asked in:  
Microsoft
Jabong
Zillow
Given an integer n, return the number of trailing zeroes in n!.

Note: Your solution should be in logarithmic time complexity.

Example :

n = 5
n! = 120 
Number of trailing zeros = 1
So, return 1

//------------------------------



int Solution::trailingZeroes(int A) {
    int count =0;
    for(int i=5; A/i >=1; i = i*5){
        count += A/i;
    }
    return count;
    
}
