#include <iostream>
#include <string>
using namespace std;

int main() {
	string nombres[2][2];
	cout<<"Llene la matriz (2)(2):"<<endl;
	
	for ( int fila = 0 ; fila <2; fila++){
		for ( int cola=0 ; cola<2 ; cola++){
			cout<<"Ingrese el nombre para la posicion ["<< fila << "][" << cola <<"]:";
			getline(cin, nombres[fila][cola]);
			
		}
	}
    
    string buscar;
	cout << "\nIngrese el nombre que desea buscar: ";
	getline(cin, buscar);
	
	bool encontrado = false; 
	for (int fila = 0; fila< 2; i++) {
		for (int cola = 0; cola < 2; j++) {
	            if (nombres[fila][cola] == buscar) {
	                cout << "Nombre encontrado en la posición [" << fila<< "][" << colu << "]\n";
	                encontrado = true;
	            }
	        }
	    }
	
	    if (!encontrado) {
	        cout << "Nombre no encontrado en la matriz.\n";
	    }
	
	    return 0;
	}

	
	
    
