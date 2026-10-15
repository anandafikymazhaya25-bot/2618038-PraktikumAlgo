#include <iostream>
using namespace std;

int main(){
	
	float r, t;
	
	cout << "Hitung Volume Tabung";
	cout << "\nMasukkan Jari - jari : ";
	cin >> r;
	cout << "\nMasukkan Tinggi : ";
	cin >> t;
	
	float volume = r * r * t * 3.14;
	
	cout << "\nVolume tabung adalah = " << volume;
}
