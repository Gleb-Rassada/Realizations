//Реализация switch

#include <iostream>
using namespace std;

int CorrectNumber(string x) {
    int n = 0;
    while (true)
    {
        cout << x;
        cin >> n;
        if (!cin)
        {
            cout << "Ошибка ввода!\n";
            cin.clear();
            while (cin.get() != '\n');
        }
        else break;
    }
    return n;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    int n = CorrectNumber("Введите 1 или 2 или 3:\n");

    switch (n) {
    case 1:
        cout << "Поздравляю у вас девочка";
        break;
    case 2:
        cout << "Поздравляю у вас мальчик";
        break;
    case 3:
        cout << "Поздравляю у вас ATTACK HELICOPTER!!!";
    default:
        cout << "nothing";
    }

}
