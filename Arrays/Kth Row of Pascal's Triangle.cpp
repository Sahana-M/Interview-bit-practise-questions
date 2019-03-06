Kth Row of Pascal's Triangle
Asked in:  
Google

Given an index k, return the kth row of the Pascal’s triangle.

Pascal’s triangle : To generate A[C] in row R, sum up A’[C] and A’[C-1] from previous row R - 1.

Example:

Input : k = 3

Return : [1,3,3,1]

--------------------------------------------------------------------

vector<int> Solution::getRow(int A) {
    int i,k,val;
    vector <int> v;
    v.push_back(1);
    i = A;
    if(i==0){
        return v;
    }
    val = 1;
    for(k=0; k<i; k++){
        val = val * (i-k)/(k+1);
        v.push_back(val);
    }
    return v;
        
    
}
