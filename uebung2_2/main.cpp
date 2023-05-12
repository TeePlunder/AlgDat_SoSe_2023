#include <iostream>
#include <fstream>

using namespace std;

int main() {
    string filename, article, cheapArticlesFilename = "cheap_articles", basePath = "../", fileExtention = ".txt";
    double price;

    cout << "Geben Sie den Dateinamen ein (ohne Dateiendung): ";
    cin >> filename;

    ifstream articleFile(basePath + filename + fileExtention);
    ofstream cheapArticleFile(basePath + cheapArticlesFilename + fileExtention);

    if (articleFile.fail() || cheapArticleFile.fail()) {
        cout << "Fehler beim öffnen der Datei" << endl;
        return -1;
    }
    
    int cheapArticlesCount = 0;
    while (articleFile.good()) {
        articleFile >> article >> price;
        if (price < 100.00) {
            cheapArticlesCount++;
            cheapArticleFile << article << " " << price << endl;
        }
    }
    cout << cheapArticlesCount << " Artikel kosten unter 100€";
    articleFile.close();
    cheapArticleFile.close();

    return 0;
}
