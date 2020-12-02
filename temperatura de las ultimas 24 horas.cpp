#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int op;
	int A[24]={15,14,14,13,13,13,13,15,17,19,28,21,22,22,22,22,22,21,19,18,18,17,16,16};
	cout<<"temperatura en la ciudad de pereira"<<endl;
	cout<<"por favor ingrese la hora a la cual desea saber su temperatura"<<endl;
	cout<<"hora en 24H"<<endl;
	cin>>op;
	
	switch(op)
	{
		case 0:
		cout<<"12 am temperatura en grados = "<<A[0];
		break;
		
		case 1:
		cout<<"1 am temperatura en grados = "<<A[1];
		break;
		
		case 2:
		cout<<"2 am temperatura en grados = "<<A[2];
		break;
		
		case 3:
		cout<<"3 am temperatura en grados = "<<A[3];
		break;
		
		case 4:
		cout<<"4 am temperatura en grados = "<<A[4];
		break;
		
		case 5:
		cout<<"5 am temperatura en grados = "<<A[5];
		break;
		
		case 6:
		cout<<"6 am temperatura en grados = "<<A[6];
		break;
		
		case 7:
		cout<<"7 am temperatura en grados = "<<A[7];
		break;
		
		case 8:
		cout<<"8 am temperatura en grados = "<<A[8];
		break;
		
		case 9:
		cout<<"9 am temperatura en grados = "<<A[9];
		break;
		
		case 10:
		cout<<"10 am temperatura en grados = "<<A[10];
		break;
		
		case 11:
		cout<<"11 am temperatura en grados = "<<A[11];
		break;
		
		case 12:
		cout<<"12 mer temperatura en grados = "<<A[12];
		break;
		
    	case 13:
		cout<<"1 pm temperatura en grados = "<<A[13];
		break;
		
		case 14:
		cout<<"2 pm temperatura en grados = "<<A[14];
		break;
		
		case 15:
		cout<<"3 pm temperatura en grados = "<<A[15];
		break;
		
		case 16:
		cout<<"4 pm temperatura en grados = "<<A[16];
		break;
		
		case 17:
		cout<<"5 pm temperatura en grados = "<<A[17];
		break;
		
		case 18:
		cout<<"6 pm temperatura en grados = "<<A[18];
		break;
		
		case 19:
		cout<<"7 pm temperatura en grados = "<<A[19];
		break;
		
		case 20:
		cout<<"8 pm temperatura en grados = "<<A[20];
		break;
		
		case 21:
		cout<<"9 pm temperatura en grados = "<<A[21];
		break;
		
		case 22:
		cout<<"10 pm temperatura en grados = "<<A[22];
		break;
		
		case 23:
		cout<<"11 pm temperatura en grados = "<<A[23];
		break;
		
		case 24:
		cout<<"12 pm temperatura en grados = "<<A[24];
		break;
	}
	
	
	
	
	return 0;
}
