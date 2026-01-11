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
    long double dd1 = 3.1546895341668585;

    cout << "Floating values" << endl;
    cout << ff << " " << pi << " " << dd << " " << dd1 << endl << endl;
    
    //Character
    char ch = 'A';
    signed ch1 = '-10';
    unsigned char ch2 = '255';
    wchar_t wc = L'अ';
    wchar_t name[] = L"नमस्ते";

    cout << "Characters values" << endl;
    cout << ch << " " << ch1 << " " << ch2 << " " << wc << " " << name << endl << endl;

    //Boolean
    bool invalid = true;

    cout << "Boolean values" << endl;
    cout << invalid;

    return 0;
}
