#include <iostream>
using namespace std;

int main(){
	
	int nilai1 , nilai2;
	
	string lulus = "Selamat, Anda Lulus!";
	string gagal = "Maaf, Anda Tidak Lulus!";
	
	
	cout << "Masukkan nilai pertama : ";
	cin >> nilai1;
	cout << "\nMasukkan nilai kedua : ";
	cin >> nilai2;
	
	int syarat1 = (nilai1 > 60) ? 1 : 0;
    int syarat2 = (nilai2 > 60) ? 1 : 0;
    
    int pengecekan = syarat1 & syarat2;
    
    string kelulusan = pengecekan==true? lulus : gagal;
    
    cout << kelulusan;
    
}
