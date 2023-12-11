#include <iostream>
using namespace std;

#define max 10
string n[max], nip[max], u[max], jk[max], s[max], pend[max], pk[max], tt[max], gol[max], g[max], loop;
int pos=0;

// Deklarasi fungsi-fungsi
void display();
void add();
void edit();
void del();

// Implementasi fungsi display
void display() {
    system("cls");
    if (pos > 0) {
        cout << "Data Tersimpan" << endl;
        for (int a = 0; a < pos; a++) {
            cout << "Data PNS ke- " << a + 1 << endl;
            for (int q = 0; q < pos; q++) {
                cout << q + 1 << ".  Nama : " << n[q] << endl;
                cout << a + 2 << ".  NIP : " << nip[a] << endl;
                // Sisipkan bagian display lainnya sesuai kebutuhan
            }
        }
    } else {
        cout << "Data Kosong" << endl;
    }
}

int main() {
    int pil;
    do {
        system("cls");
        cout << "2. Tampilkan Data\n";
    
        cout << "Pilihan : ";
        cin >> pil;
        switch (pil) {
        case 2:
            do {
                display();
                cout << "kembali (y) : ";
                cin >> loop;
            } while (loop != "y");
            break;
        }
    } while (pil != 5);
    cout << "Program Selesai";

    return 0;
}

