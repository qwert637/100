#include <iostream>
using namespace std;

int main() {
    double a, b;

    cout <<"Введіть перше число: ";
    cin >> a;
    cout << "Введіть друге число";
    cin >> b;

    double average = (a + b) / 2.0;
    cout << " Середнє значення: " <<average << endl;

    return 0;
}