#include <iostream>
#include <string>
using namespace std;

class View
{
    public:
        void printMainMenu();
        void printMainMenu(string fileName);
        void printBinaryMenu();
        void printCurrencyMenu();
        void printWeightLiftMenu();
};

int main(){
    View view;
    view.printMainMenu();
    

    
    //user input
    return 0;
}


void View::printMainMenu(){
    
    int input;
    
    cout << "\t\033[1;44m\t\t\t\t\t\t\t\t \033[0m" << endl;
    cout << "\t\033[1;44m \033[0m\033[33;1m\t\t\t T O O L\tB O X \t\t\t\033[1;44m \033[0m" << endl; 
    cout << "\t\033[1;44m\t\t\t\t\t\t\t\t \033[0m" << endl << endl;
    //start of options
    cout << "\t\033[1;44m\t\t\t\t\t\t\t\t \033[0m" << endl;
    cout << "\t\033[1;44m \033[0m\t\033[1;33m1) Binary Conversion\t\033[0m\t\t\t        \033[1;44m \033[0m" << endl;
    cout << "\t\033[1;44m \033[0m\t\033[33;1m2) Currency Conversion\t\033[0m\t\t\t        \033[1;44m \033[0m" << endl;
    cout << "\t\033[1;44m \033[0m\t\033[1;33m3) Weight Lifting Management System\t\033[0m\t        \033[1;44m \033[0m" << endl;
cout << "\t\033[1;44m\t\t\t\t\t\t\t\t \033[0m\n\n" << endl;
    
    cout << "Enter an option [1-3]: ";
    cin >> input;
    cout << endl;
    
    switch(input){
        case 1:
            printBinaryMenu();
            break;
        case 2:
            printCurrencyMenu();
            break;
        case 3:
            printWeightLiftMenu();
            break;
        default:
            cout << "\033[31;1mValue entered is invalid, please try again\033[0m\n" << endl;
            printMainMenu();
    }
}

void View::printBinaryMenu(){
        cout << "printBinaryMenu" << endl;
}

void View::printCurrencyMenu(){
        cout << "printCurrencyMenu" << endl;
}

void View::printWeightLiftMenu(){
        cout << "printWeightLiftMenu" << endl;
}
