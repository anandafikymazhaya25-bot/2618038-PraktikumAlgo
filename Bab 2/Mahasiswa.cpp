#include <iostream> 
#include <string> 
 
using namespace std; 
 
int main() { 
    string nama, kelas; 
    int nim, semester, ipk; 
 
    cout << "PRAKTIKUM ALGORITMA 2025\n\n"; 
 
    cout << "Masukan Nama  : "; 
    getline(cin, nama); 
     
    cout << "Masukan NIM   : "; 
    cin >> nim; 
     
    cout << "Masukan Kelas : "; 
    cin >> kelas; 
     
    cout << "Semester      : "; 
    cin >> semester; 
     
    cout << "Masukan IPK   : "; 
    cin >> ipk; 
 
    cout << "\nBIODATA MAHASISWA\n"; 
    cout << "=================\n"; 
    cout << "Nama     : " << nama << "\n"; 
    cout << "NIM      : " << nim << "\n"; 
    cout << "Kelas    : " << kelas << "\n"; 
	cout << "Semester : " << semester << "\n"; 
	cout << "IPK" << ipk << "\n";
return 0; 
}
