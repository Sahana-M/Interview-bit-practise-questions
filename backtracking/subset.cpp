Subset
Asked in:  
Amazon
Microsoft
Given a set of distinct integers, S, return all possible subsets.

 Note:
Elements in a subset must be in non-descending order.
The solution set must not contain duplicate subsets.
Also, the subsets should be sorted in ascending ( lexicographic ) order.
The list is not necessarily sorted.


//-------------------------------------------


void make(vector<int>& A, vector<int> temp, int curr, vector<vector<int> >& ans){
    int n = A.size();
    
    ans.push_back(temp);
    
    if(curr == n){
        return;
    }
    
    for(int i = curr; i < n; i++){
        vector<int> temp1(temp);
        temp1.push_back(A[i]);
        make(A, temp1, i+1, ans);
    }
}

vector<vector<int> > Solution::subsets(vector<int> &A) {
    vector<vector<int> > ans;
    vector<int> temp;
    
    if(A.size()){
       sort(A.begin(), A.end()); 
    }
    
    make(A, temp, 0, ans);
    
    return ans;
}
