#include<iostream>
#include<locale>
using namespace std;
int main()
{
	setlocale(LC_ALL,"ptb");
	float num1,num2,resultado;
	int op;
	cout<<" Informe o primeiro n�mero: ";
	cin>>num1;
	cout<<" Informe o segundo n�mero: ";
	cin>>num2;
	cout<<"-------------------------------\n";
	cout<<" Ecolha a opera��o matem�tica:";
	cout<<"1 - Adi��o\n";
	cout<<"2 - Subtra��o\n";
	cout<<"3 - Divis�o\n";
	cout<<"4 - Multiplica��o\n";
	cout<<"Op��o: ";
	cin>>op;
	if(op==1)
	{
		resultado=num1+num2;
		cout<<num1<<" + "<<num2<<" = "<<resultado;
	}
	else if(op==2)
	{
		resultado=num1-num2;
		cout<<num1<<" - "<<num2<<" = "<<resultado;
	}
	else if(op==3)
	{
		resultado=num1/num2;
		cout<<num1<<" / "<<num2<<" = "<<resultado;
	}
	else if(op==4)
	{
		resultado=num1*num2;
		cout<<num1<<" * "<<num2<<" = "<<resultado;
	}
	else
	{
		cout<<" Op��o inv�lida!";
	}
	
	
}
