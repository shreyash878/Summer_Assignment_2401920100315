class Solution {
public:
    int compress(vector<char>& chars) {
        vector<char> ans;
        int i = 0;

        while (i < chars.size()) {
            char curr = chars[i];
            int count = 0;

            while (i < chars.size() && chars[i] == curr) {
                count++;
                i++;
            }

            ans.push_back(curr);

            if (count > 1) {
                string cnt = to_string(count);
                for (char ch : cnt) {
                    ans.push_back(ch);
                }
            }
        }

        chars = ans;
        return ans.size();
    }
};
