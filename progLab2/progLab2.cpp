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
        cout << "�� ��� �����? ";
        cin >> str[0];
        cout << "������ ����, " << str[0] << "!\n";
        break;

    case 2:
        cout << "����i�� �����:\n";
        cin >> str[0];
        cout << str[0] << endl;
        break;

    case 3:
        cout << "A = ";
        cin >> a;
        cout << "B = ";
        cin >> b;
        cout << "���i �����:\nA = " << a << "; B = " << b << endl;
        temp = a;
        a = b;
        b = temp;
        cout << "�i��� ���i��:\nA = " << a << "; B = " << b << endl;
        break;

    case 4:
        cout << "A = ";
        cin >> a;
        cout << "B = ";
        cin >> b;
        cout << "C = ";
        cin >> c;
        cout << "���i �����:\nA = " << a << "; B = " << b << "; C = " << c << endl;
        temp = a;
        a = c;
        c = b;
        b = temp;
        cout << "�i��� ���i��:\nA = " << a << "; B = " << b << "; C = " << c << endl;
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
        cout << "���i �����:\nA = " << a << "; B = " << b << "; C = " << c << "; D = " << d << endl;
        temp = a;
        a = d;
        d = c;
        c = b;
        b = temp;
        cout << "�i��� ���i��:\nA = " << a << "; B = " << b << "; C = " << c << "; D = " << d << endl;
        break;

    case 6:
        cout << "�� ��� �����? ";
        cin >> str[0];
        cout << "��i���� ��� ���i�? ";
        cin >> a;
        cout << "�� �� ���������? ";
        cin >> str[1];

        cout << "������ ����, " << str[0] << "!\n";
        cout << "�i���� ���, ��� ������ " << a << ", � �� ��� ������ �i���� � ����'������!\n";
        cout << str[1] << " ���� �������� ����!\n";
        break;

    case 7:
        cout << "��i�����? ";
        cin >> str[0];
        cout << "I�'�? ";
        cin >> str[1];
        cout << "�� �������i? ";
        cin >> str[2];
        cout << "�����? ";
        cin >> str[3];
        cout << "���� ����������? ";
        cin >> str[4];
        cout << "������? ";
        cin >> str[5];
        cout << "����� ��������? ";
        cin >> str[6];
        cout << "�i��� ��������? ";
        cin >> str[7];
        cout << "�����? ";
        cin >> str[8];
        cout << "����i? ";
        cin >> str[9];

        cout << "��i����� : " << setw(12) << str[0] << "\tI�'� : " << setw(16) << str[1] << "\t�� �������i : " << setw(12) << str[2] << endl;
        cout << "����� �������� : " << setw(28) << str[6] << "\t����i : " << setw(18) << str[9] << endl;
        cout << "�i��� �������� : " << setw(28) << str[7] << "\t����� : " << setw(18) << str[8] << endl;
        cout << "���� ���������� : " << setw(27) << str[4] << "\t����� : " << setw(18) << str[3] << endl;
        cout << "������ : " << setw(36) << str[5] << endl;
        break;

    case 8:
        cout << "��������� ����� � �� ��������� �i�: (((x * 2) + 6x) - 8) / 4\n";
        cin >> a;
        a *= 4; a += 8; a /= 8;
        cout << "���� ����� : " << a << endl;
        break;
    }
}