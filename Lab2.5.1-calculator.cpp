//#include <iostream>
//
//int main(void) {
//    int num1;
//    int num2;
//start:
//    std::cout << "Enter a first operand ";
//    std::cin >> num1;
//    std::cout << "Enter a second operand ";
//    std::cin >> num2;
//    int operation;
//
//    std::cout << "Choose operation: input\n";
//    std::cout << "0 to exit\n";
//    std::cout << "1 to add\n";
//    std::cout << "2 to subtract\n";
//    std::cout << "3 to multiply\n";
//    std::cout << "4 to divide\n";
//    std::cout << "Your choice?\n";
//    std::cin >> operation;
//
//    switch (operation) {
//    case 1: std::cout << num1 + num2 << "\n"; goto start;
//    case 2: std::cout << num1 - num2 << "\n"; goto start;
//    case 3: std::cout << num1 * num2 << "\n"; goto start;
//    case 4: if (num2 == 0) { std::cout << "Division by 0" << "\n"; goto start; }
//          else { std::cout << (double)num1 / num2 << "\n"; goto start; }
//    case 0: goto end;
//    default: std::cout << "Wrong input" << "\n"; goto start;
//    }
//
//
//
//end:
//    std::cout << "End";
//    return 0;
//}