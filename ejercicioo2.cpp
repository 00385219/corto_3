#include "iostream" 
#include<stdlib.h> //libreria para numero aleatorio
#include<time.h> //para funcion time()
using namespace std;
int numero(int, int*, int*); //funcion para evaluar si acerto o no despues del primer intento
int cero_intentos(int); //funcion para indicar que se quedo sin mas intentos
int YaNoJugar(int, int*); //funcion para que indique si no quiere jugar más

int main(void) 
{ 
    int ranNum, numUser, intento, numInt, YaNo;

    srand(time(NULL)); //para inicializar los números aleatorios
    ranNum=1+rand()%(101-1); //numero aleatorios entre 1 y 100

    cout << endl << "Bienvenido al juego del numero magico.";
    cout << endl << "Debes adivinar el numero entre el 1 y el 100.";
    cout << endl << "Solo tienes 5 intentos.";          
    cout << endl << "\nPor favor, ingresa el numero que piensas que es: \n";
    cin >> numUser;
    
    if (numUser == ranNum) //en el primer intento se verifica si acerto o no
    {
        intento = 1;
        cout << endl << "\n ¡Felicidades, acertaste en " << intento << " intento/s";
        
    }
    else
    {
        //los dos siguentes if verifican si es mayor o menor al primer numero ingresado
        if (numUser > ranNum)
        {
            cout <<"\nDigite un numero menor";
        }
        if (numUser < ranNum)
        {
            cout <<"\nDigite un numero mayor";
        }

        for(intento = 2; intento <= 5; intento++) //y el for empieza en 2 porque ya hizo un intento
        {
            
            numInt = 5 - intento + 1;
            cout << endl << "Tiene " << numInt << " intentos restantes.\n";
            cout << endl << "\nPor favor, ingresa el numero que piensas que es o ingresa 0 cero si no deseas jugar mas: \n";
            cin >> numUser;
            YaNoJugar(numUser, &intento); //se llama a la funcion 'YaNoJugar'
            numero(numUser, &intento, &ranNum); //se llama a la funcion 'numero'
            cero_intentos(intento); //se llama a la funcion 'cero_intentos'
        }  
    }

    
}

int numero(int numUser, int *intento, int *ranNum ) 
{ 
    if (numUser==*ranNum)
    {
        cout << endl << "\nFelicidades, acertaste en " << *intento << " intentos";
        *intento = 5;
    }
    else
    {
        if (numUser != 0) //se pone este if ya que si el usuario no ingresa 0 significa que quiere seguir jugando
        {
            if (numUser > *ranNum)
            {
                cout <<"Digite un numero menor";
            }
            if (numUser < *ranNum)
            {
            cout <<"Digite un numero mayor";
            }
        }
    }
} 

int cero_intentos(int intento)
{
    if (intento == 5) //al detectar el intento==5 significa que ya no tiene mas intentos
    {
        cout << endl << "\nAcabaste tus 5 intentos, vuelve a intentarlo\n\n";
    }
}

int YaNoJugar(int numUser, int *intento)
{
    if (numUser == 0) //al detectar el numUser==0 significa que ya no quiere jugar
    {
        cout << endl << "\nMuchas gracias por jugar, vuelve pronto\n\n";
        *intento = 6; //se ingresa el 6 para que finalice el para y no entre en conflicto con las otras funciones
    }
}