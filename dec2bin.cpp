#include <iostream>
#include <cstring>

void
dec2bin(int number)
{
    int i, tmp[100];
    for (i = 0; i < 100 && number; i++) {
        tmp[i] = number % 2;
        number /= 2;
    }
    for (--i; i >= 0; i--) std::cout << tmp[i];
    std::cout << std::endl;
}

int
main(int argc, char **argv)
{
    int number;
    if (argc < 2 || strcmp(argv[1], "--help") == 0) {
        std::cout << "Usage: " << *argv << " [number]...\n";
        std::exit(0);
    }
    for (++argv; *argv; argv++) {
        if ((number = std::atoi(*argv)) == 0) std::cout << "Invalid argument" << std::endl;
        dec2bin(number);
    }
    return 0;
}
