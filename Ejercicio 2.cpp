#include <iostream>
using namespace std;

int fibonacci (int numero){
	if ( numero == 0) return 0;
	if ( numero == 1) return 1;
	
	return fibonacci(numero - 1) + fibonacci(numero - 2);
	
	
}
int main (){
	
	int numero ;
	cout<<"Ingrese cuantos valores quiere mostrar:"<<endl;
	cin>>numero;
	
	cout<<"Serir de fibonacci:"<<endl;
	
	for (int i =0 ; i< numero ; i++){
		cout<<fibonacci(i)<<":"<<endl;
	}
	return 0;
}
	
