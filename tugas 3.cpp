#include<iostream>
using namespace std;
int main(){
int nilai;
cout<<"Masukkan Nilai:";
cin>>nilai;

if (nilai>90){
cout<<"selamat anda mendapatkan nilai A+"<<endl;
}else if(nilai >=80){
cout<<"selamat anda mendapatkan nilai B"<<endl;
}else if(nilai >=70){
cout<<"selamat anda mendapatkan nilai C"<<endl;
}else if(nilai >=60){
cout<<"selamat anda mendapatkan nilai D"<<endl;
}
return 0;
}
