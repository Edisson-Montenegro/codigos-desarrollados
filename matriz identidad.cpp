#include <iostream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int t;//tamaño
	cout<<"por favor digite el tamaño de la matriz"<<endl;
	cin>>t;
int I[t][t];

cout<<"matriz identidad"<<endl;
for(int i=0;i<t;i++)
{
	for(int j=0;j<t;j++)
	{
		if(i==j)
		{
			I[i][j]=1;	
		}
		else
		{
			I[i][j]=0;
		}
		
	}
}
for(int i=0;i<t;i++)
{
	for(int j=0;j<t;j++)
	{
		cout<<I[i][j]<<" ";
	}
	cout<<endl;
}

	return 0;
}
