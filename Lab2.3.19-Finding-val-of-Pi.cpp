//#include <iostream>
//
//int main() {
//	double pi = 0.0;
//	long n;
//
//	std::cout << "Input number of iterations: ";
//	std::cin >> n;
//	std::cout << "\n";
//
//
//	for (int i = 1; i <= n; i++) {
//		if (i % 2 != 0) {
//			pi += 1.0 / (2 * i - 1);
//		}
//		else {
//			pi -= 1.0 / (2 * i - 1);
//		}
//	}
//	std::cout.precision(20);
//	std::cout << "Pi = " << (pi * 4.) << "\n";
//
//	return 0;
//}