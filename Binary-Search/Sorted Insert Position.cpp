Sorted Insert Position
Asked in:  
Yahoo
Given a sorted array and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You may assume no duplicates in the array.

Here are few examples.

[1,3,5,6], 5 → 2
[1,3,5,6], 2 → 1
[1,3,5,6], 7 → 4
[1,3,5,6], 0 → 0

-------------------------------------------------------------------------


int Solution::searchInsert(vector<int> &A, int B) {
   int c = A.size();
   int low = 0, high = c-1, row = -1;
    while(low<=high){
        int mid = low + (high - low)/2;
        if(A[mid] == B){
            row = 1;
            return mid;
        }
        else if(A[mid]< B){
            if(A[mid+1] > B || (mid+1) == c) 
                return mid+1;
            else
                low = mid+1;
        } 
        else {
            if(A[mid-1] < B || (mid-1) == -1)
                return mid;
            else
                high = mid - 1;
        }
    }
    return 0;
}
