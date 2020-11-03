#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<string> strings;
    string op;
    while(true){
        cout << "MENU: " << endl;
        cout << "1) Agregar al final" << endl;
        cout << "2) Mostrar" << endl;
        cout << "3) Inicializar" << endl;
        cout << "4) Frente" << endl;
        cout << "5) Ultimo" << endl;
        cout << "6) Ordenar" << endl;
        cout << "7) Insertar" << endl;
        cout << "8) Eliminar" << endl;
        cout << "9) Eliminar ultimo" << endl;
        cout << "0) Salir" << endl;
        cout << "Opcion: ";
        getline(cin, op);
        if(op == "1"){
            string myStr;
            cout << "Cadena de caracteres: ";
            getline(cin, myStr);
            strings.push_back(myStr);
        }
        else if(op == "2"){
            for(size_t i=0; i < strings.size(); i++){
                cout << strings[i] << ", ";
            }
            cout << endl;
        }
        else if(op == "3"){
            size_t n;
            string myStr;

            cout << "Tam: ";
            cin >> n;
            cin.ignore();
            cout << "Cadena de Caracteres: ";
            getline(cin, myStr);

            strings = vector<string>(n, myStr);
        }
        else if(op == "4"){
            if(strings.empty()){
                cout << "Vector esta vacio" << endl;
            }
            else{
                cout << strings.front() << endl;
            }
        }
        else if(op == "5"){
            if(strings.empty()){
                cout << "Vector esta vacio" << endl;
            }
            else{
                cout << strings.back() << endl;
            }
        }
        else if (op == "6"){
            sort(strings.begin(), strings.end());
        }
        else if (op == "7"){
            size_t p;
            string myStr;
            cout << "Posicion: ";
            cin >> p;
            cin.ignore();
            cout << "Cadena de Caracteres: ";
            getline(cin, myStr);
            if (p >= strings.size()){
                cout << "posicion no valida" << endl;
            }
            else{
                strings.insert(strings.begin()+p, myStr);
            }
        }
        else if (op == "8"){
            size_t p;

            cout << "Posicion: ";
            cin >> p;
            cin.ignore();
            
            if (p >= strings.size()){
                cout << "posicion no valida" << endl;
            }
            else{
                strings.erase(strings.begin()+p);
            }   
        }
        else if (op == "9"){
            if(strings.empty()){
                cout << "Vector esta vacio" << endl;
            }
            else{
                strings.pop_back();
            }
        }
        
        else if(op == "0"){
            break;
        }
        else{
            cout << "Opcion no valida" << endl;
        }
    }

    return 0;
}