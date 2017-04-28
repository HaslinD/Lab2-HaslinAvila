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
		cout<< "-----------------------------------------------------"<< endl;
                break;}

            case 2:{
                double x1, y1, x2, y2, x3, y3, x4, y4;
		double dist1, dist2, dist3, dist4;
		double distT1, distT2, distT3, distT4, distT5, distT6;
		
			
                cout<< "Ingrese vertice x1: ";
  		cin>> x1;
		cout<< "Ingrese vertice y1: ";
		cin>> y1;
		cout<< "Ingrese vertice x2: ";
		cin>> x2;
		cout<< "Ingrese vertice y2: ";
		cin>> y2;
		cout<< "Ingrese vertice x3: ";
		cin>> x3;
		cout<< "Ingrese vertice y3: ";
		cin>> y3;
		cout<< "Ingrese vertice x4: ";
		cin>> x4;
		cout<< "Ingrese vertice y4: ";
		cin>> y4;
		cout<< " "<< endl;
		
		//Puntos Ingresados
		cout<< "Los Puntos son: "<< endl;
		cout<< "("<< x1<< ","<< y1<< ")"<< endl;		
		cout<< "("<< x2<< ","<< y2<< ")"<< endl;
		cout<< "("<< x3<< ","<< y3<< ")"<< endl;
		cout<< "("<< x4<< ","<< y4<< ")"<< endl;
		cout<< " "<< endl;
		
		//Medidas de los lados del trapezoide
		cout<< "los lados del Trapezoide miden: "<< endl;
		dist1 = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
		cout<< "Lado 1: "<< dist1<< endl;
		dist2 = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));
		cout<< "Lado 2: "<< dist2<< endl;
		dist3 = sqrt(pow((x4 - x3), 2) + pow((y4 - y3), 2));
		cout<< "Lado 3: "<< dist3<< endl;
		dist4 = sqrt(pow((x1 - x4), 2) + pow((y1 - y4), 2));
		cout<< "Lado 4: "<< dist4<< endl;
		cout<< " "<< endl;
		
		//Medidas del Triangulo 1
		cout<< "los lados del Triangulo 1 Miden: "<< endl;
		distT1 = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
		distT3 = sqrt(pow((x4 - x2), 2) + pow((y4 - y2), 2));
		distT2 = sqrt(pow((x1 - x4), 2) + pow((y1 - y4), 2));
		cout<< "Lado 1: "<< distT1<< endl;
		cout<< "Lado 2: "<< distT2<< endl;
		cout<< "Lado 3: "<< distT3<< endl;
		cout<< " "<< endl;
		
		//Medidad del Traingulo 2
		cout<< "los lados del Triangulo 2 Miden: "<< endl;
		distT4 = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));
		distT5 = sqrt(pow((x4 - x3), 2) + pow((y4 - y3), 2));
		distT6 = sqrt(pow((x2 - x4), 2) + pow((y2 - y4), 2));
		cout<< "Lado 1: "<< distT4<< endl;
		cout<< "Lado 2: "<< distT5<< endl;
		cout<< "Lado 3: "<< distT6<< endl;
		cout<< " "<< endl;
		
		//Semiperimetros
		double semperim1, semperim2;
		semperim1 = (distT1 + distT2 + distT3) / 2;
		semperim2 = (distT4 + distT5 + distT6) / 2;
		cout<< "Semiperimetro Traingulo 1: "<<semperim1 << endl;
		cout<< "Semiperimetro Traingulo 2: "<<semperim2 << endl;
		cout<< " "<< endl;

		//Perimetro
		double perim1, perim2;
		Perim1 = (distT1 + distT2 + distT3);
		Perim2 = (distT4 + distT5 + distT6);
		cout<< "Perimetro Traingulo 1: "<<perim1 << endl;
 		cout<< "Perimetro Traingulo 2: "<<perim2 << endl;
		cout<< " "<< endl;
		
		//Altura Triangulo 1
		cout<< "Las Alturas del Triangulo 1 Miden: "<< endl;
		double Altu1, Altu2, Altu3;
		Altu1 = (2/distT1) * sqrt(semperim1(semperim1 - distT1)*(semperim1 - distT2)*(semperim1 - distT3));
		Altu2 = (2/distT2) * sqrt(semperim1(semperim1 - distT1)*(semperim1 - distT2)*(semperim1 - distT3));
		Altu3 = (2/distT3) * sqrt(semperim1(semperim1 - distT1)*(semperim1 - distT2)*(semperim1 - distT3));
		cout<< "Altura 1:"<< Altu1<< endl;
		cout<< "Altura 2:"<< Altu2<< endl;
		cout<< "Altura 3:"<< Altu3<< endl;
		cout<< " "<< endl;
		
		//Altura Triangulo 2
		cout<< "Las Alturas del TRiangulo 2 Miden: "<< endl;
		double Altu4, Altu5, Altu6;
		Altu4 = (2/distT4) * sqrt(semperim2(semperim2 - distT4)*(semperim2 - distT5)*(semperim2 - distT6));
                Altu5 = (2/distT5) * sqrt(semperim2(semperim2 - distT4)*(semperim2 - distT5)*(semperim2 - distT6));
                Altu6 = (2/distT6) * sqrt(semperim2(semperim2 - distT4)*(semperim2 - distT5)*(semperim2 - distT6));
		cout<< "Altura 1:"<< Altu4<< endl;
		cout<< "Altura 2:"<< Altu5<< endl;
		cout<< "Altura 3:"<< Altu6<< endl;
		cout<< " "<< endl;
		
		cout<< "-----------------------------------------------------"<< endl;
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
        cout<< "--------------------------------------------"<< endl;
        if (opcion > 0 && opcion < 3)
            valido = true;
        else {
            cout << "Opción no válida, intente de nuevo ..." << endl;
        }


    }while(!valido);
    return opcion;
}

