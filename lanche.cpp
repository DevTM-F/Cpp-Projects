#include<iostream>
#include<locale>
using namespace std;
int main()
{
	setlocale(LC_ALL,"ptb");
	int quantidade=0,codigo=0;
	float valor=0;
	const char* item=" ";
	char resposta='s';
	cout<<"***Card�pio***\n";
	cout<<"100 - Hamb�rguer - R$5,50 \n";
	cout<<"101 - Cachorro-quente - R$4,50 \n";
	cout<<"102 - Milk-shake - R$7,00 \n";
	cout<<"103 - Pizza brotinho - R$8,00 \n";
	cout<<"104 - Cheeseburguer - R$8,50 \n";
	cout<<"*******************************\n";
	while (resposta=='s')
	{
		cout<<" Digite o c�digo do pedido: \n";
		cin>>codigo;
		cout<<" Quantos voc� quer? \n";
		cin>>quantidade;
		switch (codigo)
		{
			case 100:
			item=" Hamb�rguer \n";
			valor+=5.50*quantidade;
			cout<<item<<" R$"<<valor<<"\n";
			break;
			case 101:
			item=" Cachorro-quente \n";
			valor+=4.50*quantidade;
			cout<<item<<" R$"<<valor<<"\n";
			break;
			case 102:
			item=" Milk-shake \n";
			valor+=7.00*quantidade;
		    cout<<item <<" R$"<<valor<<"\n";
			break;	
			case 103:
		    item=" Pizza brotinho \n";
			valor+=8.00*quantidade;
			cout<<item <<" R$"<<valor<<"\n";
			break;
			case 104:
			item=" Cheeseburguer \n";
			valor+=8.50*quantidade;
			cout<<item<<" R$"<<valor<<"\n";
			break;
			default:;
			cout<< "Op��o inv�lida!!!  \n";
		}
		cout<<"Gostaria de adicionar mais algum �tem? Sim(s) N�o(n) ";
		cin>>resposta;
		quantidade+=quantidade;
	}
	cout<<"________________________________Total: R$ "<<valor<<"\n";
}
