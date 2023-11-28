// Librerias a usar
#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>

using namespace std;

// Creacion del main
int main(){ 

    //Declarando variables
    int num = 30;
    string arreglo[num], aux;
    string linea;
    fstream archivo1("alfabeto.txt");

    cout<<"El archivo ordenado queda de la siguiente manera: "<<endl;
    // Abriendo el archivo de texto
    if (archivo1.is_open())
    {  
        for (int i = 0; i < num; i++) // Ciclo for para guardar linea por linea del texto en un arreglo
        {
            getline(archivo1, linea);
            arreglo[i] = linea;
        }
        for (int i = 0; i < num; i++) // Ciclos for anidados para ordenar las lineas alfabeticamente
        {
            for (int j = i + 1; j < num; j++)
            {
                if (arreglo[i] > arreglo[j])
            {
                // Metodo burbuja para el ordenamiento de palabras
                aux = arreglo[j];
                arreglo[j] = arreglo[i];
                arreglo[i] = aux;
            }
            }
            
        }
    // Cerrando el archivo de texto
    archivo1.close();

    cout <<endl;

    // Ciclo for para imprimir el resultado
    for (int i = 0; i < num; i++)
    {
        cout<< arreglo[i]<<endl;
    }
    
    }
    else
    {
        cout<<"El archivo no se puede abrir. "<<endl;
    }

    getch();
    return 0;
}