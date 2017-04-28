#include <iostream>
#include <cmath>

using namespace std;
int menu();
int factorial(int);

int main(){
  bool salir = false;
  while (!salir){
        switch(menu()){
            case 1:{
                int numX;
                double Suma;
                cout << "Escriba un número: ";
                cin >> numX;
		for (int i = 1; i <= 13; i++){
                   Suma += pow(numX, i) / factorial(i);   
                }
                cout<< "La Respuesta Final es: "<< Suma + 1<< endl;
                break;}

            case 2:{
                
                break;}

            case 3:
                salir = true;
                break;
        }//Fin switch
    }//Fin while
  
  return 0;

}

int factorial(int i){
  if(i<0)
    return -1;
  else if(i==0){
    return 1;
  }else{
    return i * factorial(i-1);
  }
}

int menu(){
    int opcion;
    bool valido = true;
    do{
        cout << "    MENU" << endl
             << "1.- Ejercicio 1" << endl
             << "2.- Ejercicio 2" << endl
             << "3.- Salir" << endl;

        cout << " Ingrese una opción: ";
        cin >> opcion;

        if (opcion > 0 && opcion < 3)
            valido = true;
        else {
            cout << "Opción no válida, intente de nuevo ..." << endl;
        }


    }while(!valido);
    return opcion;
}

