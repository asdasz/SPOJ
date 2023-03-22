#include <iostream>
#include <string.h>
#include<fstream>
#include<string>
#include<cstdlib>
using namespace std;




int main()
{
	int i = 0;

	string odpowiedz;
	int poziom;
	int polnapol;
	string login;
	string haslo;
	string koddostepu = "student2021";

	string tresc[12];
	string odpA[12], odpB[12], odpC[12], odpD[12];
	string poprawna[12];
	if (true)
	{


		cout << "Zalogowales sie na konto: " << login << endl << "Wybierz poziom trudnosci" << endl << " 1 - latwy " << endl << " 2 - sredni " << endl << " 3 - trudny" << endl;

		cin >> poziom;


		switch (poziom)
		{
		case 1:
		{
			cout << "wybrales poziom: latwy" << endl;

			int nr_linii = 1;
			string linia;
			int nr_pytania = 0;


			fstream plik;
			plik.open("C:/Users/mcaba/OneDrive/Pulpit/wazne.txt", ios::in);

			if (plik.good() == false) {
				cout << "Plik nie dziala" << endl;
			}

			while (getline(plik, linia))
			{
				switch (nr_linii)
				{

				case 1: tresc[nr_pytania] = linia; break;
				case 2: odpA[nr_pytania] = linia; break;
				case 3: odpB[nr_pytania] = linia; break;
				case 4: odpC[nr_pytania] = linia; break;
				case 5: odpD[nr_pytania] = linia; break;
				case 6: poprawna[nr_pytania] = linia; break;
				}

				nr_linii++;
				if (nr_linii == 8)
					{
						nr_linii = 1;
						nr_pytania++;

					}


			}

			plik.close();

				for (int i = 0; i <= 7; i++)
				{
					cout << endl << tresc[i] << endl;
					cout << "A. " << odpA[i] << endl;
					cout << "B. " << odpB[i] << endl;
					cout << "C. " << odpC[i] << endl;
					cout << "D. " << odpD[i] << endl;

					cout << "Podaj odpowiedz:" << endl;
					cin >> odpowiedz;

					if (odpowiedz == poprawna[i])
					{

						cout << "Dobra odpowiedz, masz na swoim koncie " << (i + 1) * 1000 << " PLN" << endl;

					}
					else
					{
						cout << "Niestety, to zla odpowiedz. Koniec gry!" << endl;
						cout << "Wygrywasz " << (i) * 1000 << " PLN! ";


						exit(0);
					}

				}


			break;
		}
		case 2:
		{
			cout << "wybrales poziom: sredni" << endl;

			int nr_linii = 1;
			string linia;
			int nr_pytania = 0;


			fstream plik1;
			plik1.open("C:/Users/janwa/Desktop/srednipoziom.txt", ios::in);

			if (plik1.good() == false) {
				cout << "Plik nie dziala" << endl;
			}

			while (getline(plik1, linia))
			{
				switch (nr_linii)
				{

				case 1: tresc[nr_pytania] = linia; break;
				case 2: odpA[nr_pytania] = linia; break;
				case 3: odpB[nr_pytania] = linia; break;
				case 4: odpC[nr_pytania] = linia; break;
				case 5: odpD[nr_pytania] = linia; break;
				case 6: poprawna[nr_pytania] = linia; break;
				}

				nr_linii++;
				if (nr_linii == 8)
				{
					nr_linii = 1;
					nr_pytania++;

				}
				cout << linia << endl;
			}

			plik1.close();

			for (int i = 0; i <= 9; i++)
			{
				cout << endl << tresc[i] << endl;
				cout << "A. " << odpA[i] << endl;
				cout << "B. " << odpB[i] << endl;
				cout << "C. " << odpC[i] << endl;
				cout << "D. " << odpD[i] << endl;
				cout << poprawna[i] << endl;
				cout << "Podaj odpowiedz:" << endl;
				cin >> odpowiedz;

				if (odpowiedz == poprawna[i])
				{

					cout << "Dobra odpowiedz, masz na swoim koncie " << (i + 1) * 2500 << " PLN" << endl;

				}
				else
				{
					cout << "Niestety, to zla odpowiedz. Koniec gry!" << endl;
					cout << "Wygrywasz " << i * 2500 << " PLN! ";


					exit(0);
				}

			}
			break;
		}

		case 3:
		{
			cout << "wybrales poziom: trudny" << endl;

			int nr_linii = 1;
			string linia;
			int nr_pytania = 0;


			fstream plik2;
			plik2.open("C:/Users/mcaba/OneDrive/Pulpit/trudny.txt", ios::in);

			if (plik2.good() == false) {
				cout << "Plik nie dziala" << endl;
			}

			while (getline(plik2, linia))
			{
				switch (nr_linii)
				{

				case 1: tresc[nr_pytania] = linia; break;
				case 2: odpA[nr_pytania] = linia; break;
				case 3: odpB[nr_pytania] = linia; break;
				case 4: odpC[nr_pytania] = linia; break;
				case 5: odpD[nr_pytania] = linia; break;
				case 6: poprawna[nr_pytania] = linia; break;
				}

				nr_linii++;
				if (nr_linii == 12)
				{
					nr_linii = 1;
					nr_pytania++;

				}


			}

			plik2.close();

			for (int i = 0; i <= 11; i++)
			{
				cout << endl << tresc[i] << endl;
				cout << "A. " << odpA[i] << endl;
				cout << "B. " << odpB[i] << endl;
				cout << "C. " << odpC[i] << endl;
				cout << "D. " << odpD[i] << endl;

				cout << "Podaj odpowiedz:" << endl;
				cin >> odpowiedz;

				if (odpowiedz == poprawna[i])
				{

					cout << "Dobra odpowiedz, masz na swoim koncie " << (i + 1) * 5000 << " PLN" << endl;

				}
				else
				{
					cout << "Niestety, to zla odpowiedz. Koniec gry!" << endl;
					cout << "Wygrywasz " << (i) * 5000 << " PLN! ";

					exit(0);
				}
			}
		}

		}


		system("pause");
		return 0;
	}
}