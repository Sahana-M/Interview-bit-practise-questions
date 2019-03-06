Prime Sum
Asked in:  
Epic systems

Given an even number ( greater than 2 ), return two prime numbers whose sum will be equal to given number.

NOTE A solution will always exist. read Goldbach’s conjecture

Example:


Input : 4
Output: 2 + 2 = 4

-------------------------------------------------------------------

vector<int> Solution::primesum(int A) {
    vector <int> ans;
    int i,j;
    for(i = A-2; i>=2; i--){
    int num1 = i, num2 = A-i;
    int lim1 = sqrt(num1), lim2 = sqrt(num2);
    bool isprime1 = true, isprime2 = true;
    for(j = 2; j <= lim1; j++){
        if(num1%j == 0){
        isprime1 = false;
        break;
        }
    }
    for(j = 2; j <= lim2; j++){
        if(num2%j == 0){
        isprime2 = false;
        break;
        }
    }
    if(isprime1 == true && isprime2 == true){
        ans.push_back(min(num1, num2));
        ans.push_back(max(num1, num2));
        return ans;
    }
    }
}
