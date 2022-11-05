#include <iostream>;
#include<ctime>
using namespace std;
int main() {
	/*const int n = 10;
	int mas[n];
	srand(time(nullptr));
	for (int i = 0; i < n; i++) {
		mas[i] = rand() % 51 - 20;
		cout << mas[i] << ' ';
	}
	cout << endl;
	for (int i = n - 1; i >= 0; i -= 2) {
		cout << mas[i] << ' ';
	}*/
	/*const int size = 10;
	int arr[size];
	srand(time(nullptr));
	for (int i = 0; i < size : i++) {
		arr[i] = rand() % 41 - 20;
		cout << arr[i] << ' ';
	}
	cout << endl;
	int k = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] < 0) {
			k++;
		}
	}
	cout << "k (<0) = " << k << endl;*/
	/*const int size = 10;
	int arr[size];
	srand(time(nullptr));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 11 - 10;
		cout << arr[i] << ' ';
	}
	cout << endl;
	int k = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] < 0) {
			k++;
		}
	}
	cout << "k (<0) = " << k << endl; */
	//2
	const int size = 10;
	int arr[size];
	srand(time(nullptr));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 11 -20;
		cout << arr[i] << ' ';
	}
	cout << endl;
	int sum = 0;
	for (int i = 0; i <size; i++) {
		if (arr[i] %2  == 0) {
			sum += i;
		}
	}
	cout << sum;
}