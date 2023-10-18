#include<iostream>

using namespace std;

class Two;
class One{
	public:
		int a;
		void One1()
		{
			cout<<"Enter A: ";
			cin>>a;
		}
		friend One operator+(One,Two);
		friend void operator-(One,Two);
		friend void operator*(One,Two);
		friend void operator/(One,Two);
};
class Two{
	public:
		int b;
		void Two1()
		{
			cout<<"Enter B: ";
			cin>>b;
		}
		friend One operator+(One,Two);
		friend void operator-(One,Two);
		friend void operator*(One,Two);
		friend void operator/(One,Two);
};
One operator+(One a1,Two b1){
//	cout<<"Addition: ";
	//cout<<a1.a+b1.b<<endl;
	One temp;
	temp.a=a1.a+b1.b;
	return temp;
}
void operator-(One a1,Two b1){
	cout<<"Subtraction: ";
	cout<<a1.a-b1.b<<endl;
}
void operator*(One a1,Two b1){
	cout<<"Multiplication: ";
	cout<<a1.a*b1.b<<endl;
}
void  operator/(One a1,Two b1){
	cout<<"Division: ";
	cout<<a1.a/b1.b<<endl;
}
int main(){
	One A1,A2;
	Two B1;
	A1.One1();
	B1.Two1();
	A2=A1+B1;
	cout<<A2.a;
	A1-B1;
	A1*B1;
	A1/B1;
}