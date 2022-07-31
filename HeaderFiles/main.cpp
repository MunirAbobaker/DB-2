#include <iostream>
#include "log.h" // not important here




// headerfiels: declare types and functions
// if u create fct in one file and use it in another fle
// c++ compiler will not know it


int main()
{
	Initlog();
		log("hello");
	std::cout << "main" << std::endl;
}