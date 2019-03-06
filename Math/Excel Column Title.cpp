Excel Column Title
Asked in:  
Amazon

Given a positive integer, return its corresponding column title as appear in an Excel sheet.

For example:

    1 -> A
    2 -> B
    3 -> C
    ...
    26 -> Z
    27 -> AA
    28 -> AB 
    
---------------------------------------------------

string Solution::convertToTitle(int A) {
    string ans;
    while(A){
        int rem = A%26;
        if(rem){
            char c = rem - 1 + 'A';
            string s;
            s.push_back(c);
            ans.insert(0,s);
            A = A/26;
        }
        else{
             ans.insert(0,"Z");
             A=A/26-1;
        }
    }
    return ans;
}
