#include <iostream>
#include <string>
using  namespace std;

int  main() {
string product;
double price;
int quantity;   

cout <<"Назва товару: ";
cin >> product;
cout <<"Ціна:";
cin >> price;
cout <<"Кількість: ";
cin >> quantity;   

double total = price + quantity;

cout <<"Чек";
cout << "Товар\tЦіна\tКількість\tСума\n";
cout << product<< "\t" << price<< "\t" << quantity<< "\t"<< total << endl;

return 0;
}