#include <iostream>

using namespace std;

int main() {
    string cadena;

    //cin >> cadena; //lee hasta espacio
    getline(cin,cadena); //lee hasta \n
    cout << cadena.size() << endl;

    return 0;
}