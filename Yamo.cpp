#include <iostream>

using namespace std;

int main()
{
	int age;
	cout << "What is your age?";
	cin >> age;
	
	if( age < 16) {
			cout << "Too young to drive";
	}
	if( age == 16) {
			cout << "Better clear the road";
	}
	if( age > 16) {
			cout << "You are getting pretty old";
	}
	
	return 0;
}