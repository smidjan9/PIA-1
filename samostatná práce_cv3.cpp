#include <iostream>
#include <cmath>
#include <fstream>

using namespace std; 

int main(){
	
	int n = 100;
	
	double x[n], y[n]; // pole pro hodnoty funkce sinus 
	
	double a = 0, b = 2*M_PI; //poèáteèní a koncový bod intervalu pro funkci sinus
	
	double h = (b - a) / (n - 1); // krok pro rozdìlení intervalu 
	
	ofstream mujSoubor("vysledek.txt");            //vytvoøí soubor
	
	mujSoubor << "# x \t y = sin(x)" << endl; //vytvoøí hlavièku pøed hodnotami x a y
	
	for(int i = 0; i <= n; i++ ) // zaèínáme už od nuly, proto pouze do 99 a ne do 100 
	{
		
		x[i] = i*h ; // x je z intervalu 0 až 2pi
		
		y[i] = sin( x[i] );
		
		cout << x[i] << "\t \t" << y[i] << endl;
		
		mujSoubor << "  " << x[i] << "\t"  << y[i] << endl; //obsah souboru
		
	}
	

	mujSoubor.close();                         //ukonceni souboru	
		
	return 0;
	
}
	
