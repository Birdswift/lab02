#include <iostream>
#include <string>

void main(){
std::string name = "";
std::cout << "Hello, please, input your name." <<std::endl; //запрос имени?
std::cin >> name; //ввод имени.
std::cout << "Hello world from " << name <<std::endl; //вывод имени!
}
