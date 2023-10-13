#include <iostream>
#include <fstream>
#include <string>
/*1. Реализовать чтение заголовков файлов форматов. Проверить работоспособность
можно по примерам.b. ZIP: Local File Header  */
/*
struct HEADER{
    int sign;
    short version;
    short flag;
    short comp;
    short LT;
    short LD;
    int crc;
    int sizec;
    int sized;
    short LN;
    short LE;
    float FN;
};
int main(){
    std::ifstream f("files.zip", std::ios::binary);
    HEADER header;
    f.read((char *)&header, sizeof(header));
    std::cout<<header.sign;
    f.close();
    return 0;
}
*/
/*3. Протабулировать функцию. Начальную и финальную точки, шаг, параметр Ч
        считывать из файла in.txt. Результат записывать в текстовый файл out.txt. Формат
            записи данных:
    x0, y(x0)
    x1, y(x1)
    x2, y(x2)
    и т.д.
    b. 𝑦 = 1/𝑥 + 1/2𝑥 + 1/3𝑥 + ⋯ + 1/(Ч 𝑋)*/

/*

int main() {
    std::ifstream in("in.txt");
    std::ofstream out("out.txt");
    if(!in.is_open() or !out.is_open()){
        std::cout << "Error. Unable to open file!";
        return 0;
    }


    float x0, xn, step, c;
    in >> x0 >> xn >> step >> c;

    for (float x = x0; x <= xn; x += step) {
        float y = 0;
        for (int i = 1; i <= c; i++) {
            y += 1 / (i * x);
        }
        out << x << ", " << y << std::endl;
    }

    in.close();
    out.close();

    return 0;

}
*/
/*5. Пользователь вводит данные о студентах: Фамилия, Средняя оценка, Курс.
    Организовать запись данных из массива структур в файл в следующем формате: 1
    строка Фамилия, 2 строка Средняя оценка, 3 строка Курс. Остальные строки
    повторяют тройками эти данные для других студентов. Организовать переменные
        для хранения информации.
*/
/*
struct Student {
    std::string surname;
    double average_grade;
    int course;
};

int main() {
    int n;
    std::cout << "Enter the number of students: ";
    std::cin >> n;

    Student* students = new Student[n];

    for (int i = 0; i < n; i++) {
        std::cout << "Enter student's surname: ";
        std::cin >> students[i].surname;
        std::cout << "Enter student's average grade: ";
        std::cin >> students[i].average_grade;
        std::cout << "Enter student's course: ";
        std::cin >> students[i].course;
    }

    std::ofstream out("students.txt");

    for (int i = 0; i < n; i++) {
        out << students[i].surname << std::endl;
        out << students[i].average_grade << std::endl;
        out << students[i].course << std::endl;
    }

    delete[] students;

    return 0;
}
*/
