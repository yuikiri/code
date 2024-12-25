#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int start,end;
    cout<<"nhap vao start : ";
    cin>>start;
    cout<<"nhap vao end : ";
    cin>>end;
    if(start > end){
        int tmp = start;
        start = end;
        end = tmp;
    }
    for(int number = start; number <= end; number++){
        cout<<setw(5)<<number;
    }
    cout<<"\ncac so nguyen to co trong day tren la : ";
    for(int number = start; number <= end; number++){
        int flag = 1;
        if(number>=2){
            for(int i = 2; i < number; i++){
                if(number % i == 0){
                    flag = 0;
                    break;
                }
            }
            if(flag == 1){
                cout<<setw(5)<<number;
            }
        }
    }
    return 0;
}
