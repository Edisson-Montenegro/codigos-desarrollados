#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int nf=3,nc=3,k=0;
	int A[nf][nc];
	
	for(int i=0;i<nf;i++)
	{
		for(int j=0;j<nc;j++)
		{
			A[i][j]=k++;
		}
	}
	for(int i=0;i<nf;i++)
	{
		for(int j=0;j<nc;j++)
		{
			cout<<A[i][j]<<"  ";
		}cout<<endl;
	}
	
	
	return 0;
}
