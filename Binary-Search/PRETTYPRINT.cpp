Print concentric rectangular pattern in a 2d matrix. 
Let us show you some examples to clarify what we mean.

Example 1:

Input: A = 4.
Output:

4 4 4 4 4 4 4 
4 3 3 3 3 3 4 
4 3 2 2 2 3 4 
4 3 2 1 2 3 4 
4 3 2 2 2 3 4 
4 3 3 3 3 3 4 
4 4 4 4 4 4 4 


---------------------------

vector<vector<int> > Solution::prettyPrint(int A) {
    int n = A*2 - 1, i,j,start, end;
    start =0 , end = n ;
    vector < vector <int> > ans(n, vector<int>(n));
    vector<int>v;
    while(A>0){
        for(i=start; i<end; i++){
            for(j=start; j<end; j++){
               ans[i][j]=A;
            }
        }
        A--;
        start ++;
        end --;
    }
    return ans;
    
}
