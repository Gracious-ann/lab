//#include<iostream>
//
//int main() {
//	long n, a;
//M:
//	std::cout << "Enter a number:\t";
//	std::cin >> n;
//	long m = 1;
//	long k = 1;
//
//	if (n == 1 || n == 2) {
//		std::cout << "1";
//	}
//	else if (n >= 3) {
//		for (int i = 2; i < n; i++) {
//			a = k + m;
//			m = k;
//			k = a;
//		}
//		std::cout << a<<"\t";
//	}
//	else {
//		std::cout << "It is wrong number.\n";
//		goto M;
//	}
//	return 0;
//}