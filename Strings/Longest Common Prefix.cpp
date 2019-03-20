Longest Common Prefix
Asked in:  
Google
Write a function to find the longest common prefix string amongst an array of strings.

Longest common prefix for a pair of strings S1 and S2 is the longest string S which is the prefix of both S1 and S2.

As an example, longest common prefix of "abcdefgh" and "abcefgh" is "abc".

-----------

string go(string a, string b){
    string ans = "";
    for(int i=0, j=0;i<a.size()&&j<b.size(); i++, j++){
        if(a[i] == b[j]){
            ans += a[i];
        }
    }
    return ans;
}




string Solution::longestCommonPrefix(vector<string> &A) {
   string ans = A[0];
   
   for(int i=0; i<A.size(); i++){
       ans = go(ans, A[i]);
   }
   return ans;
}
