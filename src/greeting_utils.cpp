#include <string>

using std::string;

namespace GreetingUtils{
	string create_message(const string& name){
		return "Hello, " + name + "!";
	}
	char* format_as_c_string(const string& msg){
		int array_length = msg.size()+1;
		char* p = new char[array_length];
		for(int i=0; i<array_length; i++){
			p[i] = msg[i];
		}
		p[array_length] = '\0';
		return p;
	}
}
