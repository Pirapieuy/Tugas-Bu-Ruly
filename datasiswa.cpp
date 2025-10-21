#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct siswa {
    string nama;
    string nisn;
    string jurusan;
    float nilaiMtk;
    float nilaiBindo;
    float nilaiIpa;
};

int main(){
    siswa s; 

    cout << "=== INPUT DATA SISWA ===" << endl;
    cout << "Masukkan Nama: ";
    getline(cin, s.nama);
    cout << "Masukkan NISN: ";
    cin >> s.nisn;
    cout << "Masukkan Jurusan: ";
    cin.ignore(); 
    getline(cin, s.jurusan);
    cout << "Masukkan Nilai Matematika: ";
    cin >> s.nilaiMtk;
    cout << "Masukkan Nilai Bahasa Indonesia: ";
    cin >> s.nilaiBindo;
    cout << "Masukkan Nilai IPA: ";
    cin >> s.nilaiIpa;

    float rata = (s.nilaiMtk + s.nilaiBindo + s.nilaiIpa) / 3;

    cout << endl;

    if (rata >= 75){
        cout << "Keterangan : Lulus" << endl;
    } else {
        cout << "Keterangan : Tidak Lulus" << endl;
    }

    ofstream fileOutput("datasiswaaa.txt");
    fileOutput << "Nama : "<<s.nama<<endl;
    fileOutput << "Jurusan : "<<s.jurusan <<endl;
    fileOutput << "NISN : "<<s.nisn<<endl;
    fileOutput << "Nilai Rata-rata : "<<rata<<endl;
    
fileOutput.close();
    cout << "Data Tersimpan"<<endl;


    return 0;

}
