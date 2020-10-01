#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

int main(){
	
	string Jmeno;
	string Prijmeni;
	
	cout << "Zadej jmeno: ";
	cin >> Jmeno;
	
	cout << "Zadej prijmeni: ";
	cin >> Prijmeni;
	
	double R, v , s, Objem, Povrch;
	
	cout << "Zadej polomer podstavy: ";
	cin >> R;
	
	cout << "Zadej delku povrsky valce: ";
	cin >> s;
	
	if(s > R){
		
	Objem = pow(R, 2)*sqrt(pow(s, 2)-pow(R, 2))*M_PI/3;
	
	cout << "Objem kuzele = " << Objem << endl;
	
	Povrch = M_PI*R*s;
	
	cout << "Povrch kuzele = " << Povrch << endl;
		
	ofstream objemPovrchKuzel("kuzel.txt");            //vytvoøí soubor
	
	objemPovrchKuzel << "Jmeno: " << Jmeno << endl << "Prijmeni: " << Prijmeni << endl << "Objem: " << Objem << endl << "Povrch: " << Povrch << endl;  //obsah souboru
	
	objemPovrchKuzel.close();                         //ukonceni souboru;
		
	} 
	
	else{
		
		cout << "Kuzel nelze sestrojit";
		
	}
	
	
	
	return 0;
}
	
