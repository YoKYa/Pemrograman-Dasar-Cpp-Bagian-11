#include <iostream>

using namespace std;

int main(){
    system("cls");
    int Hasil;
    cout << "If Statement Sederhana" << endl << endl;
    cout << "Hasil dari 5 x 5 adalah ";
    cin >> Hasil;
    cout << endl;

    // If Statement
    if (Hasil == 25){
        cout << "Jawaban Kamu Benar" << endl << endl;
    }else if(Hasil >= 25){
        cout << "Jawaban Kamu Salah Karena Terlalu Besar " << endl << endl;
    }else{
        cout << "Jawaban Kamu Salah Karena Terlalu Kecil" << endl << endl;
    }
    
    cin.get();
    return 0;
}