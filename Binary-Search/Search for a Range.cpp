Given a sorted array of integers, find the starting and ending position of a given target value.

Your algorithm’s runtime complexity must be in the order of O(log n).

If the target is not found in the array, return [-1, -1].

Example:

Given [5, 7, 7, 8, 8, 10]

and target value 8,

return [3, 4].

---------------------------------

vector<int> Solution::searchRange(const vector<int> &A, int B) {
    int c = A.size();
    int start = 0, high = c-1, mid;
    vector<int> v(2);
    v[0]=-1;v[1]=-1;
    while(start <= high){
        mid = start + (high - start)/2;
        if(A[mid] == B){
            high = mid-1;
            v[0] = mid;
        }
        else if(A[mid]<B){
            start = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    if(v[0]==-1)return v;
    start = v[0], high = c-1;
    while(start <= high){
        mid = start + (high - start)/2;
        if(A[mid]== B){
            start = mid+1;
            v[1] = mid;
        }
        else if(A[mid] < B){
            start = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return v;
    
}
