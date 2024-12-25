#include <iostream>
#include <cctype>
using namespace std;
void method_1();
void method_2();
//
int main()
{
    method_1();
    cout<<endl;
    method_2();
    return 0;
}
//
void method_1()
{
    char ch;
    while (true) {
        cout << "nhap vao ki tu : ";
        cin >> ch;
        cin.ignore();
        if (islower(ch)) {
            ch = toupper(ch);
            cout << "\nki tu viet hoa la : " << ch << endl;
            break;
        } else if (isupper(ch)) {
            cout << "\nki tu viet hoa la : " << ch << endl;
            break;
        } else {
            cout << "\nki tu khong hop le, vui long nhap lai.\n";
        }
    }
}
//
void method_2()
{
    char ch;
retry:
    cout<<"nhap vao ki tu : ";
    cin>>ch;
    cin.ignore();
    if(ch >= 97 && ch <= 122){
        ch -= 32;
    }else if(ch >= 65 && ch <= 90){
        //
    }else{
        cout<<"\nki tu khong hop le, vui long nhap lai.\n"<<endl;
        goto retry;
    }
    cout<<"\nki tu viet hoa la : "<<ch;
}
