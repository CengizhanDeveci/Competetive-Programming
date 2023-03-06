#include <iostream>
#include <string>
#include <map>
#include <unordered_set>

using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, char> mapping;
        map<char, char>::iterator it;
        unordered_set<char> values;
        int size = s.length();
        for(int i = 0; i < size; i++){
            it = mapping.find(s[i]);
            if(it == mapping.end()){
                if(values.find(t[i]) != values.end()) return false;
                values.insert(t[i]);
                mapping[s[i]] = t[i];
            }else{ 
                if(mapping.find(s[i])->second != t[i]) return false;
            }
        }
        return true;
    }
};