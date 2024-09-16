// class activity 10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int x, y,larger ;
	cin >> x >> y;
	if (x > y) {
		larger = x;
		cout << "The larger value is: " << larger << endl;
	}
	else {
		larger = y;
		cout << "The larger value is: " << larger << endl;
	}
	// using conditional operator
	cout << "The larger value is: " << (larger = x > y ? x = larger : y = larger);
	return 0;
}
