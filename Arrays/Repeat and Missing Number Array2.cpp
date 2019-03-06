Repeat and Missing Number Array
Asked in:  
Amazon

You are given a read only array of n integers from 1 to n.

Each integer appears exactly once except A which appears twice and B which is missing.

Return A and B.

Note: Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?

Note that in your output A should precede B.

Example:

Input:[3 1 2 5 3] 

Output:[3, 4] 

A = 3, B = 4

--------------------------------------------------------------

vector<int> Solution::repeatedNumber(const vector<int> &A) {
    int i,c;
    vector <int> v(2);
    sort(A.begin(), A.end());
    for(i=1; i<A.size(); i++){
        if(A[i] == A[i-1]){
            c = A[i];
            break;
        }
    }
    v.push_back(c);
    v.push_back(c+1);
    return v;
}
