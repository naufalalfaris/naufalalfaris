#include "TBS2.h"

using namespace std;

int main()
{
    stack S;
    createStack(S);
    adrs p;
    int pilihan ,n;
    infotype Input;
    queue q;
    createQueue(q);
    pilihan = selectMenu();

    char kembali = 'Y';
    while(pilihan != 0){
        switch(pilihan){
        case 1:
            while(kembali == 'Y'){
                cout << endl;
                cout << "Jumlah data akan ditambahkan :" ;
                cin >> n;
                for(int i = 0; i < n; i++){
                    cout << "Masukan data baru :";
                    cin.ignore();
                    getline(cin,Input);
                    processLine(S,Input);
            }
            cout << "Kembali ke menu utama? (y/n) :";
            cin >> kembali;
        }
        cout << endl;
        break;
        case 2:
            showS(S);
            cout << endl;
            break;
        case 3:
            {
                infotype elmhapus = pop(S);
                adrq tampung;
                createElmQ(elmhapus,tampung);
                enqueue(q,tampung);
                break;

            }

        case 4:
            showQ(q);
            break;
        case 5:
            cout << endl;
            jumKata(S);
            cout << endl;
            break;

    }
    pilihan = selectMenu();
}
cout << "Anda telah keluar dari menu" << endl;




}
