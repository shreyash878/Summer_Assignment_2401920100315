class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size()>haystack.size()) return -1;
        for(int i =0 ;i<=(haystack.size()-needle.size());i++){
            string sub = haystack.substr(i,needle.size()); // my aproach is to create a substring and check whether it is exist or not .
            if(sub == needle){
                return i;
            }
        }
        return -1;
    }
};
