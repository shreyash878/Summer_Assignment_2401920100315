class Solution {
public:
    bool isanagram(string a, string b) {
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        return a == b;
    }

    vector<int> findAnagrams(string s, string p) {
        vector<int> finalans;

        int k = p.size();

        if (s.size() < k) return finalans;

        string window = "";

        // First window
        for (int i = 0; i < k; i++) {
            window.push_back(s[i]);
        }

        if (isanagram(window, p)) {
            finalans.push_back(0);
        }

        // Slide the window
        for (int i = k; i < s.size(); i++) {
            window.erase(window.begin()); // remove leftmost char
            window.push_back(s[i]);       // add new char

            if (isanagram(window, p)) {
                finalans.push_back(i - k + 1);
            }
        }

        return finalans;
    }
};
