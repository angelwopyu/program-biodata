#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string nama, alamat, bantuan;
    int anggota;
    float penghasilan;

    cout << "======== BIODATA KELUARGA KURANG MAMPU ========\n";
    cout << "Nama Kepala Keluarga : ";
    getline(cin, nama);
    cout << "Alamat               : ";
    getline(cin, alamat);
    cout << "Jumlah Anggota       : ";
    cin >> anggota;
    cout << "Penghasilan/Bulan Rp : ";
    cin >> penghasilan;
    cin.ignore();
    cout << "Bantuan Diperlukan   : ";
    getline(cin, bantuan);
    cout<<fixed<<setprecision(2);

    cout << "\n----------- HASIL DATA -----------\n";
    cout << "Nama: " << nama << "\nAlamat: " << alamat;
    cout << "\nAnggota: " << anggota << "\nPenghasilan: Rp" << penghasilan;
    cout << "\nBantuan: " << bantuan;
    cout << "\nStatus: " << penghasilan  ;
    if (penghasilan < 1500000){
    	cout<<"\nKURANG MAMPU";
	}else{
		cout<<"\nTIDAK KURANG MAMPU";
	}
}
