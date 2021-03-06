/*Double Stack using one array*/

#include <iostream>
using namespace std;

const int n = 10;
int arr[n];
int top1 = -1, top2 = n;

void push1(int n) {
	if (top1 < top2 - 1) {
		top1 += 1;
		arr[top1] = n;
	}
	else
	cout << "\nOverflow";
}

void push2(int n) {
	if (top2 > top1 + 1) {
		top2 -= 1;
		arr[top2] = n;
	}
	else 
	cout << "\nOverflow";
}

int pop1() {
	if (top1 > -1)
	return arr[top1];
	else {
		cout << "\nUnderflow";
		return -1;
	}
}

int pop2() {
	if (top2 < n)
	return arr[top2];
	else {
		cout << "\nUnderflow";
		return -1;
	}
}

int main() {
	
	for (int i = 0; i < n - 2; i++) 
	push1(i);
	
	for (int i = 0; i < 2; i++)
	push2(i+60);
	
	push2(127);
	push1(128);
	
	for (int i = 0; i < n; i++) 
	cout << endl << arr[i];
	return 0;
}
