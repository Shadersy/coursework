#include "Rmax.hpp"
using namespace std;
int main()
{
	Rmax a;
	Rmax b(11);
	Rmax c(b);
	std::cout << (a+b).toString()<<endl;
	cout<<(a+b)<<endl;
	cout<<a;
	while(1){}
	return 0;
}