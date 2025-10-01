#pragma once
#include <string>

using std::string;

namespace GreetingUtils{
	string create_message(const string& name);
	char* format_as_c_string(const string& msg);
}
