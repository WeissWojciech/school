#include <iostream>

using namespace std;

class Animal{
	public:
		string name, breed;
		float weight, height;
		void funcPublicAnimal(){
			cout<<"funkcja publiczna klasy animal"<<endl;
		}
		
		void setVaccination(bool pVaccination){
			vaccination=pVaccination;
		}
		
		bool getVaccination(){
			return vaccination;
		}
		
		void voice()
		
	private:
		bool vaccination;
};




class Dog: public Animal{
	public:
		void aport(){
			cout<<"aportowanie"<<endl;
		}
};

int main(){
	setlocale(LC_CTYPE,"polish");
	
	Animal zwierze;
	zwierze.funcPublicAnimal();
	zwierze.setVaccination(1); 
	Dog burek;
	burek.funcPublicAnimal();
	burek.aport();
	burek.setVaccination(true);
	cout<<"szczepienia: "<<burek.getVaccination();
	return 0;
}
