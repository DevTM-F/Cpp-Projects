#include<iostream>
#include<locale>
using namespace std;
int main()
{
	setlocale(LC_ALL,"ptb");
	int linhas, cont,desenha;
	cout<<"Quantas linhas você quer? \n";
	cin>>linhas;
	for (cont=1;cont<=linhas;cont++)
	{
		cout<<"\n";
		for (desenha=1;desenha<=cont;desenha++)
		{
			cout<<"*";
		}
	}
}
