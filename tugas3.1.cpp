#include<iostream>
using namespace std;
int main(){
    int angka1;
    int angka2;
    int angka3;

    cout<<"Masukkan angka pertama=";
    cin>>angka1;
    cout<<"Masukkan angka kedua=";
    cin>>angka2;
    cout<<"Masukkan angka ketiga=";
    cin>>angka3;

    if(angka1>angka2&&angka3){
        cout<<"angka terbesar="<<angka1;
    }else if (angka2>angka3&&angka1){
        cout<<"angka terbesar="<<angka2;
    }else if (angka3>angka1&&angka2){
        cout<<"angka terbesar="<<angka3;
    }
return 0;
}
