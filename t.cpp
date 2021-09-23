#include <iostream>

using namespace std;

int
cubic(int num)
{
    return num * num * num;
}

int
main(int argc, char **argv)
{
    int i, j, k, l;
    for (int i = 0; i < 1000; i++) {
        j = i & 100;
        cout << j << endl;
    }
}
