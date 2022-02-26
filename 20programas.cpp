#include <iostream>
#include <iomanip>
#include <conio.h>
#include <cmath>
#include <string>
#include <limits>
#include <windows.h>
#include <stdlib.h>

#define COSTE1 200
#define COSTE2 150
#define COSTE3 80
#define LIMITE_SUP 10000
#define LIMITE_INF 0
#define N_DIGITOS_ENTERO 4
#define DECENAS 2

void gotoxy (int x1, int y1){
HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
COORD dwPos;
dwPos.X = x1;
dwPos.Y = y1;
SetConsoleCursorPosition(hcon, dwPos);
	}
	double saldo(double retiro,double deposito,double saldot){

	system("cls");
	saldot=saldot+deposito-retiro;
	return saldot;
	
	
}


using namespace std;
int bisiesto(int);  
main(){
	int menu;
	cout<<" INGRESE EL NUMERO DE PROGRAMA QUE DESEA "<<endl;
	cout<<"1. Suma, Resta, Multiplicación y División de dos números " <<endl;
	cout<<"2. Determinar si un número es par o impar "<<endl;
	cout<<"3. Convertir de kilómetros a millas, metros a pulgadas, de libras a kilos y viceversa "<<endl;
	cout<<"4. Determinar si una palabra o un número es palíndromo. "<<endl;
	cout<<"5. Conversión de números arábigos a romanos (mínimo 1,000) "<<endl;
	cout<<"6. Conversión de números enteros a letras "<<endl;
	cout<<"7. Conversión de números enteros con decimal a letras "<<endl;
	cout<<"8. Una tabla de multiplicar "<<endl;
	cout<<"9. Todas las tablas de multiplicar del 1 al 10 "<<endl;
	cout<<"10. Crear de forma gráfica la multiplicación manual "<<endl;
	cout<<"11. Conversión de números decimales a binario "<<endl;
	cout<<"12. Conversión de números decimales a hexadecimales "<<endl;
	cout<<"13. Crear Figuras Geométricas Básicas. "<<endl;
	cout<<"14. Mover un punto en toda la pantalla "<<endl;
	cout<<"15. Simulación de un Cajero (Autómata) "<<endl;
	cout<<"16. Calcular la hipotenusa "<<endl;
	cout<<"17. Programa que calcula la edad "<<endl;
	cout<<"18. Crea una factura sencilla "<<endl;
	cout<<"19. Conversor de grados centigrados a  Fahrenheit "<<endl;
	cout<<"20. Conversor de grados Fahrenheit a celsius"<<endl;
	cout<<"21. SALIR"<<endl;
	cin>>menu;
	
	if (menu==1){
		cout<<"1. Suma, Resta, Multiplicación y División de dos números " <<endl;
			
		int n1,n2,r,op;
		op=1;
 	while (op>=1 & op<=4){
		cout<<"Ingrese el numero de opcion que desee ejecutar"<<endl;
		cout<<"1. Suma"<<endl;
		cout<<"2. Resta"<<endl;
		cout<<"3. Multiplicacion"<<endl;
		cout<<"4. Division"<<endl;
		cout<<"5. SALIR"<<endl;
		cin>>op;
		system ("cls");
		if(op==1){
		cout<<"-- SUMA --"<<endl;
		cout<<"Ingrese Primer Numero"<<endl;
		cin>>n1;
		cout<<"Ingrese Segundo Numero"<<endl;
		cin>>n2;
		r=n1+n2;
		cout<<"El resultado es: "<<r<<endl;
		system("pause");
		}
		else
		if(op==2){
		cout<<"-- Resta --"<<endl;
		cout<<"Ingrese Primer Numero"<<endl;
		cin>>n1;
		cout<<"Ingrese Segundo Numero"<<endl;
		cin>>n2;
		r=n1-n2;
		cout<<"El resultado es: "<<r<<endl;
		system("pause");
		}
		else
		if(op==3){
		cout<<"-- Multiplicacion --"<<endl;
		cout<<"Ingrese Primer Numero"<<endl;
		cin>>n1;
		cout<<"Ingrese Segundo Numero"<<endl;
		cin>>n2;
		r=n1*n2;
		cout<<"El resultado es: "<<r<<endl;
		system("pause");
		}
		else
		if(op==4){
		cout<<"-- Division --"<<endl;
		cout<<"Ingrese Primer Numero"<<endl;
		cin>>n1;
		cout<<"Ingrese Segundo Numero"<<endl;
		cin>>n2;
		r=n1/n2;
		cout<<"El resultado es: "<<r<<endl;
		system("pause");
		}
	system ("cls");
	
		}	
		
	}
	else if(menu==2){
		cout<<"2. Determinar si un número es par o impar "<<endl;
			 	int n1;
	
		cout<<"Ingrese numero"<<endl;
		cin>>n1;
	
		if(n1%2==0){
		cout<<"El numero es par"<<endl;
		}
		else
		{
		cout<<"El numero es impar"<<endl;	
		}
		
		}
	else if(menu==3){
		cout<<"3. Convertir de kilómetros a millas, metros a pulgadas, de libras a kilos y viceversa "<<endl;
			int op,n,r;
	while (op<=6){
		cout<<"¿Que desea hacer?"<<endl;
		cout<<"1. Km a Millas"<<endl;
		cout<<"2. Metros a Pulgadas"<<endl;
		cout<<"3. Libras a Kilos"<<endl;
		cout<<"4. Millas a Km"<<endl;
		cout<<"5. Pulgadas a Metros"<<endl;
		cout<<"6. Kilos a libras"<<endl;
		cout<<"7. SALIR "<<endl;
		cin>>op;
		system ("cls");
		
		if(op==1){
			cout<<"-- KM A MILLAS --"<<endl;
			cout<<"Ingrese Km"<<endl;
			cin>>n;
			r=n*0.621371;
			cout<<"Resultado en Millas: "<<r<<endl;
			system ("pause");
		}
		else
		if(op==2){
			cout<<"-- METROS A PULGADAS --"<<endl;
			cout<<"Ingrese Metros "<<endl;
			cin>>n;
			r=n*39.3701;
			cout<<"Resultado en Pulgadas: "<<r<<endl;
			system ("pause");
		}
		else
		if(op==3){
			cout<<"-- LIBRAS A KILOS --"<<endl;
			cout<<"Ingrese Libras "<<endl;
			cin>>n;
			r=n*0.453592;
			cout<<"Resultado en Kilos: "<<r<<endl;
			system ("pause");
		}
		else		
		if(op==4){
			cout<<"-- MILLAS A KM --"<<endl;
			cout<<"Ingrese Millas "<<endl;
			cin>>n;
			r=n*1.60934;
			cout<<"Resultado en Kilometros: "<<r<<endl;
			system ("pause");
		}
		else		
		if(op==5){
			cout<<"-- PULGADAS A METROS --"<<endl;
			cout<<"Ingrese Pulgadas "<<endl;
			cin>>n;
			r=n*0.0254;
			cout<<"Resultado en Metros: "<<r<<endl;
			system ("pause");
		}
		else
		if(op==6){
			cout<<"-- KILOS A LIBRAS --"<<endl;
			cout<<"Ingrese Kilos "<<endl;
			cin>>n;
			r=n*2.20462;
			cout<<"Resultado en Libras: "<<r<<endl;
			system ("pause");
		}
		else;
		system("cls");			
	}
		
	}
	else if(menu==4){
		cout<<"4. Determinar si una palabra o un número es palíndromo. "<<endl;
		    string texto;
    int aux = 0, igual = 0;
    
    cout << "Ingrese la palabra a evaluar: "<<endl;
    getline(cin >> ws, texto);
    
    for(int ind = texto.length() - 1; ind >= 0; ind--) {
        if(texto[ind] == texto[aux]) {
            igual++;
        }
        aux++;
    }
    
    if(texto.length() == igual) {
        cout << "La palabra es palindromo" << endl;
    } else {
        cout << "La palabra no es palindromo" << endl;
    }
		
	}
	else if(menu==5){
		cout<<"5. Conversión de números arábigos a romanos (mínimo 1,000) "<<endl;
		int num, a;
cout << "Escribe el numero a convertir, desde 1 a 999" << endl;
cin >> a;
num=a;
while(num!=0)
{
	if(num <1000 && num>=900)
	{
		cout << "CM";
		num = num - 900;
	}
	else if(num < 900 && num>500)
	{
		cout << "D";
		num = num - 500;
	}
	else if (num == 500)
	{
		cout << "D";
		num = num -500;
	}
	else if (num<500 && num>= 400)
	{
		cout << "CD";
		num = num - 400;
	}
	else if (num<400 && num >99)
	{
		cout << "C";
		num = num -100;
	}
	else if (num< 100 && num>89)
	{
		cout << "XC";
		num = num - 90;
	}
	else if (num< 90 && num>59)
	{
		cout << "L";
		num = num - 50;
	}
	else if(num<60 && num >50)
	{
		cout << "L";
		num = num - 50;
	}
	else if (num ==50)
	{
		cout << "L";
		num = num -50;
	}
	else if(num<50 && num>39)
	{
		cout << "XL";
		num = num - 40;
	}
	else if(num< 40 && num> 10)
	{
		cout << "X";
		num = num - 10;
	}
	else if(num == 10)
	{
		cout << "X";
		num = num -10;
	}
	else if(num==9)
	{
		cout << "IX";
		num = num - 9;
	}
	else if(num<=8 && num>=6)
	{
		cout << "V";
		num = num - 5;
	}
	else if (num == 5)
	{
		cout << "V";
		num = num - 5;
	}
	else if (num == 4)
	{
		cout << "IV";
		num = num - 4;
	}
	else if (num<= 3 && num>=1)
	{
		cout << "I";
		num = num - 1;
	}
}
		
		
	}
	else if(menu==6){
		cout<<"6. Conversión de números enteros a letras "<<endl;

 
int main(int argc, char* argv[]);
{
    char cadenas[4][11][15]={{"","mil ","dosmil ","tresmil ","cuatromil ","cincomil ","seismil ","sietemil ","ochomil ","nuevemil "},
                             {"","cien ","doscientos ","trescientos ","cuatrocientos ","quinientos ","seiscientos ","setecientos ","ochocientos ","novecientos "},
                             {"","diez ","veinte ","treinta ","cuarenta ","cincuenta ","sesenta ","setenta ","ochenta ","noventa "},
                             {"cero","uno","dos","tres","cuatro","cinco","seis","siete","ocho","nueve"}};
    char cadenas2[4][10]={"","ciento ","dieci",""};
 
    int parteEntera,parteDecimal;
    double num;
 
 
    do{
        cout << "Introduce un numero: ";
        cin >> num;
        if(num < LIMITE_INF || num >= LIMITE_SUP)
            cout << "El numero introducido excede del rango valido. Vuelva a intentarlo." << endl;
    }while(num < LIMITE_INF || num >= LIMITE_SUP);
 
    parteEntera = num;
    parteDecimal = (num-parteEntera)*100;
 
    string salida;
    
    int digitos[N_DIGITOS_ENTERO];
    for(int i=N_DIGITOS_ENTERO-1; i>=0; i--,parteEntera /=10)
        digitos[i]=parteEntera%10;

    for(int i=0; i<N_DIGITOS_ENTERO; i++){
        bool compuesta=false;
        switch(digitos[i]){
            case 0: 
                if(i==N_DIGITOS_ENTERO-1){
                    for(int j=0;j<N_DIGITOS_ENTERO;j++){ 
                        if(digitos[j] != 0){
                            compuesta=true;
                            break;
                        }
                    }
                    if(!compuesta) 
                        salida += cadenas[i][digitos[i]];
                }
                break;
            default: 
                for(int j=i+1;j<N_DIGITOS_ENTERO;j++){ 
                    if(digitos[j] != 0){
                        compuesta=true;
                        break;
                    }
                }
                if(compuesta){ 
                    if(digitos[i]==1 && i > 0){
                        salida += cadenas2[i];
                    }else if(digitos[i]==2 && i==DECENAS){ 
                        salida += "veinti";
                    }else{ 
                        salida += cadenas[i][digitos[i]]; 
                        if(i==DECENAS) 
                            salida += "y ";
                    }
                }else{
                    salida += cadenas[i][digitos[i]]; 
                }
        }
 
    }
   
    if(salida[salida.length()-1]!= ' ')
        salida += " ";
 
   
    cout << salida << endl;
 
    cout << "Pulsa intro para salir...";
    
    return 0;
}
		
	}
	else if(menu==7){
		cout<<"7. Conversión de números enteros con decimal a letras "<<endl;
		int main(int argc, char* argv[]);
{
    char cadenas[4][11][15]={{"","mil ","dosmil ","tresmil ","cuatromil ","cincomil ","seismil ","sietemil ","ochomil ","nuevemil "},
                             {"","cien ","doscientos ","trescientos ","cuatrocientos ","quinientos ","seiscientos ","setecientos ","ochocientos ","novecientos "},
                             {"","diez ","veinte ","treinta ","cuarenta ","cincuenta ","sesenta ","setenta ","ochenta ","noventa "},
                             {"cero","uno","dos","tres","cuatro","cinco","seis","siete","ocho","nueve"}};
    char cadenas2[4][10]={"","ciento ","dieci",""};
 
    int parteEntera,parteDecimal;
    double num;
 
 
    do{
        cout << "Introduce un numero con decimal: ";
        cin >> num;
        if(num < LIMITE_INF || num >= LIMITE_SUP)
            cout << "El numero introducido excede del rango valido. Vuelva a intentarlo." << endl;
    }while(num < LIMITE_INF || num >= LIMITE_SUP);
 
    parteEntera = num;
    parteDecimal = (num-parteEntera)*100;
 
    string salida;
    
    int digitos[N_DIGITOS_ENTERO];
    for(int i=N_DIGITOS_ENTERO-1; i>=0; i--,parteEntera /=10)
        digitos[i]=parteEntera%10;

    for(int i=0; i<N_DIGITOS_ENTERO; i++){
        bool compuesta=false;
        switch(digitos[i]){
            case 0: 
                if(i==N_DIGITOS_ENTERO-1){
                    for(int j=0;j<N_DIGITOS_ENTERO;j++){ 
                        if(digitos[j] != 0){
                            compuesta=true;
                            break;
                        }
                    }
                    if(!compuesta) 
                        salida += cadenas[i][digitos[i]];
                }
                break;
            default: 
                for(int j=i+1;j<N_DIGITOS_ENTERO;j++){ 
                    if(digitos[j] != 0){
                        compuesta=true;
                        break;
                    }
                }
                if(compuesta){ 
                    if(digitos[i]==1 && i > 0){
                        salida += cadenas2[i];
                    }else if(digitos[i]==2 && i==DECENAS){ 
                        salida += "veinti";
                    }else{ 
                        salida += cadenas[i][digitos[i]]; 
                        if(i==DECENAS) 
                            salida += "y ";
                    }
                }else{
                    salida += cadenas[i][digitos[i]]; 
                }
        }
 
    }
   
    if(salida[salida.length()-1]!= ' ')
        salida += " ";
 
   
    cout << salida << parteDecimal << "/100"<< endl;
 
    cout << "Pulsa intro para salir...";
    
    return 0;
}
		
	}
	else if(menu==8){
		cout<<"8. Una tabla de multiplicar "<<endl;
			int n1,n2,r,i=1;
	
	cout<<"ingrese el numero de la tabla de multiplicar que desea "<<endl;
	cin>>n1;
	
	cout<<" TABLA DEL "<<n1<<endl;
	
	while (i<=10){
		r=i*n1;
		cout<<n1<<" * "<<i<<" = "<<r<<endl;
		i=i+1;
	}
	}
	else if(menu==9){
		cout<<"9. Todas las tablas de multiplicar del 1 al 10 "<<endl;
			int n1=1,n2,r,i=1;
	while (n1<=10){	
		i=1;
		cout<<" TABLA DEL "<<n1<<endl;
	
		while (i<=10){
			r=n1*i;
			cout<<n1<<" * "<<i<<" = "<<r<<endl;
			i=i+1;
		}
	n1=n1+1;
	system("pause");
	}
	}
	else if(menu==10){
		cout<<"10. Crear de forma gráfica la multiplicación manual "<<endl;
		  	cout<<"Multiplicacion graficada: "<<endl;
  	cout<<" "<<endl;
  	cout<<"		    45"<<endl;
  	cout<<"		   x32"<<endl;
  	cout<<"		------"<<endl;
 	cout<<"		    90"<<endl;
 	cout<<"		+ 135 "<<endl;
 	cout<<"		------"<<endl;
 	cout<<"		  1440"<<endl;
	}
	else if(menu==11){
		cout<<"11. Conversión de números decimales a binario "<<endl;
		    int numero, exp, digito;
    double binario;
   cout << "Introduce numero: ";
   cin >> numero;
   exp=0;
   binario=0;
   while(numero/2!=0)
   {
           digito = numero % 2;
           binario = binario + digito * pow(10.0,exp);
           exp++;
           numero=numero/2;
   }
   binario = binario + numero * pow(10.0,exp);
   cout << fixed << setprecision(0);
   cout << "binario: " << binario << endl;
    system("pause");
	}
	else if(menu==12){
		cout<<"12. Conversión de números decimales a hexadecimales "<<endl;
		    long dec;
    int rem;

    std::cout << "Ingrese numero: ";
    std::cin >> dec;

    while (dec > 0) {
        rem = dec % 16;
        if (rem > 9) {
            switch (rem) {
               case 10: std::cout << "A"; break;
               case 11: std::cout << "B"; break;
               case 12: std::cout << "C"; break;
               case 13: std::cout << "D"; break;
               case 14: std::cout << "E"; break;
               case 15: std::cout << "F"; break;
            }
        }
        else {
            std::cout << rem;
        }
        dec = dec / 16;
    }
	}
	else if(menu==13){
		cout<<"13. Crear Figuras Geométricas Básicas. "<<endl;
	int op;
	cout<<"Que figura desea relizar"<<endl;
	cout<<"1. Triangulo"<<endl;
	cout<<"2. Cuadrado "<<endl;
	cin>>op;
	
	if(op==1){
		cout<<"TRIANGULO"<<endl;
		cout<<" "<<endl;
		cout<<"     /\ "<<endl;
		cout<<"    /  \ "<<endl;
		cout<<"   /    \ "<<endl;
		cout<<"  /      \ "<<endl;
		cout<<" /________\  "<<endl;
	}else
	if(op==2){
		cout<<"CUADRADO"<<endl;
		cout<<" "<<endl;
		cout<<"   ______________"<<endl;
		cout<<"   |            |"<<endl;
		cout<<"   |            |"<<endl;
		cout<<"   |            |"<<endl;
		cout<<"   |            |"<<endl;
		cout<<"   |            |"<<endl;
		cout<<"   |____________|"<<endl;
	}
}
	
	else if(menu==14){
		cout<<"14. Mover un punto en toda la pantalla "<<endl;

	char opcion;
	int x=10, y=10;
		while (opcion!= 'z'){
			system("cls");
			gotoxy(x,y); cout<<".";
			opcion=getch();
			switch (opcion){
				case 'w' : y--; break;
				case 's' : y++; break;
				case 'a' : x--; break;
				case 'd' : x++; break;
			}
		}
		return 0;
		
	}
	else if(menu==15){
		cout<<"15. Simulación de un Cajero (Autómata) "<<endl;
	    const string claveCorrecta = "1234";
    cout << "Bienvenido al cajero automático "<<endl;
    cout << "Ingrese la clave (1234) : ";
    string clave = "";
    cin >> clave;
    if (clave != claveCorrecta)
    {
        cout << "Clave incorrecta"<<endl;
        return 0;
    }
    cout << "Clave correcta\nBienvenido\n";
    double fondos = 5000; 

    string eleccion = "";
    
    while (eleccion != "2")
    {
        cout << "Fondos disponibles: " << fondos << endl;
        
        cout << "1. Retirar dinero\n2. Salir\nSeleccione: ";
        cin >> eleccion;
        if (eleccion == "1")
        {
            double retiro;
            cout << "Ingrese cantidad a retirar: " << endl;
            cin >> retiro;
            if (retiro > fondos || retiro <= 0)
            {
                cout << "No puede retirar esa cantidad";
            }
            else
            {
                cout << " Ha retirado " << retiro << endl;
                fondos = fondos - retiro;
            }
        }
    }
	}
	else if(menu==16){
		cout<<"16. Calcular la hipotenusa "<<endl;
		  float c1,c2,hipo=0;
 
  cout << "Digite cateto 1: ";
  cin >> c1;
  cout << "Digite cateto 2: ";
  cin >> c2;
 
  hipo = sqrt(pow(c1,2)+pow(c2,2));
 
  cout << "La hipotenusa es " << hipo << endl;
 
  return 0;
	}
	else if(menu==17){
		cout<<"Programa que calcula la edad"<<endl;
		int n1, edad;
		cout<<"Ingrese su año de nacimiento"<<endl;
		cin>>n1;
		edad=2022-n1;	
		cout<<"Usted tiene "<<edad<<" años"<<endl;
	}
	else if(menu==18){
		cout<<" Crea una factura sencilla"<<endl;
		 bool salir = false;
 char tecla;
 int totalproductos = 0, producto1 = 0, producto2 = 0, producto3 = 0;
 int dinero = 0;
 int descuento = 0;
 
 while(!salir)
 {
  std::cout << "Introduzca codigo de producto (1,2,3) o cualquier otra tecla para finalizar la compra: ";
  std::cin >> tecla;
  
  switch (tecla)
  {
   case '1':
    producto1++;
   break;
   
   case '2':
    producto2++;
   break;
   
   case '3':
    producto3++;
   break;
   
   default:
    salir = true;
   break;
  }
 }
 
 dinero = producto1*COSTE1 +  producto2*COSTE2 +  producto3*COSTE3;
 totalproductos = producto1 + producto2 + producto3;
 
 std::cout << "FACTURA:";
 std::cout << "    " << producto1 << " unidades a " << COSTE1 << std::endl;
 std::cout << "    " << producto2 << " unidades a " << COSTE2 << std::endl;
 std::cout << "    " << producto3 << " unidades a " << COSTE3 << std::endl;
 std::cout << " Unidades totales compradas: " << totalproductos << std::endl;

 std::cout << "SUBTOTAL ANTES DE DESCUENTOS: " << dinero << std::endl;
 if (totalproductos > 20)
 {
  descuento = dinero/10;
  std::cout << "Descuento aplicable del 10% = -" << descuento << std::endl;
 }
 else if (totalproductos > 10)
  {
   descuento = dinero/20;
   std::cout << "Descuento aplicable del 5% = -" << descuento << std::endl;
  }
  else
  {
   descuento = 0;
   std::cout << "Sin descuentos aplicables = -0" << std::endl;
  }
  
 dinero -= descuento;
 std::cout << "SUBTOTAL DESPUES DE DESCUENTOS: " << dinero << std::endl;
 
 dinero *= 1.21;
 std::cout << "TOTAL A PAGAR (IVA INCLUIDO): " << dinero << std::endl;
 
 system("pause"); 
		
		
	}
	else if(menu==19){
		cout<<"Conversor de grados centigrados a  Fahrenheit"<<endl;
		int C,conv;

cout<<"Ingrese la temperatura en grados centigrados:"<<endl;
cin>>C;
conv=(C*9/5)+32;
cout<<"La conversion a F es "<<conv<<endl;
getch();
	}
	else if(menu==20){
		    float Centigrados=0.0;
    float Fahrenheit=0.0;
    cout<<"Ingrese grados fahrenheit: "<<endl;
    cin>>Fahrenheit;
    Centigrados = (5.0/9.0)*(Fahrenheit-32);
    cout<<"El resultado en grados celsius es: "<<Centigrados<<endl;
	}	
}
