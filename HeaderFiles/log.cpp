#include <iostream>
#include "log.h"

void Initlog()
{
	log("Initializing log");
}

void log(const char* message)
{
	std::cout << message << std::endl;
}