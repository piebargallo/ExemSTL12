// CPP program to illustrate
// Application of empty() function

#include <forward_list>
#include <iostream>

using namespace std;

// Driver code
int main() {
	
	// Def forward_list
	forward_list<int> myforwardlist{ 1, 2, 9, 16 };
	
	// Def var
	int sum = 0;
	
	// Control Structure for sum all elements
	while (!myforwardlist.empty()) {
		sum = sum + myforwardlist.front();
		myforwardlist.pop_front();
	}
	// Printing to sum all elements of forward_list
	cout << sum;
	
	return 0;

} // End driver
