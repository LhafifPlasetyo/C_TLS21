#include <iostream>

using namespace std;

int main ()
{
    int bangun_ruang, l, r, r2;
    float m, inersia;
    string sumbu_putar, jenis_benda;
cout<<"[Kalkulator Momen Inersia]\n\n\n";
cout<<"Pilihan bangun ruang\n\n";
cout<<"Batang Homogen:-----1\nSilinder Berongga:--2\nSilinder Pejal:-----3\nBola Pejal:---------4\nBola Berongga:------5\nLempeng Tipis:------6";
cout<<"\nPilih Bangun Ruang: (1/2/3/....)\nbangun ruang: ";
cin>>bangun_ruang;

    if(bangun_ruang==1){
        cout<<"\n\nBenda berbentuk Batang Homogen"<<endl;
        cout<<"Letak sumbu putar di....(pusat/ujung)"<<endl;
        cin>> sumbu_putar;
        cout<<"Masukkan massa: ";
        cin>> m;
        cout<<"Masukkan panjang: ";
        cin>> l;

        if (sumbu_putar=="pusat"){
            inersia=m * l * l / 12;
            }
            else if (sumbu_putar == "ujung"){
                inersia=m*l*l/3;
                }
                else {
                    cout<<"Input sumbu putar salah";
                }
    }
    if (bangun_ruang==2){
        cout<<"\n\nBenda berbentuk Silinder Berongga"<<endl;
        cout<<"Silinder berjenis....(tebal/tipis)"<<endl;
        cin>>jenis_benda;

        if(jenis_benda=="tipis"){
            cout<<"Masukkan massa: ";
            cin>>m;
            cout<<"Masukkan jari-jari: ";
            cin>>r;

            inersia= m*r*r;
            }
            else if(jenis_benda=="tebal"){
                cout<<"Masukkan massa: ";
                cin>>m;
                cout<<"Masukkan jari-jari dalam: ";
                cin>>r;
                cout<<"Masukkan jari-jari luar: ";
                cin>>r2;
                inersia = (m *(r*r + r2*r2))/2;
                }
                else {
                    cout<<"Input jenis benda salah";
                    }
    }
    if (bangun_ruang==3){
        cout<<"\n\nBenda berbentuk Silinder Pejal"<<endl;
        cout<<"Letak sumbu putar di....(pusat/sumbu)"<<endl;
        cin>> sumbu_putar;
        cout<<"Masukkan massa: ";
        cin>> m;
        cout<< "Masukkan jari jari: ";
        cin>>r;
        cout<<"Masukkan panjang (jika tidak ada isi 0): ";
        cin>> l;

        if(sumbu_putar=="sumbu"){
            inersia=(m*r*r)/2;
            }
            else if(sumbu_putar=="pusat"){
                inersia =(m*r*r)/4 + (m*l*l)/12;
                }
                else {
                    cout<<"Input sumbu putar salah";
                    }
    }

    if (bangun_ruang==4){
        cout<<"\n\nBenda berbentuk Bola Pejal"<<endl;
        cout<<"Letak sumbu putar di....(pusat/ujung)"<<endl;
        cin>> sumbu_putar;
        cout<<"Masukkan massa: ";
        cin>> m;
        cout<<"Masukkan jari-jari: ";
        cin>> r;

        if(sumbu_putar=="pusat"){
            inersia=(m*r*r*2)/5;
            }
            else if(sumbu_putar=="ujung"){
                inersia=(m*r*r*7)/5;
                }
                else {
                    cout<<"Input sumbu putar salah";
                    }
    }
    if (bangun_ruang==5){
        cout<<"\n\nBenda berbentuk Bola Berongga"<<endl;
        cout<<"Masukkan massa: ";
        cin>> m;
        cout<<"Masukkan jari-jari: ";
        cin>> r;
        inersia=(m*r*r*2)/3;
    }
    if(bangun_ruang==6){
        float a,b;
        cout<<"\n\nBenda berbentuk Lempeng Tipis"<<endl;
        cout<<"Letak sumbu putar di....(pusat/ujung)"<<endl;
        cin>> sumbu_putar;
        cout<<"Masukkan massa: ";
        cin>> m;
        cout<<"Masukkan panjang: ";
        cin>> a;
        cout<<"Masukkan lebar (jika tidak ada isi 0): ";
        cin>> b;
        if(sumbu_putar=="pusat"){
            inersia= m*(a*a+b*b)/12;
            }
            else if(sumbu_putar=="ujung"){
                inersia= m*a*a;
                }
                else {
                    cout<<"Input sumbu putar salah";
                    }
    }

cout<<"\nMomen inersia dari benda adalah "<<inersia<<endl;
return 0;

}
