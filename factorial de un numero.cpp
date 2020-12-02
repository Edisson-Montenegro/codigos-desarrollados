#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
   int i,numero,factorial;
   cout<<"por favor ingrese un numero:"<<endl;
   cin>>numero;
   factorial=1;
   for(int i=1;i<=numero;i++)
   {
   	factorial=factorial*i;
   }
  cout<<"el factorial de: "<<numero<<" es = "<<factorial<<endl;
  
	
	
	
	
	
	
	return 0;
}
