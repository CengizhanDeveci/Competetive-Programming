class Solution {
public:
    void reverseString(vector<char>& s) {
        int begin = 0, end = s.size() -1;
        char tmp;
        while(begin < end){
            tmp = s[begin];
            s[begin++] = s[end];
            s[end--] = tmp;
        }        
    }
};