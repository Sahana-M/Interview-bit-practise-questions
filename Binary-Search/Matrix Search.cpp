Write an efficient algorithm that searches for a value in an m x n matrix.

Consider the following matrix:

[
  [1,   3,  5,  7],
  [10, 11, 16, 20],
  [23, 30, 34, 50]
]
Given target = 3, return 1 ( 1 corresponds to true )

Return 0 / 1 ( 0 if the element is not present, 1 if the element is present ) for this problem

----------------------------------------------------------

int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    int r = A.size(), c = A[0].size(), row = -1;
    for(int i=0; i<r; i++){
        if(B>=A[i][0] && B<=A[i][c-1]){
            row = i;
            break;
        }
    }
    if(row == -1)return 0;
    int low = 0, high = c-1;
    while(low<=high){
        int mid = low + (high - low)/2;
        if(A[row][mid] == B)return 1;
        else if(A[row][mid]< B) low = mid+1;
        else high = mid - 1;
    }
    return 0;
}
