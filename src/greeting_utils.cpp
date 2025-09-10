
using std::string;

namespace GreetingUtils{
	string create_message(const string& name){
		return "Hello, " + name + "!";
	}
	char* format_as_c_string(const string& msg){
		int array_length = msg.size()+1;
		char* p = new char[array_length];
		for(int i=0; i<array_length; i++){
			if(i==array_length-1){
				p[i] = '\0';
				continue;
			}
			p[i] = msg[i];
		}
		return p;
	}
}
