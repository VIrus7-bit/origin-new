#include <iostream>
#include <string>

class Counter
{
private:
    int a = 0;
    char b;
    char h;

public:

    int setSummator()
    {
        char s[5];

        std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
        std::cin >> s;

        char yes[5] = { 'да' };

        if (s != yes) {

            std::cout << "Введите начальное значения счётчика: ";
            std::cin >> a;
        }
        else {
            a = 1;
        }

        do {
            std::cout << "Введите команду ('+' , '-' , '=' или 'x'): ";
            std::cin >> b;

            switch (b) {

            case '+':
                a++;
                break;
            case '-':
                a--;
                break;
            case '=':
                std::cout << a << std::endl;
                break;
            case 'x':
                std::cout << "До свидания!";
                break;
            }
        } while (b != 'x');
        return 0;
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");

    Counter Counter{};
    Counter.setSummator();

}