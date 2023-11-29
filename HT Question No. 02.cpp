//_______________________________________________________________________
/*2.Write a C++ program to find the sum of digits of a number. The sum of digits means adding all the digits of any number, for example, we take any number like 358. Its sum of all digits is 3+5+8=16.
KASHIF NADEEM KAYANI     456466      ME 15 SEC A
*/
#include <iostream>
using namespace std; // Using the std namespace
int main() {
	cout<<"QUESTION No.02"<<endl;
    int number, sum = 0;

    cout << "Enter a number: ";
    cin >> number;

    if (number < 0) {
        number = -number;
    }

    while (number > 0) {
        int digit = number % 10;
        sum += digit;
        number /= 10;
    }

    cout << "The sum of the digits is: " << sum << endl;

    return 0;
}
 
