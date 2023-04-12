#include <iostream>
using namespace std;

int main () {
	
    int op;
    float num1, num2;
	cout << "1.Tambah\n";
	cout << "2.Pengurang\n";
	cout << "3.Perkalian\n";
	cout << "4.pembagian\n";
    cout << "Enter operator (1.2.3.4): ";cin >> op;
    

    if( op == 1) {
	cout << "Enter two numbers: ";
    cin >> num1; cout << "+"; cin >> num2;
	cout <<"Jumlah : "<<num1+num2;

    }
	else if(op == 2) {
    cout << "Enter two numbers: ";
    cin >> num1; cout << "-"; cin >> num2;
	cout <<"Jumlah : "<<num1-num2;

    } 
	else if(op == 3) {
    cout << "Enter two numbers: ";
    cin >> num1; cout << "X"; cin >> num2;
	cout <<"Jumlah : "<<num1*num2;

    }
	else if(op == 4) {
    cout << "Enter two numbers: ";
    cin >> num1; cout << ":"; cin >> num2;
	cout <<"Jumlah : "<<num1/num2;

    }
   
	return 0;

}

