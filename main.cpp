#include <iostream>
/*1. Объявить указатели на две переменные указанного типа. Используя указатели
    произвести операции сложения и вычитания над переменными. Вывести адреса
        указателей. Типы переменных указаны в таблице.Тип int.
*/
/*
int main() {
    int a = 5, b = 3;
    int* pa = &a;
    int* pb = &b;

    std::cout << "Address of pa: " << &pa << std::endl;
    std::cout << "Address of pb: " << &pb << std::endl;

    int sum = *pa + *pb;
    int diff = *pa - *pb;

    std::cout << "Sum of a and b: " << sum << std::endl;
    std::cout << "Difference between a and b: " << diff << std::endl;

    return 0;
}
*/
/*2. Написать функцию для обмена значений переменных, указанных выше. Передача по
    указателю. Выполнить программу по шагам и выписать в тетрадь адреса указателей
    и величины переменных.
*/
/*
void swap(int* px, int* py) {
    int temp = *px;
    *px = *py;
    *py = temp;
}

int main() {
    int a = 5, b = 3;
    int* pa = &a;
    int* pb = &b;

    std::cout << "Before swapping: " << std::endl;
    std::cout << "a = " << a << ", b = " << b << std::endl;

    swap(pa, pb);

    std::cout << "After swapping: " << std::endl;
    std::cout << "a = " << a << ", b = " << b << std::endl;

    return 0;
}
*/
/*3. Объявить динамический массив. Размер массива задаёт пользователь. Заполнить
    массив случайными числами. Вывести на экран адреса и значения элементов
    массива.
*/
/*

int main() {
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    int* arr = new int[size];

    srand(4);

    std::cout << "Array values and addresses: " << std::endl;
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100;
        std::cout << "arr[" << i << "] = " << arr[i] << ", address = " << &arr[i] << std::endl;
    }

    delete[] arr; //
    return 0;
}
*/
/* 4. Объявить сущность и описать её свойства. Объявить динамический массив
сущностей. Реализовать функцию, которая изменяет значения элемента (структура)
массива. Заполнить атрибуты числовыми и текстовыми значениями (диапазон
значений определить самостоятельно).
c. цветок */
/*
struct Flower {
    std::string name;
    std::string color;
    int height;
    int price;
};

void changeFlower(Flower* arr, int index) {
    arr[index].name = "Rose";
    arr[index].color = "Red";
    arr[index].height = 50;
    arr[index].price = 10;
}

int main() {
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    Flower* arr = new Flower[size];

    srand(2);

    std::cout << "Array values and addresses: " << std::endl;
    for (int i = 0; i < size; i++) {
        arr[i].name = "Tulip";
        arr[i].color = "Yellow";
        arr[i].height = rand() % 50 + 10;
        arr[i].price = rand() % 20 + 5;
        std::cout << "arr[" << i << "] = { name: " << arr[i].name << ", color: " << arr[i].color << ", height: " << arr[i].height << ", price: " << arr[i].price << " }, address = " << &arr[i] << std::endl;
    }

    int index;
    std::cout << "Enter the index of the element to change: ";
    std::cin >> index;

    changeFlower(arr, index);

    std::cout << "Array after changing element " << index << ": " << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << "arr[" << i << "] = { name: " << arr[i].name << ", color: " << arr[i].color << ", height: " << arr[i].height << ", price: " << arr[i].price << " }, address = " << &arr[i] << std::endl;
    }

    delete[] arr;

    return 0;
}
*/
