#include<iostream> //specific header files
#include<bits/stdc++.h> // for all c++ header files

using namespace std;

int main() {

    //data types and variables
    //Integer
    short a = 10;
    int b = 1000;
    long c = 154000000;
    short int d = 56;
    int short d1 = 65;
    // short short int d2 = 64656; wrong
    long int e = 654646;
    int long f = 89556985;
    long long int g = 98979898999;
    int long long h = 6549864;
    // int int long h1 = 6456546654; wrong
    signed int h2 = -1543;
    unsigned int h3 = 4654;

    cout << "Integers values" << endl;
    cout << a << " " << b << " " << c << " " << d << " " << d1 << " " << e << " " << f << " " << g << endl;
    cout <<  h << " " << h2 << " " << h3 << endl << endl;

    //Floating point
    float ff = 658.88;
    float pi = 3.145;

    double dd = 654.64656446;
    double decimal2 = 3.1415926535;
    long double dd1 = 3.1546895341668585;

    cout << "Floating values" << endl;
    cout << ff << " " << pi << " " << dd << " " << dd1 << endl;
    cout << "Float with precision: " << fixed << setprecision(2) << decimal2 << endl << endl;
    
    //Character
    char ch = 'A';
    signed ch1 = '-10';
    unsigned char ch2 = '255';
    wchar_t wc = L'अ';
    wchar_t name[] = L"नमस्ते";
    wchar_t wideChar = L'Ω'; // Unicode character

    cout << "Characters values" << endl;
    cout << ch << " " << ch1 << " " << ch2 << " " << wc << " " << name << wideChar << endl << endl;

    //Boolean
    bool invalid = true;

    cout << "Boolean values" << endl;
    cout << invalid;

    //Operators
    int a1 = 10, b1 = 3;

    cout << "Addition: " << a1 + b1 << endl;
    cout << "Subtraction: " << a1 - b1 << endl;
    cout << "Multiplication: " << a1 * b1 << endl;
    cout << "Division (int): " << a1 / b1 << endl; // Tricky
    cout << "Modulo: " << a1 % b1 << endl;


    cout << "Relational: " << (a1 > b1) << endl;
    cout << "Logical AND: ";

    bool aa = true, bb = false;

    cout << (aa && bb) << endl;  // AND: 0 (both must be true)
    cout << (aa || bb) << endl;  // OR: 1 (at least one true)
    cout << (!aa) << endl;      // NOT: 0 (opposite)

    //control statement

    int age = 20;
    bool hasLicence = true;

    if(age>=18)
    {
        if(hasLicence){
            cout << "You can drive! "<< endl;
        }
        else{
            cout << "You need a Licence! " << endl;
        }
    }
    else{
        cout << "You are too Young to drive wait till you turn 18!" << endl << endl << endl;
    }

    int day = 3;
    switch(day)
    {
        case 1 : 
                cout << "Monday" << endl;
                break;
        case 2 :
                cout << "Tuesday" << endl;
                break;
        case 3 :
                cout << "Wednesday" << endl;
                // break;
        case 4 :
                cout << "Thursday" << endl;
        case 5 : 
                cout << "Friday" << endl;
                break;
        case 6 :
        case 7 : 
                cout << "Weekend" << endl;
                break;
        default :
                cout << "Invalid day" << endl;
                break;
    }

    // Loops

    int i = 5;
    for(int j=5; j>=0; --j){
        cout << i << " * " << j << " = " << (i * j) << endl;
    }

    string password;
    while(password != "secret")
    {
        cout << "please enter password : " << endl;
        cin >> password;
    }
    cout << "Access granted!" << endl << endl;

    int num;
    do {
        cout << "Enter a positive number : ";
        cin >> num;
    }while(num <= 0);
    cout << "Positive Number entered" << endl;

    //break and continue
    int num1 = 4;
    for(int i=1; i<=7; i++)
    {
        if(i == num1 )
        {
            cout << " i = " <<  i;
            break;
        }
        else continue;
    }

    return 0;
}
