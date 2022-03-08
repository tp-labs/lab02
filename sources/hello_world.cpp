#include <iostream>
#include <string>


/*
	Программа выводит hello world от пользователя
	(Ниже представлен хороший кодстайл)
*/

int main() {
	std::string username; // Имя пользователя
	
	std::getline(std::cin, username); // Ввод имени пользователя
 	std::cout << "Hello world from " << username << std::endl; // Вывод

	return 0;
}
