Letter Phone
Asked in:  
Facebook
Epic systems
Given a digit string, return all possible letter combinations that the number could represent.

The digit 0 maps to 0 itself.
The digit 1 maps to 1 itself.

Input: Digit string "23"
Output: ["ad", "ae", "af", "bd", "be", "bf", "cd", "ce", "cf"].
Make sure the returned strings are lexicographically sorted.

//-----------------------------


string temp ="";
unordered_map<char, string> keypad = {
    {'1', "1"},
    { '2', "abc" },
    { '3', "def" },
    { '4', "ghi" },
    { '5', "jkl" },
    { '6', "mno" },
    { '7', "pqrs" },
    { '8', "tuv" },
    { '9', "wxyz" },
    { '0', "0" }
};

void backtracking (string digits, int i, vector <string> &ans){
    if(digits[i] - '0' >-1 && digits[i]- '0' <10){
        string str = keypad[digits[i]];
        for(auto j=0; j<str.length(); j++){
            temp += str[j];
            if(i==digits.length()-1)
                ans.emplace_back(temp);
            else
                backtracking(digits, i+1, ans);
            temp.pop_back();
         }
    }
}



vector<string> Solution::letterCombinations(string A) {
   vector <string> ans;
   backtracking(A, 0,ans);
   return ans;
}
