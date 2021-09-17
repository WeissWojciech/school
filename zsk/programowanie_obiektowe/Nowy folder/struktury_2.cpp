#include <iostream>

using namespace std;

struct Date {
    unsigned short int dd, mm, rrrr;
};
class Worker{
public:
    unsigned int id{};
    string name{}, surname{};
    Date dateBirthday{};
    void showAllDate();
    void setDate(unsigned int x, string name,string surname,unsigned short int dd, unsigned short int mm, unsigned short int rrrr);
};

void Worker::showAllDate() {
    cout << "dane pracownika:\nIdentyfikator:" << id;
    cout << "\nimię" << name << endl;
    cout << "\nnazwisko" << surname << endl;
    cout << "\nData urodzenia: " << dateBirthday.dd << "-" << dateBirthday.mm << "-" << dateBirthday.rrrr;
}
void Worker::setDate(unsigned int x, string setName, string setSurname, unsigned short int setDay, unsigned short int setMonth, unsigned short int setYear) {
    id = x;
    name = setName;
    surname = setSurname;
    dateBirthday.dd = setDay;
    dateBirthday.mm = setMonth;
    dateBirthday.rrrr = setYear;
}
int main()
{
    setlocale(LC_CTYPE, "polish");
    Worker kowalski;
    kowalski.showAllDate();
    kowalski.setDate("Jan", "Kowalski", 17, 9, 2021);

    return 0;
}

