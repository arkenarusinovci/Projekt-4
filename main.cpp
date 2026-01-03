#include <iostream>
#include <string>
using namespace std;

int main() {
    int numOfClasses = 0;
    float totalSum = 0;
    cout << "Vendos numrin e klasav që ke kryer: ";
    cin >> numOfClasses;
    for (int i = 0; i < numOfClasses; i++) {
        int grade = 0;
        cout << "Vendos noten qe ke marr ne lenden " << i+1 << ": ";
        cin >> grade;
        totalSum += grade;
    }
    float avg = totalSum / numOfClasses;
    cout << "Nota mesatare eshte: " << avg << endl;
}
