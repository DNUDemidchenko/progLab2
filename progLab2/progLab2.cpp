#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    cout << "1 - HELLO2\n2 - PARROT\n3 - SWAP\n4 - SWAP3\n5 - SWAP4\n6 - HELLO3\n7 - ANKETA2\n8 - GUESS\n";
    int in;
    cin >> in;

    string str[10];
    double a, b, c, d, temp;

    switch (in)
    {
    case 1:
        cout << "Як Вас звуть? ";
        cin >> str[0];
        cout << "Добрий день, " << str[0] << "!\n";
        break;

    case 2:
        cout << "Введiть рядок:\n";
        cin >> str[0];
        cout << str[0] << endl;
        break;

    case 3:
        cout << "A = ";
        cin >> a;
        cout << "B = ";
        cin >> b;
        cout << "Вашi числа:\nA = " << a << "; B = " << b << endl;
        temp = a;
        a = b;
        b = temp;
        cout << "Пiсля замiни:\nA = " << a << "; B = " << b << endl;
        break;

    case 4:
        cout << "A = ";
        cin >> a;
        cout << "B = ";
        cin >> b;
        cout << "C = ";
        cin >> c;
        cout << "Вашi числа:\nA = " << a << "; B = " << b << "; C = " << c << endl;
        temp = a;
        a = c;
        c = b;
        b = temp;
        cout << "Пiсля замiни:\nA = " << a << "; B = " << b << "; C = " << c << endl;
        break;

    case 5:
        cout << "A = ";
        cin >> a;
        cout << "B = ";
        cin >> b;
        cout << "C = ";
        cin >> c;
        cout << "D = ";
        cin >> d;
        cout << "Вашi числа:\nA = " << a << "; B = " << b << "; C = " << c << "; D = " << d << endl;
        temp = a;
        a = d;
        d = c;
        c = b;
        b = temp;
        cout << "Пiсля замiни:\nA = " << a << "; B = " << b << "; C = " << c << "; D = " << d << endl;
        break;

    case 6:
        cout << "Як Вас звуть? ";
        cin >> str[0];
        cout << "Скiльки Вам рокiв? ";
        cin >> a;
        cout << "Де Ви навчаєтеся? ";
        cin >> str[1];

        cout << "Добрий день, " << str[0] << "!\n";
        cout << "Вiтаємо Вас, Вам усього " << a << ", а Ви вже ведете дiалог з комп'ютером!\n";
        cout << str[1] << " буде пишатися Вами!\n";
        break;

    case 7:
        cout << "Прiзвище? ";
        cin >> str[0];
        cout << "Iм'я? ";
        cin >> str[1];
        cout << "По батьковi? ";
        cin >> str[2];
        cout << "Стать? ";
        cin >> str[3];
        cout << "Дата народження? ";
        cin >> str[4];
        cout << "Адреса? ";
        cin >> str[5];
        cout << "Номер телефону? ";
        cin >> str[6];
        cout << "Мiсце навчання? ";
        cin >> str[7];
        cout << "Група? ";
        cin >> str[8];
        cout << "Хоббi? ";
        cin >> str[9];

        cout << "Прiзвище : " << setw(12) << str[0] << "\tIм'я : " << setw(16) << str[1] << "\tПо батьковi : " << setw(12) << str[2] << endl;
        cout << "Номер телефону : " << setw(28) << str[6] << "\tХоббi : " << setw(18) << str[9] << endl;
        cout << "Мiсце навчання : " << setw(28) << str[7] << "\tГрупа : " << setw(18) << str[8] << endl;
        cout << "Дата народження : " << setw(27) << str[4] << "\tСтать : " << setw(18) << str[3] << endl;
        cout << "Адреса : " << setw(36) << str[5] << endl;
        break;

    case 8:
        cout << "Задумайте число х та виконайте дiї: (((x * 2) + 6x) - 8) / 4\n";
        cin >> a;
        a *= 4; a += 8; a /= 8;
        cout << "Ваше число : " << a << endl;
        break;
    }
}