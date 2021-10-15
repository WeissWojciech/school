#include <iostream>

using namespace std;

struct Date
{
    unsigned short int dd, mm, yy;
};



class Worker{
public:
    
    unsigned short int id;
    string name, surname;
    Date dateBirthday

    void getData();

    Worker(string s_name, string s_surname, Date s_data, unsigned short int s_id) {
        id = s_id;
        name = s_name;
        surname = s_surname;
        dateBirthday = s_data;
    };
};



void Worker::getData() {
    cout << "id: " <<id << "\nImię i nazwisko: " <<name <<
        " " <<surname << "\nData urodzenia: " <<datebirthday.dd << "-" <<datebirthday.mm << "-" <<datebirthday.yy;
};

int main()
{
    Worker worker("Jnausz", "Nowak", { 15,93,2937 }, 7467);

    setlocale(LC_CTYPE, "polish");
    Worker* wsk;
    wsk = &worker;
    cout << wsk->name << endl;

    wsk->getData();


}
