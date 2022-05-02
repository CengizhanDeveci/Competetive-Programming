class Solution {
public:
    vector<int> closestDivisors(int num) {
        int num1,num2;
        for(int i = pow(num+2,0.5); i > 0; i++){
            if(!((num+1)%i)){
                num1 = i; num2 = (num+1) / i;
                break;
            }
            if(!((num+2)%i)){
                num1 = i;
                num2 = (num+2) / i;
                break;                
            }
        }
        vector<int> result;
        result.push_back(num1);
        result.push_back(num2);
        return result;        
    }
};