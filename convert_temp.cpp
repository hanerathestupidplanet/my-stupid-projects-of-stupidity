#include<iostream>

int main(){
    // THIS IS A WINDOWS ONLY APPLICATION.
    // Made by Hanera :]
    system("chcp 65001");
    system("cls");
    double temp = 0;
    char temptype = ' ';
    std::cout << "Convert to °C or °F: ";
    std::cin >> temptype;

    std::cout << "Enter in a temprature: ";
    std::cin >> temp;

    switch(temptype){
        case 'F':
        std::cout << "The converted temprature is: " << (temp * 9 / 5) + 32 << "°F" << "\n";
        break;
        case 'C':
        std::cout << "The converted temprature is: " << (temp - 32) * 5 / 9 << "°C" << "\n";
        break;
        case 'f':
        std::cout << "The converted temprature is: " << (temp * 9 / 5) + 32 << "°F" << "\n";
        break;
        case 'c':
        std::cout << "The converted temprature is: " <<  (temp - 32) * 5 / 9 << "°C" << "\n";
        break;
        default:
        std::cout << "Not a valid temprature type." << "\n";
    }
    system("PAUSE");
    return 0;
}