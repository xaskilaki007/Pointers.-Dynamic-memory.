/*
Объявить сущность и описать её свойства. Объявить динамический массив
сущностей. Реализовать функцию, которая изменяет значения элемента (структура)
массива. Заполнить атрибуты числовыми и текстовыми значениями (диапазон
значений определить самостоятельно).
c. компьютер
*/
#include <iostream>
#include <string>
using namespace std;

struct Computer {
    int id;
    string brand;
    string model;
    int year;
};

void changeComputer(Computer* arr, int index) {
    arr[index].brand = "HP";
    arr[index].model = "Pavilion";
    arr[index].year = 2020;
}

int main() {
    int n = 3;
    Computer* computers = new Computer[n];


    for (int i = 0; i < n; i++) {
        computers[i].id = i+1;
        computers[i].brand = "Dell";
        computers[i].model = "Inspiron";
        computers[i].year = 2015 + i;
    }

    cout << "Before changing: " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Computer " << computers[i].id << ": " << computers[i].brand << " " << computers[i].model << " (" << computers[i].year << ")" << endl;
    }

    int indexToChange = 1;
    changeComputer(computers, indexToChange);

    cout << "After changing computer " << computers[indexToChange].id << ": " << computers[indexToChange].brand << " " << computers[indexToChange].model << " (" << computers[indexToChange].year << ")" << endl;


    delete[] computers;

    return 0;
}
