Implement int sqrt(int x).

Compute and return the square root of x.

If x is not a perfect square, return floor(sqrt(x))

Example :

Input : 11
Output : 3

-------------------------------------

int Solution::sqrt(int A) {
   int start = 1, end = A/2, mid, ans;
   if(A == 1 || A== 0 ){
       return A;
   }
   while(start <= end){
       mid = start + (end-start)/2;
       if(mid <= A/mid){
           start = mid+1;
           ans = mid;
       }
       else{
           end = mid-1;
       }
   }
   return ans;
}
