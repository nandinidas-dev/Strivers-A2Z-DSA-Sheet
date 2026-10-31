// Link: https://leetcode.com/problems/palindrome-number/description/
// Leetcode 09 

#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(int x) {
        int num = x;
        if(x < 0) return false;

        long long revNum = 0;
        while(x > 0){
            int dig = x % 10;
            revNum = revNum * 10 + dig;
            x /=10;
        }

        if(revNum == num){
            return true;
        } 
        return false;
        
    }
int main(){
    int n;
    cin>> n;
    cout << isPalindrome(n) << endl;
}