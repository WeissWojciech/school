#include <iostream>

using namespace std;

struct Date {
    unsigned short int d, m, rrrr;
};

struct Student {
    string name, surname;
    unsigned int id;
    Date dateBirthday;
    unsigned short int gradeInformatics[5];
};
int main()
{
    setlocale(LC_CTYPE, "polish");


    Student kowalski{ "Janusz","Nowak",1000,{17,9,2021} };
    //cout << kowalski.id;
    cout << "Dane pracownika:\n" << "Imię i nazwisko: " << kowalski.name << kowalski.surname
        << "\nIdentyfikator studenta:" << kowalski.id << "\ndata urodzenia:"
        << kowalski.dateBirthday.d << "-" << kowalski.dateBirthday.m << "-" << kowalski.dateBirthday.rrrr
        << "\nOceny studenta i informatyki:\n";
    kowalski.gradeInformatics[0] = 5;
    kowalski.gradeInformatics[1] = 5;
    kowalski.gradeInformatics[2] = 3;
    kowalski.gradeInformatics[3] = 2;

    cout << "Ocena 1=" << kowalski.gradeInformatics[0] << endl;
    cout << "Ocena 2=" << kowalski.gradeInformatics[1] << endl;
    cout << "Ocena 3=" << kowalski.gradeInformatics[2] << endl;
    cout << "Ocena 4=" << kowalski.gradeInformatics[3] << endl;


    for (unsigned int i = 0; i <= 4; i++) {
        cout << i + 1 << "- ocena:" << kowalski.gradeInformatics[i] << endl;
    }
    return 0;
}