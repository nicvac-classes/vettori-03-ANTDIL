#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);

int main() {
    double n, i, ind;

    cout << "Quanti studenti ci sono in classe?" << endl;
    cin >> n;
    string nomi[n];
    double voti[n];
    double v;

    i = 0;
    while (i < n) {
        cout << "Qual'è il tuo nome?" << endl;
        cin >> nomi[i];
        cout << "Qual'è il tuo voto?" << endl;
        cin >> voti[i];
        if (i == 0) {
            v = voti[i];
        } else {
            if (v < voti[i]) {
                v = voti[i];
            }
        }
        i = i + 1;
    }
    cout << "I dati della classe sono i seguenti" << endl;
    i = 0;
    while (i < n) {
        if (voti[i] == v) {
            ind = i;
        }
        i = i + 1;
    }
    if (ind >= 0) {
    }
    cout << "Nome: " << nomi[ind] << " voto: " << voti[ind] << endl;
    return 0;
}