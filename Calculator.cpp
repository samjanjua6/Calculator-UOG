#include<iostream>
#include<conio.h>
using namespace std;
int main() {

	int x, n;
	double sum = 0, multi=1, divide=0, subtract=0;
	char oprator;
	cout << "What operation do you want to perform ? (+,-,*,/) : ";
	cin >> oprator;
	switch (oprator)
	{

	case '+': {

		cout << "How many Numbers You want to add : " << "\n";
		cin >> n;
		int* arr = new int[n];

		cout << "Enter " << n << " Numbers" << endl;
		for (x = 0; x < n; x++) {
			cin >> arr[x];
		}
		cout << "Sum of " << n << " numbers is =";
		for (x = 0; x < n; x++) {
			sum = sum + arr[x];

		}
		cout << sum;
		delete[] arr;
		break; }

	case '-': {

		cout << "How many Numbers You want to Subtract : " << "\n";
		cin >> n;
		int* arr = new int[n];

		cout << "Enter " << n << " Numbers" << endl;
		for (x = 0; x < n; x++) {
			cin >> arr[x];
		}
		cout << "Sum of " << n << " numbers is =";
		for (x = 0; x < n; x++) {
			subtract = arr[x] - subtract;

		}
		cout << subtract;
		delete[] arr;
		break; }

	case '*': {

		cout << "How many Numbers You want to Multiply : " << "\n";
		cin >> n;
		int* arr = new int[n];

		cout << "Enter " << n << " Numbers" << endl;
		for (x = 0; x < n; x++) {
			cin >> arr[x];
		}
		cout << "Sum of " << n << " numbers is =";
		for (x = 0; x < n; x++) {
			multi = multi * arr[x];

		}
		cout << multi;
		delete[] arr;
		break; }
	case '/':
	{
		cout << "Enter Dividend  : ";
		double n1, n2;
		cin >> n1;
		cout << "Enter Divisor : ";
		cin >> n2;
		divide = n1 / n2;
		cout << "The answer is = ";
		cout<< divide;
		break;
	}

	default:
		cout << "You din't Entered correct operator : ";
		break;
	}

	_getche();
	return 0;

}