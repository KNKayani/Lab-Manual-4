//___________________________________________________________________________________
/*3.Write a program in C++ to check whether a number is prime or not. 
KASHIF NADEEM KAYANI     456466      ME 15 SEC A
*/
#include <iostream>
using namespace std;
int main() {
   cout<<"QUESTION No.03"<<endl;
    int num;
    bool isPrime = true;

    cout << "Enter a number: ";
    cin >> num;

    if (num <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }

    return 0;
}

