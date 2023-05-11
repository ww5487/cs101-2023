#include <iostream>

using namespace std;

class Fueltank{
private:
    int m_FueltankCapacity;
    int m_Gas_grade;
public:
    Fueltank(int FueltankCapacity = 3000, int Gas = 98) {
        m_FueltankCapacity = FueltankCapacity; 
        m_Gas_grade = Gas; 
    };
    int fuelUp(int v, int gas) {
    	cout << "fuel_up: " <<v<< " Gas_grade: " << gas << endl;
    };
    int set_Gas_grade(int Gas_grade) {
        m_Gas_grade = Gas_grade; 
        cout<< "Set Gas_grade = " << Gas_grade << endl;
    }; 
    int get_Gas_grade() {
        return m_Gas_grade; 
    };
};

class Car{
private:
    Fueltank m_Fueltank;
	int m_MaxSeating;
	int m_price;
	int m_base;  
	string m_brand;
    string m_model;
    int m_year;
    void m_updatePrice(int base=500000) {
        m_price = m_MaxSeating * base; 
    }
public:
    Car(string x, string y, int z, int s){
        m_brand = x;
        m_model = y;
        m_year = z;
        m_MaxSeating = s;
    }
    int get_m_MaxSeating(){
        return m_MaxSeating;
    }
    int get_Price() {
        return m_price; 
    }
    void set_base(int n) {
        m_base = n; 
    }
    string get_brand() {
        return m_brand; 
    }
    int get_Gas_grade() {
        return m_Fueltank.get_Gas_grade();
    }
    int set_Gas_grade(int gas = 98) {
        return m_Fueltank.set_Gas_grade(gas); 
    }
    int fuel_up(int v, int gas = 98) {
        return m_Fueltank.fuelUp(v, gas);
    }
};


class AUDI_car : public Car{
private:
    string m_driveMode;

public:
    AUDI_car(string y, int z, int s) : Car("AUDI", y, z, s){
        cout << "Constructing AUDI_car\n";
        m_driveMode = "Front-wheel";
    }

    string get_driveMode(){
        return m_driveMode;
    }
};


int main()
{
    AUDI_car car_2("A1", 2021, 2);
    cout << car_2.get_brand() << " : Gas_grade = " << car_2.get_Gas_grade() << endl;
    car_2.set_Gas_grade(95); 
    cout << car_2.get_brand() << " : Gas_grade = " << car_2.get_Gas_grade() << endl;
    car_2.fuel_up(300, 95);  
    
	return 0;
};
