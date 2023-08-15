#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <sstream>
#include <unistd.h>
#include <cstring> 
using namespace std;

int sumatoriaVector(const std::vector<int>& vector) {
    double suma = 0.0;
    for (double elemento : vector) {
        suma += elemento;
    }
    return suma;
}

int calcularPromedio(const std::vector<int>& vector) {
    int suma = 0;
    for (int elemento : vector) {
        suma += elemento;
    }
    return suma/vector.size();
}

int contarElementos(const std::vector<int>& vector){
    return vector.size();
}

int calcularModa(const std::vector<int>& datos) {
    vector<int> valoresUnicos = datos;
    sort(valoresUnicos.begin(), valoresUnicos.end());
    valoresUnicos.erase(unique(valoresUnicos.begin(), valoresUnicos.end()), valoresUnicos.end());

    int moda = 0;
    int maxFrecuencia = 0;

    for (int val : valoresUnicos) {
        int frecuencia = std::count(datos.begin(), datos.end(), val);
        if (frecuencia > maxFrecuencia) {
            maxFrecuencia = frecuencia;
            moda = val;
        }
    }

    return moda;
}

bool numeroEstaEnVector(int numero, const vector<int>& numeros) {
    return find(numeros.begin(), numeros.end(), numero) != numeros.end();
}

int main(int argc, char *argv[]) {
    //ocupar getopt y guardar el nombre y los valores
    string usuario;      //Nombre del usuario iniciado
    vector<int> valores; //Vector de valores a operar

    int option;
    while ((option = getopt(argc, argv, "u:v:")) != -1) {
        switch (option) {
            case 'u':
                usuario = optarg;
                break;
            case 'v':
                {
                    // Parse the values separated by semicolons
                    string valuesString(optarg);
                    stringstream ss(valuesString);
                    string valueToken;
                    while (getline(ss, valueToken, ',')) {
                        int value = atoi(valueToken.c_str());
                        valores.push_back(value);
                    }
                }
                break;
        }
    }

    //Abrir archivo y cargar en vectores "nombres" y "numeros"
    ifstream archivo("data_base.txt");

    if (!archivo.is_open()) {
        cerr << "No se pudo abrir el archivo." << endl;
        return 1;
    }

    vector<string> nombres;
    vector<vector<int>> numeros;

    string linea;
    while (getline(archivo, linea)) {
        stringstream ss(linea);
        string nombre;
        vector<int> nums;

        getline(ss, nombre, ';'); // Obtener el nombre antes del ';'
        string numerosStr;
        getline(ss, numerosStr); // Obtener la parte después del ';'

        stringstream ssNumeros(numerosStr);
        int num;
        while (ssNumeros >> num) {
            nums.push_back(num);
            if (ssNumeros.peek() == ',') {
                ssNumeros.ignore();
            }
        }

        nombres.push_back(nombre);
        numeros.push_back(nums);
    }

    archivo.close();

    auto it = find(nombres.begin(), nombres.end(), usuario);

    if (it != nombres.end()) {
        int opcion;
        int indice = distance(nombres.begin(), it);
        vector<string> opciones = {
        "Realizar sumatoria del vector",
        "Realizar promedio del vector",
        "Calcular moda del vector",
        "Contar elementos del vector"
        };

        cout << "************************************" << endl;
        cout << "Bienvenido " << usuario << endl;
        cout << "************************************" << endl;
        cout << "Seleccione opcion:" << endl;
        
        for (int num : numeros[indice]) {
            cout << "  "<< num << ") "<< opciones[num-1] << endl;

        }
        cout << "  "<< 5 << ") "<< "Salir del programa" << endl;
        cout << "************************************" << endl;

        do {

        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                if (numeroEstaEnVector(1, numeros[indice])){
                    cout << "Resultado : " << sumatoriaVector(valores) << endl;
                }
                else{
                    cout << "No posee permiso para realizar esta accion !!!!!!" << endl;
                }
                break;
            case 2:
                if (numeroEstaEnVector(2, numeros[indice])){
                    cout << "Resultado : " << calcularPromedio(valores) << endl;
                }
                else{
                    cout << "No posee permiso para realizar esta accion !!!!!" << endl;
                }
                break;
            case 3:
                if (numeroEstaEnVector(3, numeros[indice])){
                    cout << "Resultado : " << calcularModa(valores) << endl;
                }
                else{
                    cout << "No posee permiso para realizar esta accion !!!!!" << endl;
                }
                break;
            case 4:
                if (numeroEstaEnVector(4, numeros[indice])){
                    cout << "Resultado : " << contarElementos(valores) << endl;
                }
                else{
                    cout << "No posee permiso para realizar esta accion !!!!!" << endl;
                }
                break;
            case 5:
                cout << "Saliendo del programa." << endl;
                break;
            default:
                cout << "Opción no válida. Por favor, seleccione otra opcion." << endl;
            }

        } while (opcion != 5);


    } else {
        cout << "Usuario no registrado" << endl;
    }

    return 0;
}
