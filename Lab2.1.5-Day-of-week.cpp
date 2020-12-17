#include <iostream>

int main(void)
{
    int year;
    std::cout << "Enter a year\n";
    std::cin >> year;
    int month;
    std::cout << "\nEnter a month\n";
    std::cin >> month;
    int day;
    std::cout << "\nEnter a day\n";
    std::cin >> day;
    if (year >= 1901 && year <= 2100 && month >= 1 && month <= 12 && day >= 1) {
        month = month - 2;
        if (month < 0) {
            month = month + 12;
            year = year - 1;
        }
        month *= 83 / 32;
        month = day + month;
        year = year + month;
        month = year / 4 + month;
        month = year / 100 - month;
        month = year / 400 + month;
        int n = month % 7*(-1)-1;
        std::cout << n<<"\n";
        if (n == 0) {
            std::cout << "sunday";
        }
        if (n == 1) {
            std::cout << "mondaY";
        }
        if (n == 2) {
            std::cout << "tuesday";
        }
        if (n == 3) {
            std::cout << "wednesday";
        }
        if (n == 4) {
            std::cout << "thursday";
        }
        if (n == 5) {
            std::cout << "friday";
        }
        if (n == 6) {
            std::cout << "saturday";
        }
        std::cout << "\n";
    }
    return 0;
}