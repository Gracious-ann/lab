//#include<iostream>
//
//int main() 
//{
//    int n;
//M:
//    std::cout << "Enter a number:\t";
//    std::cin >> n;
//    if (n == 0 || n == 1) {
//        std::cout<<n<<"! = "<< 1;
//    }
//    else if (n >= 2) {
//        long fact = 1;
//        for (int i = 2; i <= n; i++) {
//            fact *= i;
//        }
//        std::cout << n << "! = "<< fact;
//    }
//    else {
//        std::cout << "It is wrong number.\n";
//        goto M;
//    }
//    return 0;
//}