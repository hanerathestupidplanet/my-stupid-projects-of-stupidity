#include<iostream>
#include<stdlib.h> 
#include<cmath>

int main(){
    // Made by Hanera :]
    double number1 = 0;

    double number2 = 0;

    char op = ' ';

    std::cout << "Enter in a number.";

    std::cin >> number1;

    std::cout << "Enter in an operator.";

    std::cin >> op;

    std::cout << "Enter in another number.";

    std::cin >> number2;

    switch(op){
        case '+':
        std::cout << number1 + number2 << "\n";
        break;
        
        case '/':
        std::cout << number1 / number2 << "\n";
        break;

        case '-':
        std::cout << number1 - number2 << "\n";
        break;
        
        case '*':
        std::cout << number1 * number2 << "\n";
        break;
        
        case 'x':
        std::cout << number1 * number2 << "\n";
        break;

        case '^':
        std::cout << pow(number1, number2) << "\n";
        break;
        
        default:
        std::cout << "Enter in a valid operator (+, -, *, /), " << "not " << op << "\n";
        break;
    }


    
    system("PAUSE");
    return 0;
}