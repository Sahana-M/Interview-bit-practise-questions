Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

Example:

"A man, a plan, a canal: Panama" is a palindrome.

"race a car" is not a palindrome.

Return 0 / 1 ( 0 for false, 1 for true ) for this problem

-----------------

int Solution::isPalindrome(string A) {
    int l,i,j;
    
    l=A.length();
    i=0;
    j=l-1;
    
    
    while(i<j){
        while(i<j && !isalnum(A[i])) i++;
        while(i<j && !isalnum(A[j])) j--;
        
        if(tolower(A[i])!= tolower(A[j]))
            return 0;
        
        i++;
        j--;
    }
    
    return 1;
}
