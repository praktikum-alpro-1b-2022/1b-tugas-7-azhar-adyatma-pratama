#include <iostream>
#include <conio.h>
using namespace std;

int main(){
int bilangan[3][3];
int angka[3][3];
int penjumlahan[3][3];
int perkalian[3][3];
int i, j;
char oper, ulang;

cout << "KALKULATOR MATRIKS DENGAN MENGGUNAKAN ARRAY MULTIDIMENSI" << endl;
cout << "--------------------------------------------------------" << endl;

cout << "Masukkan 9 buah bilangan untuk Matriks A" << endl;
for (i=0; i<3; i++){
    for (int j =0; j<3; j++){
        cout << "[" << i << "][" << j << "] = ";
        cin >> bilangan[i][j];
    }
}
cout << "\nMasukkan 9 buah bilangan untuk Matriks B" << endl;
for (i=0; i<3; i++){
    for (int j =0; j<3; j++){
        cout << "[" << i << "][" << j << "] = ";
        cin >> angka[i][j];
    }
}

cout << "\nMatriks A = " << endl;
for (i=0; i<3; i++){
    for (j=0; j<3; j++){
        cout << " " << bilangan[i][j];
        if (j==2){
            cout << endl;
        }
    }
}
cout << "\nMatriks B = " << endl;
for (i=0; i<3; i++){
    for (j=0; j<3; j++){
        cout << " " << bilangan[i][j];
        if (j==2){
            cout << endl;
        }
    }
}

do{
cout << "\nPILIH OPSI PERHITUNGAN" << endl;
cout << "-----------------------------" << endl;
cout << "Penjumlahan Matriks       (1)" << endl;
cout << "Perkalian Matriks         (2)" << endl;
cout << "Transpose Matriks         (3)" << endl;
cout << "-----------------------------" << endl;
cout << "Masukkan opsi perhitungan : ";
cin >> oper;
cout << endl;

switch (oper){
case '1':
cout << "A + B = " << endl;
for (i=0; i<3; i++){
    for (j=0; j<3; j++){
        penjumlahan[i][j] = bilangan[i][j] + angka[i][j];
        cout << penjumlahan[i][j] << " ";
        if (j==2){
            cout << endl;
        }
    }
}
break;

case '2':
cout << "A * B = " << endl;
for (j=0; j<3; j++){
    if (j==0){
        for (i=0; i<3; i++){
        perkalian[i][j] = (bilangan[i][0]*angka[0][j]) + (bilangan[i][1]*angka[1][j]) + (bilangan[i][2]*angka[2][j]);
        }
    }
    if (j==1){
        for (i=0; i<3; i++){
        perkalian[i][j] = (bilangan[i][0]*angka[0][j]) + (bilangan[i][1]*angka[1][j]) + (bilangan[i][2]*angka[2][j]);
        }
    }
    if (j==2){
        for (i=0; i<3; i++){
        perkalian[i][j] = (bilangan[i][0]*angka[0][j]) + (bilangan[i][1]*angka[1][j]) + (bilangan[i][2]*angka[2][j]);
        }
    }
}
for (i=0; i<3; i++){
    for (j=0; j<3; j++){
        cout << perkalian[i][j] << " ";
        if (j==2){
            cout << endl;
        }
    }
}
break;

case '3':
cout << "Transpose matriks A " << endl;
for (j=0; j<3; j++){
    if(j==0){
        for (i=0; i<3; i++){
            cout << bilangan[i][j] << " ";
            if(i==2){
                cout << endl;
            }
        }
    }
    if(j==1){
        for(i=0; i<3; i++){
            cout << bilangan[i][j] << " ";
            if(i==2){
            cout << endl;
            }
        }
    }
    if(j==2){
        for(i=0; i<3; i++){
            cout << bilangan[i][j] << " ";
            if(i==2){
                cout << endl;
            }
        }
    }
}
cout << "\nTranspose matriks B " << endl;
for (j=0; j<3; j++){
    if(j==0){
        for (i=0; i<3; i++){
            cout << angka[i][j] << " ";
            if(i==2){
                cout << endl;
            }
        }
    }
    if(j==1){
        for(i=0; i<3; i++){
            cout << angka[i][j] << " ";
            if(i==2){
                cout << endl;
            }
        }
    }
    if(j==2){
        for(i=0; i<3; i++){
            cout << angka[i][j] << " ";
            if(i==2){
                cout << endl;
            }
        }
    }
}
break;
default:
    cout << "PROGRAM SELESAI";
break;

}
cout << "\nApakah anda ingin memilih opsi perhitungan lain (y/t)? ";
cin >> ulang;
getch();

}
while (ulang != 't');
cout << "PROGRAM SELESAI";

return 0;
}

