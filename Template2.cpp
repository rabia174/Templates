#include<iostream>

using namespace std;

class Storage
{
  private:

  int nValue;

  public:

  Storage( int n=0 ):nValue( n ) {}
  Storage& operator+=( Storage b )
  {
    this->nValue+=b.nValue;
    return *this;
  }
  Storage operator*( int n )
 {
   Storage result;
   result.nValue=this->nValue*n;
   return result;
 } 
 Storage operator+( int n )
 {
   Storage result;
   result.nValue=this->nValue+3;
   return result;
 }
 friend ostream& operator<<( ostream& os,const Storage& b )
 {

  os<<b.nValue;
  return os;
}

};

 Storage operator*( int n,Storage b )
{
   Storage result;
   
   result=b*2;
   return  result;
}

template<class T>
T compute(T val)
{
T result = 0;
result += 2*val + 3;
cout<<result<<"\n";
return result;
}

int main()
{
int a = 2;
double b = 1.5;
Storage c(10);
Storage d;
a = compute(a);
b = compute(b);
c = compute(c); // should print 23
d = compute(d); // should print 3
return 0;
}




