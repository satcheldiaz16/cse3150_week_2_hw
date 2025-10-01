#include <iostream>
#include "greeting_utils.h"
#include <string>

using std::cin, std::cout, std::endl, std::getline, std::string;

int main(){
	cout << "Enter your name: ";
	string input;
	cin >> input;
	string greeting = GreetingUtils::create_message(input);
	char* c_string = GreetingUtils::format_as_c_string(greeting);
	cout << c_string << endl;
	delete[] c_string;
	return 0;
}
