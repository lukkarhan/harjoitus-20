/*
Teht�v�: Harjoitus 20
Tekij�: Hanna Lukkarinen, IIO13S1
Pvm: 15.12.2013

Kuvaus: Kuten harjoitus 19, mutta toteuta k�ytt�en taulukkoa ja osoitinta
tiedon k�sittelyyn.
*/

#include <iostream>
using namespace std;

void main()
{
	int muutos[10] = {0,0,0,0,0};
	int nopeus = (muutos[0]+muutos[1]+muutos[2]+muutos[3]+muutos[4])/5;

	cout<<"Alkunopeus: "<<nopeus<<" km/h.\nAnna uusi nopeus: ";

	while(muutos[0] >= 0)
	{
		for(int i=4;i>0;i--)
		{
			int* tilap = new int;
			*tilap = muutos[i-1];
			muutos[i] = *tilap;
			delete tilap;
			tilap = NULL;
		}

		cin >> muutos[0];
		if (muutos[0] >= 0)
		{
			int nopeus = (muutos[0]+muutos[1]+muutos[2]+muutos[3]+muutos[4])/5;
			cout<<nopeus<<" km/h\nAnna uusi nopeus: ";
		}
		else cout<<"Loppu.\n";
	}

}