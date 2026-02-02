#include <iostream>
#include <string>
using  namespace std;
int main () {

string name, surname;
int age;
 
cout <<"Введіть ваше імя: ";
cin >> surname;
cout <<"Введіть ваше призвіще: ";
cin >> name;
cout <<"Введіть ваш вік";
cin >> age;

cout << "Анкета";
cout <<"Ім'я: "<< name << endl;
cout <<"Прізвище: " << surname << endl;
cout <<"Вік: " << age << "років" <<endl;

return 0;


}