#include <iostream>
#include <limits>
#include <cmath>
using namespace std;

double add(double a, double b){
    return a + b;
}
double subtract(double a, double b){
    return a - b;
}
double divide(double a, double b){
    return a/b;
}
double multiply(double a, double b){
    return a * b;
}
double power(double a, double b){
    return pow(a, b);
}
double squareRoot(double a){
    return sqrt(a);
}
double sine(double degrees){
    double radians = degrees * M_PI/180.0;
    return sin(radians);
}
double cosine(double degrees){
    return cos(degrees * M_PI/180.0);
}
double tangent(double degrees){
    return tan(degrees * M_PI/180.0);
}
double logarithm(double a){
    return log10(a);
}

int main()
{
    double num1;
    double num2;
    char operation;
    char choice = 'Y';
    double answer;

    while(choice == 'Y' || choice == 'y'){
        cout <<"Enter the first number: ";
        cin>>num1;
        if(cin.fail()){
            cout<<"Invalid input.Please enter a number."<<endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            continue;
        }
        cout <<"Enter the second number: ";
        cin>>num2;
        if(cin.fail()){
            cout<<"Invalid input.Please enter a number."<<endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            continue;
        }
        cout <<"Enter the opertaion you want to work with(+,-,/,*,^-power,s-square root, n-sine, c-cosine, t- tan, l-log): ";
        cin>>operation;

        switch(operation){
        case '+':
            answer = add(num1, num2);
            cout<< "Answer: "<<answer<<endl;
            break;
        case '^':
            answer = pow(num1, num2);
            cout<<"Answer: "<<answer<<endl;
            break;
        case '-':
            answer = subtract(num1,num2);
            cout<< "Answer: "<<answer<<endl;
            break;
        case '/':
            if(num2 == 0){
                cout<<"Cannot divide a number by 0!!!!";
            }
            else{
                answer = divide(num1, num2);
                cout<< "answer: "<<answer<<endl;
            }
            break;
        case '*':
            answer = multiply(num1, num2);
            cout<< "answer: "<<answer<<endl;
            break;
        case 's':
            if(num1 < 0){
                cout<<"Cannot calcualte the square root of a negative number."<<endl;}
                else{
                answer = sqrt(num1);
                    cout<< "Answer: " <<answer<<endl;
                }
           break;
        case 'n':
            answer = sine(num1);
            cout<<"Answer: "<<answer<<endl;
            break;
        case 'c':
            answer = cosine(num1);
            cout<<"Answer: "<<answer<<endl;
            break;
        case 't':
            answer = tangent(num1);
            cout<<"Answer; "<<answer<<endl;
            break;
        case 'l':
            if(num1 <= 0){
                cout<<"logarithm requires a positive number."<<endl;
            }
            else{
            answer = logarithm(num1);
            cout<<"answer: "<<answer<<endl;
            }
        default:
            cout<< "INVALID OPERATION!!!!";


    }
        cout <<"Calculate again(Y/N)?: ";
        cin>>choice;
    }

   /* if(operation == '+'){
    answer = num1 + num2;
    cout<<"answer:"<<answer<<endl;
    }
    else if(operation == '-'){
        answer = num1 - num2;
        cout<<"Answer: "<<answer<<endl;
    }
    else if(operation == '/'){
if(num2==0){
cout<<"Cannot divide by zero!"<<endl;
return 1;
        answer = num1/num2;
        cout <<"Answer: " <<answer<<endl;
    }
    else if(operation == '*'){
        answer = num1 * num2;
        cout <<"answer:"<<answer<<endl;
    }
    else
        cout<<"invalid operation!!!"<<endl;
    }*/

    return 0;
}
