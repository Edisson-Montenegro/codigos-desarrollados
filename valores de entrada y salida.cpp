#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	double v1,v2,v3;
	cout<<"por favor ingrese el primer valor"<<endl;
	cin>>v1;
	cout<<"por favor ingrese el segundo valor"<<endl;
	cin>>v2;
	cout<<"por favor ingrese el tercer valor"<<endl;
	cin>>v3;
	
	//numero mayor
	if(v1>v2 && v1>v3)
	{
		cout<<"el numero mayor es "<<v1<<endl;
	}
	if(v2>v1 && v2>v3)
	{
		cout<<"el numero mayor es "<<v2<<endl;
	}
	if(v3>v2 && v3>v1)
	{
		cout<<"el numero mayor es "<<v3<<endl;
	}
	if(v1==v2 && v1>v3)
	{
		cout<<"el numero mayor es "<<v1<<endl;
	}
	if(v1>v2 && v1==v3)
	{
		cout<<"el numero mayor es "<<v1<<endl;
	}
	if(v2>v1 && v2==v3)
	{
		cout<<"el numero mayor es "<<v2<<endl;
	}

	//numero menor
		if(v1<v2 && v1<v3)
	{
		cout<<"el numero menor es "<<v1<<endl;
	}
	if(v2<v1 && v2<v3)
	{
		cout<<"el numero menor es "<<v2<<endl;
	}
	if(v3<v2 && v3<v1)
	{
		cout<<"el numero menor es "<<v3<<endl;
	}
	if(v1==v2 && v1<v3)
	{
		cout<<"el numero menor es "<<v1<<endl;
	}
	if(v1<v2 && v1==v3)
	{
		cout<<"el numero menor es "<<v1<<endl;
	}
	if(v2<v1 && v2==v3)
	{
		cout<<"el numero menor es "<<v2<<endl;
	}
	
	return 0;
}
