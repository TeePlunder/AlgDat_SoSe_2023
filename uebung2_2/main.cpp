#include <iostream>
#include <fstream>

using namespace std;

int main() {
    string filename, article, cheapArticlesFilename = "cheap_articles", basePath = "../", fileExtention = ".txt";
    double price;

    cout << "Geben Sie den Dateinamen ein (ohne Dateiendung): ";
    cin >> filename;

    ifstream articleFile(basePath + filename + fileExtention);
    ofstream cheapArticlesFile(basePath + cheapArticlesFilename + fileExtention);

    if (articleFile.fail() || cheapArticlesFile.fail()) {
        cout << "Fehler beim öffnen der Datei" << endl;
        return -1;
    }

    int cheapArticlesCount = 0;
    while (articleFile.good()) {
        articleFile >> article >> price;

        if (articleFile.good()) {
            if (price < 100.00) {
                cheapArticlesCount++;
                cheapArticlesFile << article << " " << price << endl;
            }
        } else if (!articleFile.eof()) {
            cout << "Fehler beim Lesen der Datei. Vielleicht fehlt ein Wert?" << endl;
            return -1;
        }
    }
    cout << cheapArticlesCount << " Artikel kosten unter 100€";
    articleFile.close();
    cheapArticlesFile.close();

    return 0;
}
