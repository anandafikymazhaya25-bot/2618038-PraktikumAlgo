#include <iostream>
using namespace std;

int main(){
	
	float celcius, fahrenheit, reamur, kelvin;
	
	cout << "Program Konversi Suhu";
	cout << "\nMasukkan Suhu (celcius): ";
	cin >> celcius;
	
	fahrenheit = (celcius * 9/5) + 32;
	reamur = celcius * 4/5;
	kelvin = celcius + 273.15;
	
	cout << "\nCelcius = " << celcius;
	cout << "\nFahrenheit = " << fahrenheit;
	cout << "\nReamur = " << reamur;
	cout << "\nKelvin = " << kelvin;
}
