#include <iostream>

using namespace std;

int main() {
    int num;
    cin >> num;
    int summ = 0;
    if (num < 0) {
        cout << "Incorrect meaning" << endl;
    }
    else {
        for (int i = 0; i < num; ++i) {
            summ += i;
        }
    }
    cout << "Total summ: " << summ << endl;
    cout << "something horrible is happening inside of me and i dont know why" << endl;
    cout << "fuuck" << endl;
}