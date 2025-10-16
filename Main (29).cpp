#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int hora, minuto;
    cout << "Ingrese la hora (HH MM en formato 24h): ";
    cin >> hora >> minuto;
    string periodo = (hora >= 12) ? "PM" : "AM";
    if (hora > 12) hora -= 12;
    if (hora == 0) hora = 12;
    cout << "Hora en formato 12h: " << setw(2) << setfill('0') << hora << ":" 
         << setw(2) << setfill('0') << minuto << " " << periodo << endl;
    return 0;
}