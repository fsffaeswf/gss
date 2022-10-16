#include <iostream>
using namespace std;
int main() {
	
	/*8
	for (int i = 20; i <= 50; i++) {
		if (i % 3 == 0 && i % 5 != 0) {
			cout << i<< ' ';
		}
	}*/

	/*9
	for (int i = 35; i <= 87; i++) {
		if ((i % 7 == 1) || (i % 7 == 2) || (i % 7 == 5)) {
			cout << i<< ' ';
		}
	}*/

	/*10
	int sum = 0;
	for (int i = 0; i <= 50; i++) {
		if (i % 5 == 0 || i % 7 == 0) {
			sum += i;
		}
	}
	cout << sum;*/

	/*11
	for (int i = 10; i <= 99; i++) {
		if (i % 4 == 0 && i % 6 != 0) {
			cout << i<<' ';
		}
	}*/

	/*12
	int proiz = 1;
	for (int i = 11; i <= 99; i+=2) {
		if (i % 13 == 0) {
			proiz *= i;
		}
	}
	cout << proiz << ' ';*/

	/*13
	int sum = 0;
	for (int i = 100; i <= 200; i ++) {
		if (i % 17 == 0) {
			sum += i;
		}
	}
	cout << sum << ' ';*/

	/*14
	int sum = 0;
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		sum = sum + i * i;
	}
	cout << sum << ' ';*/

	/*15
	int N,m;
	cin >> N>>m;
	int sum = 0;
	int m_ = m * 60;
	for (int i = 1; i <= N; i ++) {
		sum =sum + m_;
		m_ = m_ + 10;
	}
	sum = sum / 60;
	cout << sum;*/


}
