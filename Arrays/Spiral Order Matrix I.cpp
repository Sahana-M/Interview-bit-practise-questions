
#Spiral Order Matrix I Asked in:  Microsof, JP Morgan, Amazon,Flipkart

Given a matrix of m * n elements (m rows, n columns), return all elements of the matrix in spiral order.

Example:

Given the following matrix:

[
    [ 1, 2, 3 ],
    [ 4, 5, 6 ],
    [ 7, 8, 9 ]
]
You should return

[1, 2, 3, 6, 9, 8, 7, 4, 5]

--------------------------------------------------------------------------------------------


vector<int> Solution::spiralOrder(const vector<vector<int> > &A) {
    vector <int> v;
    int t=0,b,r,l=0, dir =0,i;
    b = A.size()-1;
    r = A[0].size()-1;
    while(t<=b && l<=r){
        if(dir==0){
            for(i=l;i<=r;i++)
                v.push_back(A[t][i]);
            t++;
            dir=1;
        }
        else if(dir==1){
            for(i=t; i<=b;i++)
                v.push_back(A[i][r]);
            r--;
            dir=2;
            
        }
        else if(dir==2){
            for(i=r; i>=l; i--)
                v.push_back(A[b][i]);
            b--;
            dir=3;
            
        }
        else if(dir==3){
            for(i=b; i>=t; i--)
                v.push_back(A[i][l]);
            l++;
            dir=0;
            
        }
    }
    return v;
}
