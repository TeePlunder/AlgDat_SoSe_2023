#include <iostream>
#include <fstream>

using namespace std;

int main() {
    string filename, article;
    double preis;

    cout << "Geben Sie den Dateinamen ein (ohne Dateiendung): ";
    cin >> filename;

    ifstream file("../" + filename + ".txt");

    if(file.is_open()) {
        while (file.good()) {
            file >> article >> preis;
            cout << article << ": " << preis << " €" << endl;
        }
        file.close();
    }
    else {
        cout << "Fehler beim öffnen der Datei";
    }
    return 0;
}
