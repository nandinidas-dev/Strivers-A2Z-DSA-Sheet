// link : https://leetcode.com/problems/reverse-integer/description/
// Leetcode 07

#include<bits/stdc++.h>
using namespace std;
int reverse(int x) {

        int isNagative = 0;

        if(x < 0) {
            isNagative = 1;
        }
        long long num = llabs((long long)x);

        long long revNum = 0;

        while (num > 0){
            long long Currdig = num % 10;
            //check overflow 
            if  (revNum > INT_MAX /10 || (revNum == INT_MIN /10 && Currdig > 7) ){
                return 0;
            }
            //check underflow  
            if  (revNum < INT_MIN /10 || (revNum == INT_MIN /10 && Currdig <-8 ) ){
                return 0;
            }
            revNum = revNum * 10 + Currdig;
            num /= 10;
        }
        if (isNagative == 1){
            return -revNum;
        }
        return revNum;
    }

int main (){

    int n;
    cin >> n;

    cout << reverse(n) << endl;


}