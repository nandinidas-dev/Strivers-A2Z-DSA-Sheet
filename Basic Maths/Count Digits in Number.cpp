
//link:https://www.geeksforgeeks.org/problems/count-total-digits-in-a-number/1 
#include <iostream>
using namespace std;

int countDigits(int n) {
    // Code here
    
    long long num = llabs((long long)n);
           if(n == 0) return 1;

           int cnt = 0;

           while(n > 0){
               n /= 10;
               cnt++;
           }

           return cnt;
    
}

int main(){
    int n; 
    cin >> n;
    cout << countDigits(n) << endl;
}