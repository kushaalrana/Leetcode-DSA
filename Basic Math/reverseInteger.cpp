class Solution {
public:
    int reverse(int x) {
        int reverseNum=0;
        while(x!=0){
            int lastDigit = x%10;
            if(reverseNum>INT_MAX/10 || reverseNum<INT_MIN/10 ){
                return 0;
            }
            reverseNum=reverseNum*10+lastDigit;
            x/=10;
            }
        return reverseNum;
    }
};

//Notes 
Check with the maximum number and minimum number because when we multiply with 10 it goes out of bound so divide then max number by 10 and then check so that next step we can multiply by 10
For more info check Youtube Link: https://www.youtube.com/watch?v=0fwrMYPcGQ0&t=1049s