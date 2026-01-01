#include<iostream>
using namespace std;
class cse{
	int i;
	public: void seti(int n){i=n;}
	     int geti(){return i;}
};
cse newfun()
{
	cse x;
	x.seti(10);
	return x;
}
int main()
{
	cse obj;
	obj=newfun();
	cout<<"now we are in main..... printing i="<<obj.geti()<<endl;
	return 0;
}

