//#include <iostream>
//
//int main(void) {
//    int number;
//
//    std::cout << "Enter a number:\n";
//    std::cin >> number;
//    std::cout << "\n";
//
//    if (number > 1 && number < 100)
//    {
//        std::cout << '+';
//        for (int i = 0; i < number - 2; i++)
//            std::cout << '-';
//        std::cout << '+' << "\n";
//
//        for (int i = 0; i < number - 2; i++)
//        {
//            std::cout << '|';
//            for (int j = 0; j < number - 2; j++)
//                std::cout << ' ';
//            std::cout << '|' << "\n";
//        }
//        std::cout << '+';
//
//        for (int i = 0; i < number - 2; i++)
//            std::cout << '-';
//        std::cout << '+' << "\n";
//    }
//    return 0;
//}