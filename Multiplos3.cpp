#include<iostream>
#include<locale>
using namespace std;
int main()
{
	setlocale(LC_ALL,"ptb");
	int contador=1,multiplo3=0,num;
	for (contador;contador<=10;contador++);
	{
		cout<<"Informe o "<<contador<<"o. número: \n";
		cin>>num;
		if (num%3==0)
		{
			multiplo3++;
		}
	}
	cout<<"Foram "<<multiplo3<<" números múltiplos de 3! \n";
}
