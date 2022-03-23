#include<iostream>
using namespace std;

class Ayam{  
    public:
        void Menghitung();
        void Menu();
        void Struk();
        
    private:
        int pesan[50], i=0, a, loop;
        float jumlah;
};

void Ayam::Menu(){
    loop=1;
    cout<<"+-----------------------------+"<<endl;
    cout<<"|             Menu            |"<<endl;
    cout<<"+-----------------------------+"<<endl;
    cout<<"| 1. Ayam Goreng   Rp. 17.000 |"<<endl;
    cout<<"| 2. Ayam Bakar    Rp. 21.000 |"<<endl;
    cout<<"+-----------------------------+"<<endl;
    
    do{
        cout<<"Menu yang dipilih : ";cin>>pesan[i];
        cout<<"Tekan 1 jika nambah pesanan : ";cin>>loop;
        i++; 
    }while(loop==1);
}

void Ayam::Menghitung(){
    for(int j=0; j<=i; j++){
        if(pesan[j]=1){
            a=17000;
        }else if (pesan[j]=2){
            a=21000;
        }
        jumlah+=a;
    }
}

void Ayam::Struk(){
    cout<<endl<<endl;
    cout<<"+-------------------------------------+"<<endl;
    cout<<"|        Rumah Makan Ayam Mati        |"<<endl;
    cout<<"|-------------------------------------|"<<endl;
    cout<<"| Nama Makanan yang dipesan           |"<<endl;
    for(int j=0; j<=i; j++){
        if(pesan[j]=1){
            cout<<"| "<<j+1<<". Ayam Goreng   Rp. 17.000         |"<<endl;
        }else if (pesan[j]=2){
            cout<<"| "<<j+1<<". Ayam Bakar    Rp. 21.000      |"<<endl;
        }
    }
    cout<<"|-------------------------------------|"<<endl;
    cout<<"| Jumlah Harga = "<<jumlah<<"                |"<<endl;
    if(jumlah >= 45000){
        cout<<"| Selamat anda mendapatkan diskon 10% |"<<endl;
        jumlah -= (0.1 * jumlah);
    }
    cout<<"| Total Harga = "<<jumlah<<"                 |"<<endl;;
    cout<<"+-------------------------------------+"<<endl;
}

int main(){
    Ayam a;
    a.Menu();
    a.Menghitung();
    a.Struk();
}