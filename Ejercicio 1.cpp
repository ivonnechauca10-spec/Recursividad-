#include <iostream>
using namespace std;

void abrirmunieca(int numero){
	if(numero == 1){
		cout<<"ABRA LA MUNIECA"<<endl;
		return;
	}
	cout<<"abriendo muneca"<<numero<<endl;
	
	abrirmunieca(numero-1);
	
}


int main() {
	
    abrirmunieca(8);
    return 0;

}

