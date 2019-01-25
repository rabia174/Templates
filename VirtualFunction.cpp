#include <iostream>
using namespace std;

class A
{
	int a;
public:
	A(int x) :a(x) 
	{
		cout << "A\n";
	}
	 void f(int x)
	{
		cout << "A::f(int)\n";
	}
};
//---------------------------------------------------
// TODO: 
// -----
// Please write all necessary class definitions below
// 
// NOTE THAT:
// ----------
// you are expected to print in a similar convention 
// in your class constructors and f functions
// as depicted in class A (above)


//---------------------------------------------------

class B:virtual public A{

 public:

 B( int b ):A( b ) { cout<<"B\n"; }
 void f( double b ){ cout<<"B::f(double)\n"; }

};
class C:virtual public A{
 
 public:
 
 C( int c ):A( c ){ cout<<"C\n"; }
 void f( char c ){ cout<<"C::f(char)\n"; }
 
};

class D:public C,public B{
 
 public:

 D( int d ):C( d ),B( d ),A( d ) { cout<<"D\n"; }
 void f( float f ){ cout<<"D::f(float)\n"; }
 using B::f;
 using A::f;
 using C::f;

};

int main()
{
	D d(5);

	d.f(1);
	d.f(1.3);
	d.f(2.7f);
	d.f('c');
}
