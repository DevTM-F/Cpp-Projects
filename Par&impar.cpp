#include<iostream>
#include<locale>
using namespace std;
int main()
{
	setlocale(LC_ALL,"ptb");
	int num=0,con=1,par=0,imp=-1;
	while (num!=-1)
	{
		cout<<"Informe o "<<con<<"o. n�mero: \n";
		cin>>num;
		con++;
		if (num%2==0)
		{
			par++;
		}
		else
		{
			imp++;
		}
	}
	cout<<"Foram informados "<<par<<" n�meros pares e "<<imp<<" �mpares! \n";
}
