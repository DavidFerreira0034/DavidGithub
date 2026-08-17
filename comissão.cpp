#include <iostream>
#include <string>
using namespace std;

int main(){
	
	string nome;
	double valorVenda;
	double taxaComissao = 0.05;
	double comissao;
	
	cout<<"digite o nome do vendedor: "<<endl;
	cin>>nome;
	cout<<"digite o valor de venda: "<<endl;
	cin>>valorVenda;
	
	comissao = valorVenda * taxaComissao;
	
	cout<<"vendedor: "<<nome<<endl;
	cout<<"comissao: R$"<<comissao<<endl;
	
	return 0;
}
	
