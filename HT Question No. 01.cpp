//______________________________________________________________________________
/*1.Write a program in C++ that prints the numbers from 1 to 150 except the multiples of 10.Make use of the continue statement.  
KASHIF NADEEM KAYANI     456466      ME 15 SEC A
*/  
#include <iostream>
using namespace std;
int main() {
	cout<<"QUESTION No.01"<<endl;
    for (int i = 1; i <= 150; i++) {
        if (i % 10 == 0) {
            continue; // Skip the multiples of 10
        }
       cout << i << " ";
    }

    return 0;
    
}






