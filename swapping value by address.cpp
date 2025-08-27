/* Vinay koli
PRN 24070123133
ENTC B2 */

// swapping value by address
#include <iostream>
using namespace std;

void swap(int &a, int &b) 
{
    int temp = a;
    a = b;
    b = temp;
}

int main() 
{
    int a = 20;
    int b = 50;

    swap(a, b); 
    cout <<"The value of a is " << a<<" "<<" and the value of b is "<< b << endl; 

    return 0;
}

/*output for this code

The value of a is 50  and the value of b is 20

*/
