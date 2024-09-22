
#include <iostream>
#include <stdbool.h>

bool is_leap_year(int year);

int main() {
    if(is_leap_year(1600)) 
        std::cout << "1600 is a leap year\n";
    else
        std::cout << "1600 is not a leap year\n";

    if(is_leap_year(2000)) 
        std::cout << "2000 is a leap year\n";
    else
        std::cout << "2000 is not a leap year\n";

    if(is_leap_year(2400)) 
        std::cout << "2400 is a leap year\n";
    else
        std::cout << "2400 is not a leap year\n";

    if(is_leap_year(1700)) 
        std::cout << "1700 is a leap year\n";
    else
        std::cout << "1700 is not a leap year\n";
    if(is_leap_year(1800)) 
        std::cout << "1800 is a leap year\n";
    else
        std::cout << "1800 is not a leap year\n";
    if(is_leap_year(1900)) 
        std::cout << "1900 is a leap year\n";
    else
        std::cout << "1900 is not a leap year\n";
    if(is_leap_year(1996)) 
        std::cout << "1996 is a leap year\n";
    else
        std::cout << "1996 is not a leap year\n";
    if(is_leap_year(2004)) 
        std::cout << "2004 is a leap year\n";
    else
        std::cout << "2004 is not a leap year\n";
    if(is_leap_year(2020)) 
        std::cout << "2020 is a leap year\n";
    else
        std::cout << "2020 is not a leap year\n";
    if(is_leap_year(1997)) 
        std::cout << "1997 is a leap year\n";
    else
        std::cout << "1997 is not a leap year\n";
    return 0;
}

bool is_leap_year(int year) {
    if (year % 4 != 0) return false;
    else if (year % 100 != 0) return true;
    else if (year % 400 != 0) return false;
    else return true;
}

