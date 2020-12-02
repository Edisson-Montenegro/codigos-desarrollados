#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int A[50];
	cout<<"multiplicacion por escalar"<<endl;
	
	for(int i=0;i<50;i++)
	{
		A[i]=i*7;
	}
	
	for(int i=0;i<50;i++)
	{
		cout<<A[i]<<endl;
	}
	
	
	
	
	return 0;
}
