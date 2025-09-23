#include <iostream>
#include <string>

struct Car {
    std::string brand;
    std::string model;
    int year;
};

Car makeCar (std::string brand, std::string model, int year){
    Car newCar;
    newCar.brand = brand; 
    newCar.model = model; 
    newCar.year = year; 
    return newCar;
}

int main (){
    Car myCar = makeCar ("Toyota","Corolla", 2015);
    std::cout << "Year: " << myCar.year << " " << myCar.brand << " " << myCar.model << std::endl;

    return 0;
}