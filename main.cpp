#include <iostream>
//#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

char cont = 0;
int num_n = 0, A = 0, B = 0, ente = 0, pos = 0, sum = 0, impar=0;
float a=0.0 , b=0.0, acumulador = 0.0;
bool ava = true;

int main()
{
    cout << "\n Que le gustaria buscar ?" << endl;
    cout << "\n 1) Ejercicios\n 2) Problemas\n" << endl;
    cout << "--> "; cin >> cont;cout << "\n\n";

    if (cont == char (49)){
        cout << "Que ejercicio desea realizar\n\n --> ";cin >> num_n;cout << "\n\n";
        switch (num_n) {
        case 1:{
            /* Escriba un programa que pida dos números A y B e imprima en pantalla el residuo
             de la división A/B.*/
            cout << "\n Ingrese dos valores A y B y el programa imprimira el residuo de \n la divicion de A sobre B\n\n";
            cout << " A --> ";cin >> A;cout << "\n\n B --> ";cin >> B;
            if (B == 0){ // divicion por 0 no se puede realizar
                cout << "\n\n La operacion no se puede realizar divicion por 0\n\n";
            }
            else{
                //Cuando quiero averiguar el modulo de dos float,se puede usar la libreria <math.h> con la funcion fmod (No enocntre otra forma solo con le operador modulo [%])
                //c = fmod(a,b);
                num_n = A % B;  //averigua el modulo entre dos variables enteras
                cout << "El residuo de la divion (" << A << " / " << B << ") es = " << num_n << endl << endl;
            }
            break;
        }

        case 2:{
            /*Escriba un programa que pida un número N e imprima
              en pantalla si es par o impar.*/
            cout << "\nIngrese un numero para averiguar si este es par o impar\n\n"; cin >> num_n;
            if (num_n == 0) cout << "Cero no es ni par ni impar"; //en caso de que el numuero acordado sea 0
            else {
                if (num_n % 2 == 0) cout << "\n\n" << num_n << "  es PAR\n\n"; // si la dividir en dos el numero que tiene que ser entero deja un residuo este es impar
                else cout << "\n\n" << num_n << "  es IMPAR\n\n";
            }
            break;
        }

        case 3:{
            /*Escriba un programa que pida dos números A y B e imprima
             en pantalla el mayor.*/
            cout << "Ingrese dos numeros A y B, para averiguar cual de los dos es el mayor\n";
            cout << "\nA --> "; cin >> a; cout << "\nB --> "; cin >> b;cout << "\n\n";
            if (a == b) cout << "Los numeros son iguales"; // si son iguales no hay mayor
            else {
                if (a > b) cout << a << " Es mayor que " << b << "\n\n"; // se pregunta si a es mayor ha b
                else cout << b << " Es mayor que " << a << "\n\n";
            }
            break;
        }

        case 4:{
            /*Escriba un programa que pida dos números A y B e imprima
             en pantalla el menor.*/
            cout << "Ingrese dos numeros A y B, para averiguar cual de los dos es el menor\n";
            cout << "\nA --> "; cin >> a; cout << "\nB --> "; cin >> b;cout << "\n\n";
            if (a == b) cout << "Ambos numeros son iguales"; // se certera de que no sean iguales los numeros para que alla un menor
            else {
                if (a < b) cout << a << " Es menor que " << b << "\n\n"; // averigua si a es menor ha b
                else cout << b << " Es menor que " << a << "\n\n";
            }
            break;
        }

        case 5:{
            /*Escriba un programa que pida dos números A y B e imprima
             en pantalla la división A/B con redondeo.*/
            cout << "Ingrese dos numeros A y B, se divide A/B y se entrega el resultado con redondeo\n";
            cout << "\nA --> "; cin >> a; cout << "\nB --> "; cin >> b;cout << "\n\n";
            if (b == 0) cout << "La opeacion no se puede realizar, divicion por 0"; // una divicion por cero no se puede realizar
            else {
                //a = a / b;
                //printf("%.0f\n",a);
                num_n = a / b; // añadimos a una variable entera el resultado de la divicion por loq ue la parte decimal (si la hay ) se pierde
                if ((a/b)-num_n >= 0.5) num_n++; // queremos saber si dicha parte desima es igual o supera a 0.5 para umetar en uno el redondeo
                cout << "\n\n El resultado redondeado es = " << num_n;
            }
            break;
        }

        case 6:{
            /*Escriba un programa que pida dos números A y B e imprima en pantalla
             la potencia A^B, sin hacer uso de librerías matemáticas.*/
            cout << "Ingrese dos numeros A y B, y se realizara la potencia A^B\n";
            cout << "\nA --> "; cin >> a; cout << "\nB --> "; cin >> b;cout << "\n\n";
            if (b == 0){ // averigua si se eleva a cero ya que es caso especial
                if (a == 0) cout <<"La operacion no se puede realizar 0^0\n\n"; // no hay ningun numero que multiplicado o veces de 0
                else cout << "El resultado de " << a << "^" << b << " es = 1\n\n"; // todo numero elevado a la 0 es igual a 1
            }
            else if (a == 0) cout << "El resultado de " << a << "^" << b << " es = 0\n\n"; // el cero elevado a cualqueir numero es 0
            else {
                if (b < 0) { // averigua si b es negativo
                    b *= -1; // en caso de serlo lo covierte en positivo
                    ava = false; // un recordatorio
                }
                acumulador = a;
                A = b;
                b = (int)b; // convierte ha b en entero para no tener problemas con la elevacion
                while (b > 1) { // repite el procemieto el numero de veces de b
                    acumulador = acumulador * a; // la variable se va acumulado
                    b -= 1; // resta b para no er ciclo infinito
                }
                if (ava == true) cout << "El resultado de " << a << "^" << A << " es = " << acumulador << "\n\n"; // si b era positiva imprime el acumulador
                else cout << "El resultado de " << a << "^" << A << " es = " << 1/acumulador << "\n\n"; //si b era negativa imprimer 1/acumulador
            }
            break;
        }

        case 7:{
            /*Escriba un programa que pida un número N e imprima en pantalla
             la suma de todos los números entre 0 y N (incluyéndose el mismo).*/
            cout << "Ingrese un numero N, entero y se sumaran todos los valores desde o hasta dicho numero n (incluyendolo)";
            cout << "\n\n --> "; cin >> num_n;
            while (A != num_n) { // se repite la sumatoria hasta que A comienza en 0 sea igual al numero entregado
                A++;
                B += A; // se acumulan los valores en B
            }
            cout << "\nLa sumatoria total de 0 hasta "<< num_n << " es de = " << B << "\n\n";
            break;
        }

        case 8:{
            /*Escriba un programa que pida un número N e imprima en pantalla su factorial.*/
            cout << "Ingrese un numero N, se imprimira su factorial";
            cout << "\n\n --> "; cin >> num_n;
            if (num_n == 0) cout << "El factorial de 0! es = 1"; // en caso de que sea 0 es un caso especial da 1
            else {
                A = num_n; //neceistamos un aculador que inicie con la variable N
                B = num_n; //requerimos de la varibale anterio a N para comnezar a multiplicar
                while (B > 1) {
                    B--;//restamos 1 a la segudilla de N
                    A = A * B; // acumulamos
                }
                cout << "El factorial de " << num_n << "! es = " << A;
            }
            break;
        }

        case 9:{
            /*Escriba un programa que pida un número N e imprima el perímetro y área de un círculo
             con radio N. Nota: use 3.1416 como una aproximación de pi.

             P = 2*pi*r
             A = pi*r^2

            */
            cout << "Ingresa un valor N, y se imprimira el perimetro y el area de un circulo con radio N\n";
            cout << "\n\n --> "; cin >> acumulador;
            if (acumulador == 0) cout << "No hay circulo si su radio es 0\n";
            else {
                a = 2 * 3.1416 * acumulador;
                b = 3.1416 * acumulador * acumulador;
                cout << "\n El perimetro es igual a  = " << a << "\n\n El area es igual a = " << b << "\n\n";
            }
            break;
        }

        case 10:{
            /*Escriba un programa que pida un número N e imprima en pantalla todos
             los múltiplos de dicho número entre 1 y 100.*/
            cout << "Ingresa un valor N, y se imprimiran todos los multiplos menores de 100 del numero N\n";
            cout << "\n\n --> "; cin >> a; cout << "\n\n";
            if (a == 0) cout << "  0\n\n"; // verifica en caso de que N sea cero ya que es un caso especial con solo un multiplo
            else {
                do {
                    A++; // aumenta en 1 la variable A, para su multiplicacion
                    acumulador = a * A;
                    if (acumulador < 100) cout << "  " << acumulador << "\n\n"; // en caso de que el resultado sea menor a 100 lo imprime
                } while (acumulador < 100);
            }
            break;
        }

        case 11:{
            /*Escriba un programa que pida un número N e imprima en pantalla
             su tabla de multiplicar hasta 10xN.*/
            cout << "Ingresa un valor N, y se imprimiran su tabla de multiplicar hasta 10\n";
            cout << "\n\n --> "; cin >> a; cout << "\n\n";
            for (A=0;A<=10;A++){//realiza un for que comienze con A = 0, que tabaje miestras A <= 10 y vaya aumentado A en 1
                cout << a << " x " << A << " = " << a*A << "\n";
            }
            break;
        }

        case 12:{
            /*Escriba un programa que pida un número N e imprima todas
             las potencias desde N^1 hasta N^5*/
            cout << "Ingresa un valor N, y que imprima todas las potncias desde N^1 hasta N^5";
            cout << "\n\n --> "; cin >> a; cout << "\n\n";
            for (A=1;A<=5;A++){ //el for inica con A = 1 y va miestra A sea igual o menor a 5 con aumento en 1
                B = A; // necesitamos otra variable entera para hacer la elevacion
                b = a; // b funciona como acumulador para la potencia
                while (B > 1) {
                    b = b * a;
                    B--; //disminuye el valor de B
                }
                cout << a << "^" << A << " = " << b << "\n";
            }
            break;
        }

        case 13:{
            /*Escriba un programa que pida un número N e imprima
             todos los divisores de N.*/
            cout << "Ingresa un valor N, y que imprima todos los divisores enteros de N";
            cout << "\n\n --> "; cin >> A; cout << "\n\n";
            if (A == 0 ) cout << "Cero no tiene divisores";
            else {
                B = 1;
                while (B <= A){ // solo pueden ser divisores cantidades menores
                    if (A % B == 0) cout << "Un divisor de " << A << " es = " << B << "\n";  // si el residuo es cero es divisor
                    B ++;
                }
            }
            break;
        }

        case 14:{
            /*Escriba un programa que imprima dos columnas paralelas,
             una con los números del 1 al 50 y otra con los números del 50 al 1.*/
            while (A < 50){
                A++;
                cout << "   " << A << "       " << 51 - A << endl;
            }
            break;
        }

        case 15:{
            /*Escriba un programa que pida constantemente números hasta que se
             ingrese el número cero e imprima en pantalla la suma de todos los
             números ingresados.*/
            cout << "Ingrese cuantos numeros quiera, y cuando ingrese 0 se entregara la suma de los numeros ingresados\n";
            do {
                cout << "\n\n --> "; cin >> a; cout << "\n\n"; // se ingresan los numeros las veces que se quiera
                b = b + a; // realiza la sumatoria
            } while ( a != 0);
            cout << "La sumatoria es igual a = " << b;
            break;
        }

        case 16:{
            /*Escriba un programa que pida constantemente números hasta que se ingrese
             el número cero e imprima en pantalla el promedio de los números ingresados
             (excluyendo el cero).*/
            cout << "Ingrese cuantos numeros quiera, y cuando ingrese 0 se entregara el promedio de los numeros ingresados\n";
            do {
                cout << "\n\n --> "; cin >> a; cout << "\n\n";
                A++; // el contador va aumentado
                b = b + a;
            } while ( a != 0);
            b = b / (A - 1); // saca el promedio, primero la resta y despues la divicion
            cout << "La promedio es igual a = " << b;
            break;
        }

        case 17:{
            /*Escriba un programa que pida constantemente números hasta que se
             ingrese el número cero e imprima en pantalla el mayor de todos los
             números ingresados.*/
            cout << "Ingrese cuantos numeros quiera, y cuando ingrese 0 se entregara el mayor de todos los numeros\n";
            do {
                cout << "\n\n --> "; cin >> a; cout << "\n\n";
                if (a > b) b = a; // si el numero ingresado es mayor al previamente colocado se intercambia
            } while ( a != 0);
            cout << "\n El numero mayor de todos los ingresados es = " << b;
            break;
        }

        case 18:{
            /*Escriba un programa que pida un número N e imprima
             si es o no un cuadrado perfecto. (Es cuadrado perfecto caunto la raiz del numero es un numero natural entero)*/
            cout << "Ingrese un numero N y se averigua si es un cuadrado perfecto (La raiz y el indice del numero debe ser el mismo numero natural, entero) \n";
            cout << "\n\n --> "; cin >> A; cout << "\n\n";
            while (b < A) { // verifica que la potencia no se pase del valor al que se saca raiz
                B++; // aumenta los valores de poencia
                b = B*B;
            }
            if (b == A) cout << "El numero " << A << " SI es un cuadrador perfeto";
            else cout << "El numero " << A << " NO es un cuadrador perfeto";
            break;
        }

        case 19:{
            /*Escriba un programa que pida un número N e imprima si es
            o no un número primo.*/
            cout << "Ingrese un numero N y se averigua si es o no un numero primo (que solo se puede dividir por si mismo y por 1)\n";
            cout << "\n\n --> "; cin >> A; cout << "\n\n";
            if (A == 2 || A == 3 || A == 5 || A  == 7) cout << "El numero SI es primo"; // el dos es el unico numero par primo
            else if (A % 2 == 0 || A % 3 == 0 || A % 5 == 0 || A % 7 == 0) cout << "El numero NO es primo"; // condicion para que NO sea primo
            else cout << "El numero SI es primo"; //condicon para que sea primo
            break;
        }

        case 20:{
            /*Escriba un programa que pida un número N e imprima si es
             o no un palíndromo (igual de derecha a izquierda que de izquierda a derecha).*/
            cout << "Ingrese un numero N y averigue si es palindromo, si se escirbe igual de derecha a izquiera que de izquierda a derecha\n";
            cout << " --> "; cin >> num_n; cout << "\n\n";
            A = num_n;
            while (num_n != 0){
                B *= 10; // multiplica para aumetar una unidad los valores caluclados
                B = B + (num_n%10); // agrega al acumuladro el ultimo valor de la variable original
                num_n = num_n / 10; // le quita el ultimo valor a la variable original
            }
            if (B == A) cout << "El numero SI es palindromo";
            else cout << "El numero NO es palindromo";
            break;
        }

        case 21:{
            /*Escriba un programa que pida un carácter C, si es una letra la
             debe convertir de mayúscula a minúscula y viceversa e imprimirla.*/
            cout << "Ingresar solo un caracter\n(Si es una letra, hay un cambio de minuscula a mayuscula y viceversa): \n\n";
            cout << " --> ";cin >> cont; cout << "\n\n"; // se ingresa un valor en un char cualquiera
            num_n=cont;
            //cout << num_n;
            if (num_n>64 && num_n<91){
                cont=num_n+32; // si es mayuscula lo convierte en minuscula cambaido el valor char de ASCII
                cout << "Su caracter en minuscula es = " << cont << "\n\n";
            }
            else if (num_n>96 && num_n<123){
                cont=num_n-32; // si es minuscula la comvierte en Mayuscula cambiandole el valor ASCII
                cout << "Su caracter en mayuscula: " << cont << "\n\n";
            }
            else cout << "Su caracter: " << cont << "\n\n";
            break;
        }

        case 22:{
            /*Escriba un programa que pida una cantidad entera de segundos
             y la imprima en formato horas:minutos:segundos.*/
            cout << "Ingrese una cantidad entera de segundos eh imprimala en horas : minutos : segundos\n";
            cout << " --> "; cin >> b ; cout << "\n\n";
            a = b / 60; // cuantos segunod hay en un minuto
            a = a / 60; // cuantos minutos hay en una hora
            A = a; // aproximamos las horas
            a = a - A; // restamos y quedamos con los minutos sueltos
            a = a * 60; // aveiguamos cauntos minutos completo
            B = a; // aproximamos minutos
            a = a - B; // quedamos con los segundos sueltos
            a = a * 60; // averguamos cuantos segunos completos
            num_n = a; //aproximamos cuentos segundos
            cout << A << " HH: " << B << " M: " << num_n << " S\n\n";
            break;
        }

        case 23:{
            /*Escriba un programa que pida dos números A y B e imprima en pantalla el mínimo
             común múltiplo entre los dos.*/
            cout << "Averiguar minomo comun multiplo \n";
            cout << "Escribir el primer numero: \n\n --> "; cin >> A;
            cout << "\nEscribir el segundo numero: \n\n --> "; cin >> B;
            if (B>A) { //si el segunod numero es mayor cambiamos el orden de las variables
                num_n = A;
                A = B;
                B = num_n;
            }
            num_n=A; // que sirva de comprbante de aumento con la variable mayor
            while(true){
                if (num_n%A==0 && num_n%B==0){//si es multiplo de ls dos
                    cout << "\n\nEl MCM entre " << A << " y " << B <<" es: " << num_n << "\n\n";
                    break;
                }
                num_n++;//aumenta en uno las coparativas
            }
            break;
        }

        case 24:{
            /*Escriba un programa que pida una número entero e imprima un
             cuadrado de dicho tamaño, los bordes del cuadrado deben estar
             hechos con el carácter `+' y el interior debe estar vacío.*/
            cout << "Ingrese un numero entero y se imprimira un cuadrado del longitud inicado con  (+)\n";
            cout << " --> "; cin >> num_n ; cout << "\n\n\t\t";
            if (num_n == 0 ) cout << "Ingresaste cero no hay grafica"; //no se imprime nada cero
            else if (num_n == 1) cout << "+"; // la longitud es unitaria se imprime solo un (+)
            else{
                A = num_n;
                while (A != 0){ //imprimimo la primera fila
                    cout << "+";
                    A--;
                }
                B = num_n - 2;
                while (B != 0){ // imprimimos dos columbas del tamaño indicado menos 2
                    A = num_n - 2;
                    cout << "\n\t\t+";
                    while (A != 0){
                        cout << " ";
                        A--;
                    }
                    cout << "+";
                    B--;
                }
                cout << "\n\t\t";
                A = num_n;
                while (A != 0){ // imprimimos la ultima fila identica a la primera
                    cout << "+";
                    A--;
                }
            }
            break;
        }

        case 25:{
            /*Escriba un programa que pida un número N e imprima en
             pantalla la cantidad de dígitos de N.*/
            cout << "Ingrese un numero: ";
            cin >> A;
            for(B=0;A!=0;A=A/10) B+=1; //un for que itera la canida de veces en digitos que tenga A
            cout << "\nEl numero de digitos es: " << B << "\n\n";
            break;
        }

        case 26:{
            /*Escriba un programa que pida tres números e imprima el
             tipo de triangulo (isósceles, equilátero, escaleno) que se
             formaría, si sus lados tienen la longitud denida por los números
             ingresados. Tenga en cuenta el caso en que los números ingresados
             no forman un triángulo.*/
            cout << "Ingrese 3 Valores de lado y se comprobabra que tipo e triangulo es\n\n";
            cout << "A --> "; cin >> a ; cout << "\n\n";
            cout << "B --> "; cin >> b ; cout << "\n\n";
            cout << "C --> "; cin >> acumulador ; cout << "\n\n";
            if (a + b > acumulador && a + acumulador > b && b + acumulador > a) { //Verificamos que sea un triangulo ya que la suma de dos lados tiene que ser mayor al lado no sumado en todos los casos
                cout << "Los lados dados SI forman un triangulo \n\n";
                if (a == b && b == acumulador) cout << "Es un triangulo EQUILATERO\n\n"; // si todos sus lados son iguales
                else if ( a != b && a != acumulador && b != acumulador) cout << "Es un triangulo ESCALENO\n\n"; // si ningun lado se parece
                else cout << "Es un triangulo es ISOSCELES\n\n"; //descarte o dos lados iguales
            }
            break;
        }

        case 27:{
            /*Escriba un programa que actúe como una calculadora con
             operaciones de suma, resta, multiplicación y división,
             el usuario debe ingresar los operandos y la operación a realizar.*/
            cout << "Ingresar primer numero:\n\n --> ";cin >> a;
            cout << "Ingresar operador ( + , - , * , / ):\n\n --> ";cin >> cont; //ingresa el operador entre cuatro obciones posibles
            cout << "Ingresar Segundo numero:\n\n --> ";cin >> b;
            if (cont==42) cout << "Resultado: " << a*b << endl;
            else if (cont==43) cout << "Resultado: " << a+b << endl;
            else if (cont==45) cout << "Resultado: " << a-b << endl;
            else if (cont==47) {
                if (b == 0) cout << "Divicion en cero"; // en caso de que la divicion no se pueda realizar
                else cout << "Resultado: " << a/b << endl;
            }
            else cout << "Debe de poner alguno de estos operadores (* , / , + , -): " << endl; //que se ingrese un operador invalido
            break;
        }

        case 28:{
            /*Escriba un programa que encuentre el valor aproximado de pi
             en base a la siguiente suma innita:

             pi = 4 * [ 1 - (1/3) + (1/5) - (1/7) + (1/9)...]

             El usuario debe ingresar el número de elementos usados en la aproximación.*/
            cout << "Ingrese la cantidad de veces que quiera aplicar la ecuacion para aproximar pi \n\n";
            cout << "\t\t pi = 4 * [ 1 - (1/3) + (1/5) - (1/7) + (1/9)...]";
            cout << "\n\n --> "; cin >> A ; cout << "\n\n";
            if (A == 1) cout << "El resultado para pi es = 4";// si es 1 solo se multiplica 1 x 4
            else {
                a = 1;
                for (b = 3;A != 1; b+= 2){// definimos un for que comienze en un float igual a 3 y vaya aumentado en 2 hasta que el valor ingresado por e ussuario sea igual a 1
                    if (A % 2 == 0) a = a + (1/b); // en caso de que se teng que sumar por ser par valor e encuentro
                    else a = a - (1/b);// en caso de que se tenga que restar por ser impar valor de encuentro
                    A--; //se disminuye la variable
                }
                a = a * 4;// se multiplica por 4
            }
            cout << "El resultado para pi es = "<< a;
            break;
        }

        case 29:{
            /*Escriba un programa que adivine un número A (entre 0 y 100) seleccionado por el
            usuario (el número NO se ingresa al programa), el programa imprimirá en pantalla un número B y
            el usuario usará los símbolos `>', `<' y `=' para indicarle al programa si B es mayor, menor o igual
            que A. El programa imprimira un nuevo número B, con base en simbolo ingresado por el usuario, y
            repetira el proceso hasta acertar el número seleccionado por usuario.*/
            B=100;
            num_n=50;
            cout << "Ponga (<) si es menor, (>) si es mayor y (=) si es el numero que penso:\n\n";
            while(cont!=61){
                cout << " El numero que esta pensando es = " << num_n ;
                cout << "\n\n --> ";cin >> cont;
                if (cont==60){
                    B=num_n;
                    num_n=num_n-((B-A)/2);
                }
                else if (cont==62){
                    A=num_n;
                    num_n=((B-A)/2)+num_n;
                }
                else if (cont==61) cout << "Gracias por jugar" << endl;
                else cout << "Debe de colocar ( < , > , = )" << endl;
            }
            break;
        }

        case 30:{
            /*Escriba un programa que genere un número aleatorio A (entre 0 y 100) y le pida al
            usuario que lo adivine, el usuario ingresa un número B y el programa le dirá si B
            es mayor o menor que A, esto se repetirá hasta que el usuario adivine el número,
            en ese momento el programa le dirá el número de intentos que tardo el usuario en
            adivinar el número.*/
            srand(time(NULL));//definimos un cambio de entorno para encontrar la variable
            A = rand()%100; // se encuentra el numero aleatorio
            cout << "Se ha elegido un numero al azar entre (0 y 100), ingrese valores hasta encontrarlo\n\n";
            B = 101; // por lo que b inicia el 0 se cambia para un valor fuera del rango
            num_n = 0;
            while (A != B) {
                num_n++;//se crea el contador
                cout << "--> "; cin >> B ; cout << "\n\n\n\n\n\n\n\n";
                if (B > A) cout << "El numero ingresado es MAYOR al que estas buscando\n\n"; //ayudas para el usuario
                else if (B < A) cout << "El numero ingresado es MENOR al que estas buscando\n\n";
            }
            cout << "FELICITACIONES encontraste el numero = " << B << "\n\n Tardaste " << num_n << " intentos";
            break;
        }

        default:{
            cout << "\n\nValor fuera de rango \n\n";
            break;
        }

        }
    }
   else if (cont == char (50) ){

        cout << "Que problema desea realizar\n\n --> ";cin >> num_n;cout << "\n\n";
        switch (num_n) {
        case 1:{
            /*Escriba un programa que identique si un carácter ingresado es una vocal,
            una consonante o ninguna de las dos e imprima un mensaje según el caso.*/
            //cout << char(-92) << "\n";
            cout << "Ingrese una letra: \n\n";
            cout << "--> "; cin >> cont; cout << "\n\n";
            if ((cont>64 && cont<91 )|| (cont>96 && cont<123)||cont==-91 || cont==-92){ //averigua si esta dentro del ango de las letras -  Tambien pregunta si es una ñ qu neesita un comando especial diferente
                if (cont==65 || cont==69 || cont==73 || cont==79 || cont==85 || cont==97 || cont==101 || cont==105 || cont==111 || cont==117){ //averigua si es una voval tanto mayuscula como minuscula
                    cout << cont << " es una VOCAL." << endl;
                }
                else cout << cont << " es una CONSONANTE" << endl;
            }
            else cout << "No es una letra" << endl; //En caso de que no sea una letra
            break;
        }

        case 2:{
            /*Se necesita un programa que permita determinar la mínima combinación de billetes
            y monedas para una cantidad de dinero determinada. Los billetes en circulación son de $50.000,
            $20.000, $10.000, $5.000, $2.000 y $1.000, y las monedas son de $500, $200, $100 y $50.
            Hacer un programa que entregue el número de billetes y monedas de cada denominación para com-
            pletar la cantidad deseada. Si por medio de los billetes y monedas disponibles no se puede lograr la
            cantidad deseada, el sistema deberá decir lo que resta para lograrla.*/
            cout << "Que haces \n ";
            break;
        }

        case 3:{
            /*Escriba un programa que debe leer un mes y un día de dicho mes para luego decir
            si esa combinación de mes y día son válidos. El caso más especial es el 29 de febrero,
            en dicho caso imprimir posiblemente año bisiesto.*/
            cout << "Ingresar el dia: \n\n --> ";
            cin >> A; cout << "\n\n";
            cout << "Ingresa el mes: \n\n --> ";
            cin >> B; cout << "\n\n";
            if (B < 0 || B > 12 ) cout << B << " Es un mes INVALIDO" << endl; //se asegura que el este dentro del rango
            else if (A < 0 || A > 31 ) cout << "Es una dia INVALIDO" << endl; // se asegura que el dia este dentro del rango de 31
            else {
                cout << A << "/" << B << "\n\n"; // imprime la fecha a comprobar
                if (B == 2) { // si se refiere a febrero
                    if (A > 28) { // si es mayor a 28 solo es valida en un caso
                        if (A == 29) cout << "Fecha VALIDA en año Bisiesto\n\n"; //cuando es 29
                        else cout << "Fecha INVALIDA \n\n";
                    }
                    else cout << "Fecha Valida\n\n"; // en caso de estar dentro de los rango es valida
                }
                else if (B == 4 || B == 6 || B == 9 || B == 11) {// si pertenece a un me de 30 dias que son mas pocos que los de 31
                    if (A < 31) cout << "Fecha VALIDA"; // si tienen menos de 31 osea haste 30 dias es valida
                    else cout << "Fecha INVALIDA"; // caso contrario
                }
                else cout << "Fecha VALIDA"; //con todas las condicionales anteriores ya podemos decir que es fecha valida
            }
            break;
        }

        case 4:{
            /*Escriba un programa para leer dos números enteros con el siguiente signicado: el
            valor del primer número representa una hora del día en un reloj de 24 horas, de modo que 1245
            representa las doce y cuarenta y cinco de la tarde. El segundo entero representa un tiempo de du-
            ración de la misma manera, por lo que 345 representa tres horas y 45 minutos. El programa debe
            sumar esta duración primer número, y el resultado será impreso en la misma notación, en este caso
            1630, que es el tiempo de 3 horas y 45 minutos después de 12:45.*/
            cout << "Valor sin sentido \n";
            break;
        }

        case 5:{
            /*Escriba un programa que muestre el siguiente patrón en la pantalla:

                                                *
                                               ***
                                              *****
                                             *******
                                              *****
                                               ***
                                                *

            El tamaño del patrón estará determinado un número entero impar que
            ingrese el usuario. En el ejemplo mostrado, el tamaño de la gura es 7.*/
            cout << "Ingresar un numero impar para imprimir un rombo con  (*): \n\n --> ";
            cin >> num_n;cout << "\n\n";
            if (num_n%2==0) cout << "Debe de ingresar un numero impar" << endl;
            else{
                num_n=(num_n/2)+1;
                for(A=1;num_n>=A;A++){
                    for(a=num_n-1;a>=A;a--) cout << " ";
                    for(B=1;2*A-1>=B;B++) cout << "*";
                    cout << endl;
                }
                for(A=1;num_n-1>=A;A++){
                    for(a=1;a<=A;a++) cout << " ";
                    for(B=(num_n*2)-3;A*2-1<=B;B--) cout << "*";
                    cout << endl;
                }
             //cout << "Terminado";
            }
            break;
        }

        case 6:{
            /*Escriba un programa que encuentre el valor aproximado del número de euler en base
            a la siguiente suma innita:

            El usuario debe ingresar el número de elementos usados en la aproximación.*/
            cout << "Valor sin sentido \n";
            break;
        }

        case 7:{
            /*En la serie de Fibonacci, cada número es la suma de los 2 anteriores e inicia con 1 y 1.
            Ej: 1, 1, 2, 3, 5, 8, ....
            Escriba un programa que reciba un número n y halle la suma de todos los números pares
            en la serie de Fibonacci menores a n.*/
            cout << "Ingrese un numero, para avariguar todos los numeos de Fibonacci hasta ese numero y su sumatoria:\n\n -->";
            cin >> num_n;cout << "\n\n";
            A=0;
            B=1;
            a=0;
            while (B<=num_n){
                b=A+B;
                if (B%2==0) a+=B;
                cout << " , "<< B;
                A=B;
                B=b;
            }
            cout << "\n\nLa suma de los numeros pares de la serie de fubonacci menores a " << num_n << "\n\nEs = " << a << endl;
            break;
        }

        case 8:{
            /*Escriba un programa que reciba 3 números a, b, c, y calcule la suma
            de todos los múltiplos de a y b que sean menores a c. Tenga en cuenta
            no sumar 2 veces los múltiplos comunes.*/
            cout << "Valor sin sentido \n";
            break;
        }

        case 9:{
            /*Escriba un programa que pida un número entero N e imprima el resultado
            de la suma de todos sus dígitos elevados a sí mismos.*/
            cout << "Ingrese un numero N, y el programa imprime la suma de todos sus digitos elevados a si mismos:\n(Si el digito es cero se tomo como cero elevado a cero igual a 1, por teoria de conjunto segun acuerdo)\n\n --> ";
            cin >> A; cout << "\n\n";
            for(;A!=0;A/=10){
                num_n = 1; // se inicia el acumulador en 1 que es la primera variable al multiplicar
                B=A%10; // averigua el ultimo digio del numero
                for (;B!=0;B-=1) num_n *= A%10; // se saca la potencia
                a += num_n; // se añade al acumulador
            }
            cout << "Resultado: " << a << endl;
            break;
        }

        case 10:{
            /*Escriba un programa que reciba un número n e imprima el enésimo número primo.*/
            cout << "Valor sin sentido \n";
            break;
        }

        case 11:{
            /*Escriba un programa que reciba un número y calcule el mínimo común
            múltiplo de todos los números enteros entre 1 y el número ingresado.*/
            cout << "Ingrese un numero N y calcular el miimo comun multiplo de todos los numeros enteros entre 1 y el numero ingresado\n\n --> ";
            cin >> num_n;cout << "\n\n";
            a=0;
            A=num_n;
            while(a==0){
                A+=1;
                B=1;
                for (;B<=num_n;B++){
                    if (A%B!=0) break;
                    else if (B==num_n) a=1;
                }
            }
            cout << "\nEl MCM es: " << A << endl;
            break;
        }

        case 12:{
            /*Escriba un programa que calcula el máximo factor primo de un número.*/
            cout << "Valor sin sentido \n";
            break;
        }

        case 13:{
            /*Escriba un programa que reciba un número y calcule la suma
            de todos los primos menores que el número ingresado.*/
            cout << "Ingrese un numero y se calcula la suma de todos los primos menores al numero\n\n --> ";
            cin >> num_n; cout << "\n\n";
            A=2;
            if (num_n<=1) cout << "Poner un numero mayor a 1" << endl;
            else{
                for(;A<num_n;A++){
                    for (B=2;B<=A;B++){
                        if (A==B){
                            a+=B; //aumenta el acumulador
                        }
                        else if (A%B==0) break;

                    }
                }
            }
            cout << "La suma de los numeros primos menores a " << num_n << " es: " << a << endl;
            break;
        }

        case 14:{
            /*Un número palíndromo es igual de derecha a izquierda y de izquierda a derecha
            Ej: 969. escriba un programa que calcule el número palíndromo más grande que se puede obtener
            como una multiplicación de números de 3 dígitos.
            Ej: una de las posibles respuestas es: 143*777=111111.
            Nota: la salida del programa debe ser: 143*777=111111*/
            cout << "Valor sin sentido \n";
            break;
        }

        case 15:{
            /*Empezando con el número 1 y moviéndose hacia la izquierda y en sentido horario
            se genera una espiral de números como la siguiente:

                21 22 23 24 25
                20  7  8  9 10
                19  6  1  2 11
                18  5  4  3 12
                17 16 15 14 13

            En el caso de esta espiral de 5x5, la suma de los números en la diagonal es 101.
            Escriba un programa que reciba un número impar n y calcule la suma de los números en la diagonal
            de una espiral de nxn.
            Nota: la salida del programa debe ser:
            En una espiral de 5x5, la suma es: 101.
            Otra nota: se le dará una bonicación si imprime la espiral.*/
            cout << "Ingrese un numero N impar para realizar una espieral desde 1 con aumento a la izquierda en sentido horario\n";
            cout << "y de dimenciones NxN\n\n --> "; cin >> num_n; cout << "\n\n";
            int vec[num_n];
            B = (num_n*num_n) - num_n + 1;
            vec[A] = B;
            while (A < num_n){
                //cout << B << "\n";
                cout << vec[A] << " ";
                A++;
                B += 1;
                vec[A] = B;
            }
            impar = num_n;
            for (B = num_n; B != 0; B--){
                cout << "\n";
                A = 0;
                ente ++;
                for (pos = ente; pos != 0; pos--){
                    vec[A] -= 1;
                    if (vec[A] < 10) cout << vec[A] << "  ";
                    else cout << vec[A] << " ";
                    A ++;
                }
                pos = num_n - ente - (ente - 1);
                //cout << "\n\n" << pos << "\n\n";
                impar -= 2;
                sum = impar * impar - impar + 1;
                for (;pos > 0; pos--){
                    if (sum < 10) cout << sum << "  ";
                    else cout << sum << " ";
                    vec[A] = sum;
                    sum ++;
                    A++;
                }
                pos = ente - 1;
                for (; pos != 0; pos--){
                    vec[A] += 1;
                    if (vec[A] < 10) cout << vec[A] << "  ";
                    else cout << vec[A] << " ";
                    A ++;
                }
            }
            break;
        }

        case 16:{
            /*La serie de Collatz se conforma con la siguiente regla: sea n un elemento de la serie,
            si n es par, el siguiente elemento es n/2, y si n es impar, el siguiente elemento es 3n+1.
            Escriba un programa que reciba un número k y calcule cual es el elemento inicial j (semilla), menor
            que k, que produce la serie más larga y diga cuantos términos m tiene la serie.
            Tip: la serie termina al llegar a un elemento cuyo valor sea 1.
            Ej: para la semilla 13: 13, 40, 20, 10, 5, 16, 8, 4, 2, 1
            Nota: la salida del programa debe ser:
            La serie mas larga es con la semilla: j, teniendo m terminos.
            Otra nota: se le dará una bonicación si imprime la serie.*/
            cout << "Valor sin sentido \n";
            break;
        }

        case 17:{
            /*La secuencia de números triangulares se forma al sumar su posición en el arreglo
            con el valor del número anterior: 1, 1+2=3, 3+3=6, 6+4=10, 10+5=15, 15+6=21, 21+7=28...
            Si listamos los números triangulares y sus divisores tenemos:

            1: 1
            3: 1,3
            6: 1,2,3,6
            10: 1,2,5,10
            15: 1,3,5,15
            21: 1,3,7,21
            28: 1,2,4,7,14,28

            Se observa que 28 es el primer número triangular que tiene más de 5 divisores. Escriba un programa
            que reciba un número k y calcule cual es el primer número triangular que tiene más de k divisores.
            Tip: el enésimo número triangular se puede representar como n*(n+1)/2.
            Nota: la salida del programa debe ser: El numero es: 28 que tiene 6 divisores.*/
            cout << "Ingrese el numero K de divisores para un numero triangular con diviiores 1 mayor a K\n\n --> ";
            cin >> num_n; cout << "\n\n";
            for(;num_n>=A;){  // miestras los diviosres encontrados sean menores o iguales al numero K
                A = 0; // o divisores
                a++; // va aumentado el numero triagunlar posicional a calcular
                B = a*(a+1)/2; //calculo del numero triangular
                //cout << B << "  ";
                for (ente = 1; B >= ente ; ente++ ) if (B%ente == 0 ) A++; //averigua cociente
                //cout << A << "  \n";
            }
            cout << "El numero es: " << B << " que tiene " << A << " divisores" << endl;
            break;
        }

        default:{
            cout << "\n\nValor fuera de rango \n\n";
            break;
        }

        }
    }
   else {
        cout << "Valor fuera del rango\n\n";
    }

    cout << "\n\n";
    system ("pause");
    return 0;
}
