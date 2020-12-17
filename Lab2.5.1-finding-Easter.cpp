//#include <iostream>
//
//int main()
//{
//    int year;
//    std::cout << "Enter year to find the date of East:\t";
//    std::cin >> year;
//    int x = year % 19;
//    int y = year % 4;
//    int z = year % 7;
//    int v = ((x * 19) + 24) % 30;
//    int w = (2 * y + 4 * z + 6 * v + 5) % 7;
//    if ((v + w) < 10) {
//        std::cout << "March " << (v + w + 22);
//    }
//    else {
//        std::cout << "April " << (v + w - 9);
//    }
//
//    return 0;
//}