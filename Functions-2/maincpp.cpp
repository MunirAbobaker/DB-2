#include<iostream>


int Multiply(int a, int b)

{
	return a * b;
}


void MultiplyAndLog(int a, int b)
{
	int results = Multiply(a, b);

	std::cout << results << std::endl;
}
// special function, excempt from return statement
// atuomatically return 0
int main()
{
	MultiplyAndLog(3, 2);

	std::cout << "hello ther" << std::endl;
	std::cin.get();
}