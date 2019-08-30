Palindrome Integer
Asked in:  
HCL
Determine whether an integer is a palindrome. Do this without extra space.

A palindrome integer is an integer x for which reverse(x) = x where reverse(x) is x with its digit reversed.
Negative numbers are not palindromic.

Example :

Input : 12121
Output : True

Input : 123
Output : False

------------------------------------------

int Solution::isPalindrome(int A) {
    string s = to_string(A);
    string s1;
    for(int i=s.length()-1; i>=0; i--){
        s1 = s1+s[i];
    }
    if(s == s1)
      return 1;
        
    else
      return 0;
       

    
    
}
