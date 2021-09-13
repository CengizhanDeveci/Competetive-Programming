// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int right) {
        int left = 1;
        int mid;
        while (left < right){
            mid = left + (right - left) / 2;
            if(isBadVersion(mid)){
                right = mid;
            }else{
                left = mid + 1; 
            }
        }
        return right;
    }
};