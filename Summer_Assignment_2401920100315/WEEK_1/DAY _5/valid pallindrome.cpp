class Solution {
public:
    bool isPalindrome(string s) {
        string ans = "";
        for(char ch : s){
            if(isalnum(ch)){
                char ch1 = tolower(ch);
                ans.push_back(ch1);
            }
        }
        if(ans.size()==0) return true;
        int left = 0 ;
        int right = ans.size()-1;
        while(left<=right){
            if(ans[left]!=ans[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
// approach
// create a new string that consist only alpha num and use two pointer method to check whether the string is pallindrome or not;
