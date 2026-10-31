


// link : https://takeuforward.org/practice/dsa/count-number-of-odd-digits-in-a-number

#include <iostream>
using namespace std;

int countOddDigit(int n) {

        long long num = llabs((long long)n);
        if(n == 0) return 1;

        int oddCnt = 0;

        while(n > 0){

            int dig = n % 10;
            if(dig % 2 != 0){
                oddCnt++;
            }
             n /= 10;
            
        }

        return oddCnt;

    }
int main()
{
    int n;
    cin >> n;
    
    cout << countOddDigit(n) << endl;
    

    return 0;
}
