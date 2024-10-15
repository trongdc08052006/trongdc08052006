#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    int choice;
    cout << " MENU \n";
    cout << "1. tinh dien tich hinh tron \n";
    cout << "2. tinh dien tich hinh chu nhat \n";
    cout << "3.tinh dien tich hinh vuong \n";
    cout << "4. tinh dien tich hinh tam giac \n";
    cout << "ghi lua chon cua ban (1-4): ";
    cin >> choice;

    if (choice == 1) {
        double radius;
        cout << "Nhap dien tich hinh tron : ";
        cin >> radius;
        cout << "Dien tich hinh tron : " << M_PI * radius * radius << endl;
    } 
    else if (choice == 2) {
        double length, width;
        cout << "Nhap chieu dai va chieu rong hinh chu nhat : ";
        cin >> length >> width;
        cout << "Dien tich hinh chu nhat : " << length * width << endl;
    } 
    else if (choice == 3) {
        double side;
        cout << "Nhap canh hinh vuong : ";
        cin >> side;
        cout << "Dien tich hinh vuong : " << side * side << endl;
    } 
    else if (choice == 4) {
        double base, height;
        cout << "Nhap do dai day va chieu cao hinh tam giac : ";
        cin >> base >> height;
        cout << "Dien tich hinh tam giAC : " << 0.5 * base * height << endl;
    } 
    else {
        cout << "lua chon khong hop le !" << endl;
    }

    return 0;
}
