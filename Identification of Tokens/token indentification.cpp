#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <set>

using namespace std;

int main() {
    ifstream inputFile("input.txt");
    if (!inputFile.is_open()) {
        cerr << "Error opening input file." << endl;
        return 1;
    }
    ifstream secondFile("keywords.txt");
    if (!secondFile.is_open()) {
        cerr << "Error opening second file." << endl;
        return 1;
    }

    ifstream thirdFile("operator.txt");
    if (!thirdFile.is_open()) {
        cerr << "Error opening third file." << endl;
        return 1;
    }
    set<string> wordSetSecond;
    set<string> wordSetThird;

    string line;

    while (getline(secondFile, line)) {
        istringstream iss(line);
        string word;
        while (iss >> word) {
            wordSetSecond.insert(word);
        }
    }
    while (getline(thirdFile, line)) {
        istringstream iss(line);
        string word;
        while (iss >> word) {
            wordSetThird.insert(word);
        }
    }
    while (getline(inputFile, line)) {
        istringstream iss(line);
        string word;
        while (iss >> word) {

            if (wordSetSecond.find(word) != wordSetSecond.end()) {
                cout<<"keywords are: "<<endl;
                cout << word << endl;
            }

            else if (wordSetThird.find(word) != wordSetThird.end()) {
                cout<<"operators are: "<<endl;
                cout  << word << endl;
            }
        }
    }

    inputFile.close();
    secondFile.close();
    thirdFile.close();

    return 0;
}
