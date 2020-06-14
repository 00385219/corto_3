
        }

        for(intento = 2; intento <= 5; intento++) //y el for empieza en 2 porque ya hizo un intento
        {
            numInt = 5 - intento;
            cout << endl << "\nPor favor, ingresa el numero que piensas que es: \n";
            cout << endl << "Tiene " << numInt << " restantes.";
            cin >> numUser;
            numero(numUser, &intento, &ranNum); //se llama a la funcion 'numero'
            cero_intentos(intento); //se llama a la funcion 'cero_intentos'
        }  
    }
