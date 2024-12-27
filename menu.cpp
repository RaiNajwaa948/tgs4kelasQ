#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

struct mahasiswa {
    string nim;
    string nama;
    string alamat;
    float ipk;
};

mahasiswa sikc[30];
int pos = -1;

void dMenu() {
    system("cls");
    cout << "Aplikasi KelasQ" << "\n";
    cout << "1. Masukkan data" << "\n";
    cout << "2. Tampilkan data" << "\n";
    cout << "3. Perbaikan data" << "\n";
    cout << "4. Menghapus data" << "\n";
    cout << "5. Exit" << "\n";
    cout << "Masukan angka :";
}

int main()
{
  int pl;

    do {
        dMenu();
        pl = getch();
        switch (pl) {
            case '1':
                
                break;
            case '2':
                
                break;
            case '3':
                
                break;
            case '4':
                
                break;
            case '5':
                break;
            default:
                system("cls");
                cout << "Pilihan Tidak Tersedia";
                getch();
                break;
        }
    } while (pl != '5');

    return 0;
}