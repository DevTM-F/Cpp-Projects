#include<iostream>
#include<locale>
using namespace std;
int main()
{
	setlocale(LC_ALL,"ptb");
	int contador=1,multiplo3=0,num;
	for (contador;contador<=10;contador++);
	{
		cout<<"Informe o "<<contador<<"o. n�mero: \n";
		cin>>num;
		if (num%3==0)
		{
			multiplo3++;
		}
	}
	cout<<"Foram "<<multiplo3<<" n�meros m�ltiplos de 3! \n";
}
