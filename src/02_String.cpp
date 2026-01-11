#include<iostream>
using namespace std;

int main() {
    string s1 = "hello asif";
    string s2;

    cout << s1 << endl;
    cout << "enter second string :";
    getline(cin,s2);
    cout << s2;
    return 0;
}