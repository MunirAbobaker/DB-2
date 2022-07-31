#include<iostream>

int main()
{
	// type name = 8?; (int 4 byte size)
	int variable = 8; // -2b -> 2b

	std::cout << variable << std::endl;


	 variable = 20;
	 // cuz integer is sighned with +/- sign
	 // one bit out of hte 32 bits hast to be for this sign, left 31 bit for number
	 // so we have 2^31 around 2 milion
	
	std::cout << variable << std::endl;

	// if u do not want to use negative using unsigned
	unsigned int variable2 = 8; // 2^32 is around 4,2 milion
	// char(1), short(2buyte), int (4), long(4 depends on compiler), long long (8byte) + signed
	char a = 'a';
	char b = 65; // print it as char
	short v = 65; // number 

	float var2 = 5.5; // type double
	float var3 = 5.5f; // float 4 byte, double 8 byte
	bool var5 = true; //1 byte


		// check size
	std::cout << sizeof(bool) << std::endl;

	std::cin.get();
}