class Solution {
public:
    bool check(string s){
          int n = s.size();

        for (int i = 1; i <= n / 2; i++) {
            string sub = s.substr(0, i);  // take prefix

            if (n % sub.size() != 0) continue;

            string temp = "";

            while (temp.size() < n) {
                temp += sub;
            }

            if (temp == s) return true;
        }

        return false;
    }
    bool repeatedSubstringPattern(string s) {
      return check(s);
    }
};
