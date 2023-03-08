class Solution {
public:
    int minimumSum(int num) {
        int* numbers = new int[10]();
        for(int i = 0; i < 4; i++){
            numbers[num % 10]++;
            num /= 10;
        }
        int num1 = 0;
        int num2 = 0;
        int count = 0;
        int i = 0;
        while(true){
            if(count == 4) break;
            if(numbers[i] > 0){
                switch(count){
                    case 0:
                        num1 = i * 10;
                        break;
                    case 1:
                        num2 = i * 10;
                        break;
                    case 2:
                        num1 += i;
                        break;
                    case 3:
                        num2 += i;
                        break;
                    default:
                        break;
                }
                count++;
                numbers[i]--;
            }else i++;
        }
        return num1 + num2;
    }
};