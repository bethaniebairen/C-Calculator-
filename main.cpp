/*
 This is a C++ code of a calculator by Bethanie Bairen and
 was coded on 09/22/2024
 */

#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

bool activeCal = true;
int operationChoice;
int firstNumber = NULL;
int secondNumber = NULL;
void addition(){
    int sum = NULL;
    cout << "Enter your first number" << endl;
    cin >> firstNumber;
    cout << "Enter your second number" << endl;
    cin >> secondNumber;
    sum = firstNumber + secondNumber;
    cout << "The result is: " << sum << endl;
    firstNumber = NULL;
    secondNumber = NULL;
    
}
void subtraction(){
    int sum = NULL;
    cout << "Enter your first number" << endl;
    cin >> firstNumber;
    cout << "Enter your second number" << endl;
    cin >> secondNumber;
    sum = firstNumber - secondNumber;
    cout << " The result is: " << sum << endl;
    firstNumber = NULL;
    secondNumber = NULL;
}
void multiplication(){
    int sum = NULL;
    cout << "Enter your first number" << endl;
    cin >> firstNumber;
    cout << "Enter your second number" << endl;
    cin >> secondNumber;
    sum = firstNumber * secondNumber;
    cout << " The result is: " << sum << endl;
    firstNumber = NULL;
    secondNumber = NULL;
    
}
void division(){
    int sum = NULL;
    cout << "Enter your first number" << endl;
    cin >> firstNumber;
    cout << "Enter your second number" << endl;
    cin >> secondNumber;
    sum = firstNumber / secondNumber;
    cout << " The result is: " << sum << endl;
    firstNumber = NULL;
    secondNumber = NULL;
}
void modulusNumber(){
    int sum = NULL;
    cout << "Enter your first number" << endl;
    cin >> firstNumber;
    cout << "Enter your second number" << endl;
    cin >> secondNumber;
    sum = firstNumber % secondNumber;
    cout << " The result is: " << sum << endl;
    firstNumber = NULL;
    secondNumber = NULL;
}
void prime(){
    cout << "Enter your first number" << endl;
    cin >> firstNumber;
    int i = 0;
    if (firstNumber <= 1) {
        cout << "Not Prime"<< endl;
        firstNumber = NULL;
        return;
        }
    for (i = 2; i<firstNumber;i++ ) {
        if (firstNumber % i==0){
            cout << "Not Prime" << endl;
            firstNumber = NULL;
            return;
        }
    }
    cout << "Number is Prime" << endl;
    firstNumber = NULL;
}
void factorial(){
    cout << "Enter your first number" << endl;
    cin >> firstNumber;
    int sum = 1;
        for (int i = 1; i <= firstNumber; i++)
            sum *= i;
    cout << "The result is: " << sum << endl;
    firstNumber = NULL;
        
}
void power(){
    cout << "Enter your base number" << endl;
    cin >> firstNumber;
    cout << "Enter your power number" << endl;
    cin >> secondNumber;
    cout << "The result is: " << pow(firstNumber, secondNumber) << endl;
    firstNumber = NULL;
    secondNumber = NULL;
    
}



void operationList(int choice)
{
    switch (choice) {
        case 1:
            addition();
            return;
        case 2:
            subtraction();
            return;
        case 3:
            multiplication();
            return;
        case 4:
            division();
            return;
        case 5:
            modulusNumber();
            return;
            
        case 6:
            prime();
            return;
        case 7:
            factorial();
            return;
        case 8:
            power();
            return;
            
        case 0:
            cout << "Closing the calculator\n" << endl;
            activeCal = false;
            return;
            
        default:
            cout << "Invalid choice\n" << endl;
            break;
    }
}



int main ()
{
   
    while (activeCal) {
        
    
    cout << "\nCalculator Menu:" << endl;
    cout << "(1) Addition" << endl;
    cout << "(2) Subtraction" << endl;
    cout << "(3) Multiplication" << endl;
    cout << "(4) Division" << endl;
    cout << "(5) Modulus (integers only)" << endl;
    cout << "(6) Test if prime (integers only)" << endl;
    cout << "(7) Factorial (integers only)" << endl;
    cout << "(8) Power" << endl;
    cout << "(0) Exit\n" << endl;
    cout << "Select an operation" << endl;
    cin >> operationChoice;
    operationList(operationChoice);
    }
    return 0;
    
}
