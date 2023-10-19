#include <iostream>
#include <cmath>

using namespace std;

template <typename T>
T Mymax(T x, T y)
{
    return (x>y)?x:y;
}

template <typename A>
A Mymin(A x,A y)
{
	return(x<y)?x:y;
}

template <typename B>
B sqr(B x)
{
	return (x*x);
}

template <typename C>
C cube(C x)
{
	return(x*x*x);
}



int main()
{
    float a,b,c,d,s,r,e,f,g,h;
    cout<<"Enter A: ";
    cin>>a;
    cout<<"Enter B: ";
    cin>>b;
    c=Mymax<int>(a,b);
    d=Mymin<int>(a,b);
    s=sqr<int>(a);
    r=cube<int>(a);
    c=Mymax<double>(a,b);
    d=Mymin<double>(a,b);
    s=sqr<double>(a);
    r=cube<double>(a);
    cout<<"Max: "<<c<<endl;
    cout<<"Min: "<<d<<endl;
    cout<<"SQR: "<<s<<endl;
    cout<<"Cube: "<<r<<endl;
    cout<<"Max: "<<c<<endl;
    cout<<"Min: "<<d<<endl;
    cout<<"Sqr: "<<s<<endl;
    cout<<"Cube: "<<r<<endl;
}