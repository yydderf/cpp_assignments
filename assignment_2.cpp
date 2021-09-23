#include <iostream>
#include <string>

using namespace std;

void
dec2bin(int number)
{
    int i, tmp[50];
    for (i = 0; i < 50 && number; i++) {
        tmp[i] = number % 2;
        number /= 2;
    }
    for (--i; i >= 0; i--) cout << tmp[i];
    cout << endl;
}

int
main(void)
{
    int number;
    cout << "Number: ";
    cin  >> number;
    dec2bin(number);
    return 0;
}
