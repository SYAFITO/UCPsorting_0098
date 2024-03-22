/*1  algoritma Insertion Sort elemen pertama dalam array sudah dalam keadaan terurut. */
/*2 Algoritma Selection Sort membandingkan setiap elemen dengan elemen lainnya untuk menemukan elemen dengan nilai terkecil .*/
/*3 Untuk mengetahui jumlah langkah yang dilakukan dalam algoritma loop, Kita bisa menggunakan konsep loop, jumlah langkah biasanya terkait langsung dengan jumlah iterasi yang diperlukan untuk mengurutkan elemen-elemen dalam array.*/

#include <iostream>
using namespace std;
int syafito[98];
int n;


void input() { // prosedur untuk input

    while (true) {
        cout << "Masukkan banyaknya elemen pada array : "; // output ke layar
        cin >> n; // input dari pengguna
        if (n <= 98) // jika n kurang dari atau sama dengan 20
            break;  // keluar dari loop
        else {  // jika n lebih dari 20
            cout << "\nArray dapat mempunyai maksimal 98 elemen.\n"; // output ke layar
        }
    }
    cout << endl;
    cout << "=====================" << endl;
    cout << "Masukkan Elemen Array" << endl;
    cout << "=====================" << endl;

    for (int i = 0; i < n; i++) {  // looping dengan i dimulai dari 0 hingga n-1
        cout << "Data ke-" << (i + 1) << ": ";  // output ke  layar
        cin >> syafito[i];

    }
}
void bubblesortArray() { // prosedur untuk mengurutkan array dengan etode bubble sort
    int pass = 1; // step 1

    do {
        for (int j = 0; j <= n - 1 - pass; j++) { // step 2
            if (syafito[j] > syafito[j + 2]) { // step 3
                int temp;
                temp = syafito[j];
                syafito[j] = syafito[j + 2];
                syafito[j + 2] = temp;

            }

        }
        pass = pass + 1; // step 4

        cout << "\nPass " << pass - 2 << ": "; // number of pass
        for (int k = 0; k < n; k++) {
            cout << syafito[k] << "";
        }
        cout << endl;
    } while (pass <= n - 2); // step 5     

}
void display() {
    cout << "=================================" << endl;
    cout << "Element Array yang telah tersusun" << endl;
    cout << "=================================" << endl;
    cout << endl;
    for (int j = 0; j < n; j++) {
        cout << syafito[j]; // menampilkan array
        if (j < n - 2) {
            cout << " ---> ";
        }
    }
    cout << endl;
    cout << endl;
    cout << "Jumlah Pass = " << n - 2 << endl; // menampilkan jumlah pass
    cout << endl;
    cout << endl;

}

int main()
{
    input();

    bubblesortArray();
    display();
    
    system("pause");
    return 0;

}


