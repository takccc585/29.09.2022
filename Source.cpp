#include<iostream>
using namespace std;
int main() {
	//if1
	/*int a;
	cin >> a;
	if (a > 0) {
		a = a++;
	}
	else {
		a = a;
	}
	cout << a;*/

	//if2
	/*int a;
	cin >> a;
	if (a > 0) {
		a = a++;
	}
	else {
		a = a-2;
	}
	cout << a;*/

	//if3
	/*int a;
	cin >> a;
	if (a > 0) {
		a = a++;
	}
	if (a == 0) {
		a = 10;
	}
	if (a < 0) {
		a -= 2;
	}*/

	//if4
	/*int a,b,c;
	cin >> a >> b >> c;
	int d = 0;
	if (a > 0) {
		d = d++;
	}
	if (b > 0) {
		d = d++;
	}
	if (c > 0) {
		d = d++;
	}*/

	//if5
	/*int a, b, c;
	cin >> a >> b >> c;
	int d = 0;
	int x = 0;
	if (a > 0) {
		d = d++;
	}
	else {
		x = x++;
	}
	if (b > 0) {
		d = d++;
	}
	else {
		x = x++;
	}
	if (c > 0) {
		d = d++;
	}
	else {
		x = x++;
	}

	cout << d << "   " << x;*/

	//if6
	/*int a,b;
	cin >> a >> b;
	if (a > b) {
		cout << a;
	}
	else {
		cout << b;
	}*/

	//if7
	/*int a, b;
	cin >> a >> b;
	if (a > b) {
		cout << "1";
	}
	else {
		cout << "2";
	}*/

	//if8
	/*int a, b;
	cin >> a >> b;
	
	if (a > b) {
		cout << a << "  " << b;
	}
	if (b > a) {
		cout << b << "  " << a;
	}
	if (a==b) {
		cout << "=";
	}
	else {
		cout << "";
	}*/

	//if9
	/*int a, b;
	int c = 0;
	cin >> a >> b;
	
	if (a < b) {
		c = a;
		a = b;
		b = c;
		cout << "A" << a << "B" << b;
	}
	else {
		cout << "A" << a << "B" << b;
	}*/
	
	//if10
	/*int a, b;
	int c = 0;
	cin >> a >> b;
	
	if (a != b) {
		a = a + b;
		b = a;
	}
	else {
		a = 0;
		b = 0;
	}
	cout << a << " " << b;*/
	
	//if11
	/*int a, b;
	int c = 0;
	cin >> a >> b;
	if (a == b) {
		a = 0;
		b = 0;
	}
	if (a > b) {
		b = a;
	}
	if (b > a) {
		a = b;
	}
	cout << "A=" << a << " " << "B=" << b;*/

	//if12
	/*int a, b,c;
	cin >> a >> b >> c;
	if (a < b and a < c) {
		cout <<  a;
	}
	if (b < a and b < c) {
		cout << b;
	}
	if (c < a and c < b) {
		cout << c;
	}*/
	
	//if13
	/*int a, b,c;
	cin >> a >> b >> c;
	if ((a < b and a > c) or (a > b and a < c)) {
		cout <<  a;
	}
	if ((b < a and b > c) or (b > a and b < c)) {
		cout << b;
	}
	if ((c < a and c > b) or (c > a and c < b )) {
		cout << c;
	}*/

	//14
	/*int a, b,c;
	cin >> a >> b >> c;
	if (a < b and a < c) {
		cout <<  a << endl;
	}
	if (b < a and b < c) {
		cout << b << endl;
	}
	if (c < a and c < b) {
		cout << c << endl;
	}
	if (a > b and a > c) {
		cout << a << endl;
	}
	if (b > a and b > c) {
		cout << b << endl;
	}
	if (c > a and c > b) {
		cout << c << endl;
	}*/
	return 0;
}