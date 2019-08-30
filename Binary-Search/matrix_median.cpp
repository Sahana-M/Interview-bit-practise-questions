Given a N cross M matrix in which each row is sorted, find the overall median of the matrix. Assume N*M is odd.

For example,

Matrix=
[1, 3, 5]
[2, 6, 9]
[3, 6, 9]

A = [1, 2, 3, 3, 5, 6, 6, 9, 9]

Median is 5. So, we return 5.
Note: No extra memory is allowed.

#----------------------------------------------


int Solution::findMedian(vector<vector<int> > &A) {
    vector <int> v;
    for(int i=0; i<A.size(); i++){
        for(int j=0; j<A[0].size(); j++){
            v.push_back(A[i][j]);
            
        }
    }
    sort(v.begin(), v.end());
    int l= A.size()*A[0].size();
    if(l%2 == 0){
        int mid = l/2;
        return (v[mid-1]/2 + v[mid]/2)/2;
    }
    else{
        return v[l/2];
    }
    
}
