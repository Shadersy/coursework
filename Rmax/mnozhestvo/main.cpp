#include "Rmax.hpp"
#include "Rmin.hpp"
#include "Rmaxmin.hpp"
using namespace std;
int main()
{
	cout << "RMAX" << endl;
	Rmax a1;
	Rmax b1(11);
	Rmax c1(b1);
	std::cout << (a1+b1).toString()<<endl;
	cout<<(a1*b1)<<endl;
	cout << (a1/b1) << endl;
	cout << (b1 == c1) << endl;
	cout<<a1<<endl;

	cout <<endl<< "RMIN" << endl;
	Rmin a2;
	Rmin b2(11);
	Rmin c2(b2);
	std::cout << (a2 + b2).toString() << endl;
	cout << (a2*b2) << endl;
	cout << a2<<endl;

	cout << endl << "RMAXMIN" << endl;
	Rmaxmin a3;
	Rmaxmin b3(11);
	Rmaxmin c3(b3);
	std::cout << (a3 + b3).toString() << endl;
	cout << (a3*b3) << endl;
	cout << (c3+c3) << endl;
	cout << a3<<endl;
	while(1){}
	return 0;
}