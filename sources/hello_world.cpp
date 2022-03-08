#include <iostream>
#include <string>

int main() {
	std::string username;
	
	std::getline(std::cin, username);
 	std::cout << "Hello world from " << username << std::endl;

	return 0;
}
