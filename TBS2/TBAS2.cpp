#include "TBS2.h"

void createStack(stack &S){
    Top(S) = 0;
}

bool isEmpty(stack S){
    if(Top(S) == 0){
        return true;
    }else{
        return false;
    }
}

bool isFull(stack S){
    if(Top(S) == 999){
        return true;
    }else{
        return false;
    }
}

void push(stack &S, infotype x){
    if(isFull(S) == false){
        Top(S) += 1;
        infoS(S)[Top(S)] = x;
    }
}

infotype pop(stack &S){
    infotype x;
    x = infoS(S)[Top(S)];
    Top(S) = Top(S) - 1;
    return x;
}

void createQueue(queue &q){
    head(q) = nil;
    tail(q) = nil;
}

void createElmQ(infotype x, adrq &p){
    p = new elmsqueue;
    infoQ(p) = x;
    nextQ(p) = nil;
}


void enqueue(queue &Q, adrq p){
    if(head(Q) == nil && tail(Q) == nil){
        head(Q) = p;
        tail(Q) = p;
    }else{
        nextQ(tail(Q)) = p;
        tail(Q) = p;
    }
}

void showS(stack S){
    int i;
    for(i = 0; i <= Top(S); i++){
        cout << infoS(S)[i]<<endl;
    }
}

void showQ(queue q){
    adrq p;
    if(head(q) != nil && tail(q) != nil){
        p = head(q);
        while(p != nil){
            cout << infoQ(p) << endl;
            p = nextQ(p);
        }
    }else{
        cout << "Queue kosong"<<endl;
    }
}


void jumKata(stack S){
    cout << "Jumlah kata :"<< Top(S) << endl; // karena kata = top s
}


void processLine(stack &s, infotype line){
    string kata = "";
    if(line[line.length() - 1] != '.'){          //cek apakah kata diakhiri oleh titik
        for (int i = 0; i < line.length(); i++){ // Pisahkan baris menjadi kata lalu push ke stack
        if(line[i] == ' '){
            push(s,kata);
            kata = "";
        }
        else{
            kata += line[i];
        }
    }
    //push kata terakhir ke stack
     push(s,kata);
    }
    else{
        cout << "Tidak valid" << endl; //jika kata diakhiri oleh titik makan program akan mengeluarkan input tidak valid
    }
}

int selectMenu() {
    cout << "======MENU=======" << endl;
    cout << "1. Menambah N data baru" << endl;
    cout << "2. Menampilkan semua data" << endl;
    cout << "3. Menghapus data " << endl;
    cout << "4. Menampilkan semua data yang dihapus" << endl;
    cout << "5. Menampilkan Jumlah kata " << endl;
    cout << "0. Exit" << endl;
    cout << "Masukkan menu : ";

    int input = 0;
    cin >> input;

    return input;
}

