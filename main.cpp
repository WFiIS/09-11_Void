#include <iostream>

using namespace std;

void linia(int a);
string DecToBin(int number);
string DecToHex(int number);


int main()
{
    char proces;

    do {
        int a;

        linia(60);
        cout << "Podaj wartosc do przeliczenia: ";
        cin >> a;
        cout << "Wartosc binarna: " << DecToBin(a) << endl;
        cout << "Wartosc hex: " << DecToHex(a) << endl;
        linia(60);

        cout << "Czy chcesz podac jeszcze jedna liczbe? (T/t) " << endl;
        cin >> proces;
    } while (proces == 't' || proces == 'T');
    return 0;
}

void linia(int a) {
    for (int i = 0; i < a; i++) {
        cout << "X";
    }
    cout << endl;
}

string DecToBin(int number) {
    if (number == 0) return "0";
    if (number == 1) return "1";

    if (number % 2 == 0)
        return DecToBin(number / 2) + "0";
    else
        return DecToBin(number / 2) + "1";
}

string DecToHex(int liczba) {
    if (liczba != 0)
    switch (liczba % 16) {
    case 0:
        return DecToHex(liczba/16) + "0";
    case 1:
        return DecToHex(liczba/16) + "1";
    case 2:
        return DecToHex(liczba/16) + "2";
    case 3:
        return DecToHex(liczba/16) + "3";
    case 4:
        return DecToHex(liczba/16) + "4";
    case 5:
        return DecToHex(liczba/16) + "5";
    case 6:
        return DecToHex(liczba/16) + "6";
    case 7:
        return DecToHex(liczba/16) + "7";
    case 8:
        return DecToHex(liczba/16) + "8";
    case 9:
        return DecToHex(liczba/16) + "9";
    case 10:
        return DecToHex(liczba/16) + "A";
    case 11:
        return DecToHex(liczba/16) + "B";
    case 12:
        return DecToHex(liczba/16) + "C";
    case 13:
        return DecToHex(liczba/16) + "D";
    case 14:
        return DecToHex(liczba/16) + "E";
    case 15:
        return DecToHex(liczba/16) + "F";
    default:
        return "1";
    }
    return "";
}
