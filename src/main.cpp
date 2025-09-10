#include <iostream>
#include "greeting_utils.h"

using std::cout, std::endl, std::getline, std::string;

int main(){
	cout << "Enter your name: ";
	string input;
	cin >> input;
	string greeting = GreetingUtils::create_message(input);
	char* c_string = GreetingUtils::create_message(greeting);
	cout << c_string << endl;
	delete[] c_string;
	return 0;
}
