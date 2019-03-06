Sum of pairwise Hamming Distance
Asked in:  
Google

Hamming distance between two non-negative integers is defined as the number of positions at which the corresponding bits are different.

For example,

HammingDistance(2, 7) = 2, as only the first and the third bit differs in the binary representation of 2 (010) and 7 (111).

Given an array of N non-negative integers, find the sum of hamming distances of all pairs of integers in the array.
Return the answer modulo 1000000007.



--------------------------------------------------------

#define mod 1000000007
int Solution::hammingDistance(const vector<int> &A) {
   long long int ans=0,n=A.size();
    long long int count;
    for(int i=0;i<31;i++){
        count=0;
        for(int j=0;j<n;j++){
            if(A[j]&(1<<i))
             count++;
        }
        ans=(ans+count*(n-count)*2)%1000000007;
    }
    return ans;
}
