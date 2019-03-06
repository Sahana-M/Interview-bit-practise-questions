Largest Number
Asked in:  
Amazon
Goldman Sachs
Microsoft

Given a list of non negative integers, arrange them such that they form the largest number.

For example:

Given [3, 30, 34, 5, 9], the largest formed number is 9534330.

Note: The result may be very large, so you need to return a string instead of an integer.

---------------------------------------------------------------------------

bool cmp (string x, string y){
   return x+y>y+x ;
}


string Solution::largestNumber(const vector<int> &A) {
    vector <string> v;
    int i;
    bool f=true;
    for(i=0; i<A.size(); i++){
        v.push_back(to_string(A[i]));
        if(A[i]!=0)f=false;
    }
    sort(v.begin(), v.end(), cmp);
    if(f)return "0";
    string s="";
    for(auto it:v )
        s+=it;
    return s;
}
