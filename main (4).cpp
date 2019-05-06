#include <iostream>
#include <limits>
using namespace std;

void ignorar_resto()
{
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

int main()
{
    char cadena [100];
    char linea[20];
    cin >> cadena;
    ignorar_resto();
    cin.getline(linea, 20);
    cout << cadena << endl;
    cout << linea << endl;
    return 0;
}
