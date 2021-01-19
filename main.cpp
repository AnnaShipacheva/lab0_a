#include "module1.h"
#include "module2.h"
#include "module3.h"
#include <iostream>

int main(int argc, char** argv)
{
	//using std::cout;
	std::cout << "Hello world!" << "\n";

	std::cout << Module1::getMyName() << "\n";
	std::cout << Module2::getMyName() << "\n";

	using namespace Module1;													// //using namespase Module1;
	std::cout << getMyName() << "\n";//(A)										// std::cout<<Module1::getMyName()<<"\n";
	std::cout << Module2::getMyName() << "\n";									

	//using namespace Module2; // (B)											// using namespace Module2;
	std::cout << Module2::getMyName()<<"\n"; // COMPILATION ERROR (C)			//std::cout<<getMyName()<<"\n";

	using Module2::getMyName;													// //using Module2::getMyName;
	std::cout << getMyName() << "\n"; // (D)

	std::cout << Module3::getMyName() << "\n";
}