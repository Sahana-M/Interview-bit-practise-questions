Pascal Triangle
Asked in:  
Google
Amazon

Given numRows, generate the first numRows of Pascal’s triangle.

Pascal’s triangle : To generate A[C] in row R, sum up A’[C] and A’[C-1] from previous row R - 1.

Example:

Given numRows = 5,

Return

[
     [1],
     [1,1],
     [1,2,1],
     [1,3,3,1],
     [1,4,6,4,1]
]

----------------------------------------------------------------
vector<vector<int> > Solution::solve(int A) {
    int i,k,c;
    vector<vector<int> >ANS;
    if(A==0)
        return ANS;
    vector <int> v;
    v.push_back(1);
    ANS.push_back(v);
    for (i = 1; i < A; i++)
    {
        vector <int> v;
        v.push_back(1);
        for (k = 1; k < i; k++)
        {
            v.push_back(ANS[i-1][j]+ANS[i-1][j-1]);
        }
        v.push_back(1);
         ANS.push_back(v);
    }
    return ANS;
}
