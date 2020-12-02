#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	float a,b,c,x1,x2,m1,m2,det;
	
	cout<<"ecuacion cuadratica de la forma"<<endl;
	cout<<"ax2+bx+c=0"<<endl;

	cout<<"por favor introdusca el coeficiente de segundo grado"<<endl;
	cin>>a;
	cout<<"por favor introdusca el coeficiente de primer grado"<<endl;
	cin>>b;
	cout<<"por favor introdusca el coeficiente independiente"<<endl;
	cin>>c;
	det=b*b-4.00*a*c;
	
	if(det>0)
	{
		x1=(-b+(pow(det,0.5)))/(2*a);
		x2=(-b-(pow(det,0.5)))/(2*a);
		cout<<"x1= "<<x1<<endl;
		cout<<"x2= "<<x2<<endl;
	}
	if(det==0)
	{
		x1=(-b)/(2*a);
		x2=x1;
		cout<<endl<<endl<<"x1=x2= "<<x1;
	}
	if(det<0)
	{
		x1=(-b)/(2*a);
		x2=(-b)/(2*a);
		det=(-1)*det;
		m1=(pow(det,0.5))/(2*a);
		m2=((-1)*pow(det,0.5))/(2*a);
		
		cout<<"x1= "<<x1<<" + "<<m1<<"i"<<endl;
		cout<<"x2= "<<x2<<" + "<<m1<<"i"<<endl;
	}
	
	
	
	
	
	
	
	return 0;
}
