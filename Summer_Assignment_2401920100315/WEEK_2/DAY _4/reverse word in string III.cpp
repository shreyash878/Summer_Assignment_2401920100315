class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        int left = 0;

        for (int i = 0; i <= n; i++) {
            // when we hit a space or end of string
            if (i == n || s[i] == ' ') {
                int right = i - 1;

                // reverse current word
                while (left < right) {
                    swap(s[left], s[right]);
                    left++;
                    right--;
                }

                // move left to next word start
                left = i + 1;
            }
        }

        return s;
    }
};
