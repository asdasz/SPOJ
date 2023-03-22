#include <iostream>
#include <vector>

using namespace std;

class Pracownik
{
public:
    int wyplata;
    int szef;
    vector <int> podwladni;
    int slugi;
    Pracownik(int id_szefa, int wyp)
    {
        szef = id_szefa;
        wyplata = wyp;
        slugi = 0;
    }
    Pracownik() { wyplata = 0; szef = 0; slugi = 0; }
};

void przydziel_wyplaty(Pracownik* tab, int IDSzefaNadSzefami)
{
    int nowy;

    if (tab[IDSzefaNadSzefami].wyplata)
    {
        for (int i = 0; i < tab[IDSzefaNadSzefami].podwladni.size(); i++)
        {

            nowy = tab[IDSzefaNadSzefami].podwladni[i];
            if (tab[nowy].wyplata == 0 && tab[nowy].slugi)
            {
                tab[nowy].wyplata = tab[IDSzefaNadSzefami].wyplata - 1;
                for (int j = 0; j < tab[nowy].podwladni.size(); j++)
                    przydziel_wyplaty(tab, nowy);
            }
            else if (tab[nowy].wyplata == 0 && tab[IDSzefaNadSzefami].wyplata - 2 == tab[nowy].slugi)
                tab[nowy].wyplata = tab[IDSzefaNadSzefami].wyplata - 1;
            else
            {
                for (int j = 0; j < tab[nowy].podwladni.size(); j++)
                    przydziel_wyplaty(tab, nowy);
            }           
        }
    }
}

int main()
{
    int ile; cin >> ile;
    Pracownik* tab = new Pracownik[ile+1];

    int id_szefa, wyp;
    int IDSzefaNadSzefami=0;


    for (int i = 1; i <= ile; i++)
    {
        cin >> id_szefa >> wyp;

        if (i != id_szefa)
        {
            tab[id_szefa].podwladni.push_back(i);
            tab[i].szef = id_szefa;
            tab[i].wyplata = wyp;
        }
        else
        {
            IDSzefaNadSzefami = id_szefa;
            tab[i].szef = 0;
            tab[i].wyplata = wyp;
        }
    }

    for (int i = 1; i <= ile; i++)
    {
        int j, ciag = 0;

        if (tab[i].podwladni.size() == 0)
        {
            j = i;
            while (tab[j].szef)
            {
                ciag++;

                if (tab[tab[j].szef].slugi < ciag)
                    tab[tab[j].szef].slugi = ciag;

                j = tab[j].szef;

            }
            ciag++;

            if (tab[j].slugi > ciag)
                tab[j].slugi = ciag;
        }
    }

    przydziel_wyplaty(tab, IDSzefaNadSzefami);
    //for (int i = 1; i <= ile; i++)
    //{
    //    cout << "\n\nPracownik nr " << i << ":\n" << "Wyplata: " << tab[i].wyplata << "\nSzef: " << tab[i].szef << "\nCiag: "<< tab[i].slugi << "\nPodwladni: "<<endl;
    //    for (int j = 0; j < tab[i].podwladni.size(); j++)
    //        cout << tab[i].podwladni[j] << " ";
    //}

    for (int i = 1; i <= ile; i++)
        cout << tab[i].wyplata << endl;
}

