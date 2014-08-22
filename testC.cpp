#include <iostream>
using namespace std;

class A {
	public:
		int a;
	public:
		void func() 
		{
			std::cout << "func......" << a << std::endl;
		}
};

int main()
{
	A *a;
	a = NULL;
	a->func();

	return 0;
}
