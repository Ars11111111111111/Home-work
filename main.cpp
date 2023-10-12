//Строки
#include <iostream>


//Составить алгоритм, находящий, сколько слов в тексте состоит из 6 символов.
/*
int main()
{
    int p=0,k=0;
    std::string a;
    std::cout << "Введите строку из слов:" << std::endl;
    std::getline(std::cin, a);
    a = a + ' ';
    p = 0;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] != ' ')
            k+=1;
        else {
            if (k == 6)
                p+=1;
            k=0;
        }
    }
    std::cout << "Количество слов длины 6: " << p << std::endl;

    return 0;
}
*/
//Составить алгоритм, находящий самое длинное слово.
/*
int main()
{
    int k=0,id=0,max=0;
    std::string a;
    std::cout << "Введите строку из слов:" << std::endl;
    std::getline(std::cin, a);
    a = a + ' ';
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] != ' ')
            k+=1;
        if (a[i] == ' ' or i==a.length()){
            if(k > max){
                max=k;
                id=i-k;
            }
            k=0;
        }
    }
    for (int j=id;j < id+max;j++)
        std::cout  << a[j];

}
*/
//В данной строке найти количество цифр.
/*
int main()
{
    int k=0;
    std::string a;
    std::cout << "Введите строку из слов:" << std::endl;
    std::getline(std::cin, a);
    a = a + ' ';
    for (int i=0;i<a.length(); i++){
        if(a[i]>='0' and a[i]<='9')
            k+=1;
    }
    std::cout<<k;
}
*/
//Дан текст. Заменить все цифры соответствующими словами.
/*
int main()
{
    std::string result = "";
    std::string str;
    std::getline(std::cin, str);
    for (int i = 0; i < str.length(); i++) {
        if (str[i] >='0' and str[i]<='9') {
            switch (str[i]) {
                case '0':
                    result += "zero";
                    break;
                case '1':
                    result += "one";
                    break;
                case '2':
                    result += "two";
                    break;
                case '3':
                    result += "three";
                    break;
                case '4':
                    result += "four";
                    break;
                case '5':
                    result += "five";
                    break;
                case '6':
                    result += "six";
                    break;
                case '7':
                    result += "seven";
                    break;
                case '8':
                    result += "eight";
                    break;
                case '9':
                    result += "nine";
                    break;
            }
        } else {
            result += str[i];
            }
    }
    std::cout<<result;
}
*/
