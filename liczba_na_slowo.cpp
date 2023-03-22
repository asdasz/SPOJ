#include <iostream>

using namespace std;

int main()
{
    int ile; cin >> ile;
    while (ile--)
    {
        long long int liczba, liczbaa; cin >> liczba; liczbaa = liczba;
        int dlugosc = 0;

        for (; liczbaa > 0; liczbaa /= 10)      
            dlugosc++;

        int* tab = new int[dlugosc];
        for (int i = 0; i < dlugosc; i++)
        {
            tab[i] = liczba % 10;
            liczba /= 10;
        }
        while (dlugosc--)
        {
            if (dlugosc == 0 || dlugosc == 3 || dlugosc == 6 || dlugosc == 9 || dlugosc == 12)
            {
                switch (tab[dlugosc])
                {
                case 1: cout << "jeden ";    break;
                case 2: cout << "dwa ";      break;
                case 3: cout << "trzy ";     break;
                case 4: cout << "cztery ";   break;
                case 5: cout << "piec ";     break;
                case 6: cout << "szesc ";    break;
                case 7: cout << "siedem ";   break;
                case 8: cout << "osiem ";    break;
                case 9: cout << "dziewiec "; break;
                default:                     break;
                }
            }

            else if (dlugosc == 1 || dlugosc == 4 || dlugosc == 7 || dlugosc == 10)
            {
                switch (tab[dlugosc])
                {
                case 2: cout << "dwadziescia ";      break;
                case 3: cout << "trzydziesci ";      break;
                case 4: cout << "czterdziesci ";     break;
                case 5: cout << "piecdziesiat ";     break;
                case 6: cout << "szescdziesiat ";    break;
                case 7: cout << "siedemdziesiat ";   break;
                case 8: cout << "osiemdziesiat ";    break;
                case 9: cout << "dziewiecdziesiat "; break;
                case 1: 
                {
                    switch (tab[dlugosc - 1])
                    {
                    case 1: cout << "jedenascie ";     break;
                    case 2: cout << "dwanascie ";      break;
                    case 3: cout << "trzynascie ";     break;
                    case 4: cout << "czternascie ";    break;
                    case 5: cout << "pietnascie ";     break;
                    case 6: cout << "szesnascie ";     break;
                    case 7: cout << "siedemnascie ";   break;
                    case 8: cout << "osiemnascie ";    break;
                    case 9: cout << "dziewietnascie "; break;
                    default: cout << "dziesiec ";      break;
                    }
                    dlugosc--;
                    
                } break;

                default:                           break;
                }
            }
            else
            {
                switch (tab[dlugosc])
                {
                case 1: cout << "sto ";         break;
                case 2: cout << "dwiescie ";    break;
                case 3: cout << "trzysta ";     break;
                case 4: cout << "czterysta ";   break;
                case 5: cout << "piecset ";     break;
                case 6: cout << "szescset ";    break;
                case 7: cout << "siedemset ";   break;
                case 8: cout << "osiemset ";    break;
                case 9: cout << "dziewiecset "; break;
                default:                        break;
                }
            }

            if (dlugosc == 3 && (tab[3]+tab[4]+tab[5]!=0)) cout << "tys. ";
            else if (dlugosc == 6 && (tab[6] + tab[7] + tab[8] != 0)) cout << "mln. ";
            else if (dlugosc == 9 && (tab[9] + tab[10] + tab[11] != 0))  cout << "mld. ";
            else if (dlugosc == 12) cout << "bln. ";
        }
        cout << endl;
    }
    return 0;
}