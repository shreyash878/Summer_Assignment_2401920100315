class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        sort(s.begin(),s.end()); /* sort both the string so they sort according ASCII and
                                     if they both are equal means they are ansgram */
          sort(t.begin(),t.end());
        if (s==t) return true;
        return false;
    }
};
