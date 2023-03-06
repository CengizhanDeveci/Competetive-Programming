#include <iostream>
#include <string>

using namespace std;


class Solution {
public:
    int strStr(string haystack, string needle) {
        int lengthNeedle = needle.length();
        int lengthHaystack = haystack.length();
        int* arr = new int[lengthNeedle];

        if(lengthHaystack < lengthNeedle) return -1;

        int prev = -1;
        arr[0] = -1;
        bool check = false;
        for(int i = 1; i < lengthNeedle; i++){
            beginning:
            if(needle[i] == needle[prev + 1]){
                arr[i] = ++prev;
            }else{
                if(prev == -1){
                    arr[i] = -1;
                }else{
                    prev = arr[prev];
                    goto beginning;
                }
            }
        }

        prev = -1;

        for(int i = 0; i < lengthHaystack; i++){
            if(prev == lengthNeedle - 1) return i - prev - 1;
            check:
            if(haystack[i] == needle[prev + 1]){
                prev++;
            }else{
                if(prev == -1) continue;
                prev = arr[prev];
                goto check;
            }
        }
        if(prev == lengthNeedle - 1) return lengthHaystack - prev - 1;
        return -1;
    }
};