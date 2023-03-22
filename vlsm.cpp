#include <iostream>
#include <string>
#include <math.h>

using namespace std;

string dec2bin(int x)
{
    string y;
    for (int i = 7; i >= 0; i--)  
        if (x >= pow(2, i)){       
            y.push_back('1');
            x -= pow(2, i);
        }
        else       
            y.push_back('0');    
    return y;
}

int bin2dec(string x)
{
    int y=0;
    for (int i = 0; i < 8; i++)
        if (x[i] == '1')       
            y += pow(2, 7 - i);
    return y;
}
int negacja(int x)
{
    return 255 - x;
}

string iloczyn_binarny(string x, string y)
{
    string z;
    for (int i = 0; i < 8; i++)
        if (x[i] == '1' && y[i] == '1')
            z.push_back('1');
        else
            z.push_back('0');
    return z;
}


int main()
{
    int adres_hosta[4], maska_sieci[4], adres_sieci[4], negacja_maski[4], adres_rozgloszeniowy[4], adres1[4], adres_ost[4];
    string ah[4], ms[4], as[4], nm[4], ar[4], a1[5], ao[4];

    cout << "adres hosta: ";

    for (int i = 0; i < 4; i++)
    {
        cin >> adres_hosta[i];
        ah[i] = dec2bin(adres_hosta[i]);
    }


    


    cout << endl << "maska sieci: ";
    for (int i = 0; i < 4; i++)
    {
        cin >> maska_sieci[i];
        ms[i] = dec2bin(maska_sieci[i]);
        negacja_maski[i] = negacja(maska_sieci[i]);
        nm[i] = dec2bin(negacja_maski[i]);
    }


    cout << "adres hosta w zapisie binarnym: ";
    for (int i = 0; i < 4; i++)
        cout << ah[i] << ".";

    cout << endl << "maska sieci w binarnym: ";
    for (int i = 0; i < 4; i++)
    {
        cout << ms[i] << ".";
    }cout << endl<<"negacja maski: ";
    for (int i = 0; i < 4; i++)
    {
        cout << negacja_maski[i] << ".";
    }cout << endl<<"negacja maski w binarnym: ";
    for (int i = 0; i < 4; i++)
    {
        cout << nm[i] << ".";
    }cout << endl << endl << endl;
    
    cout << "adres sieci: ";
    for (int i = 0; i < 4; i++)
    {
        as[i] = iloczyn_binarny(ah[i], ms[i]);
        cout << as[i] << ".";
    }cout << " = ";
    for (int i = 0; i < 4; i++)
    {
        adres_sieci[i] = bin2dec(as[i]);
        cout << adres_sieci[i] << ".";
    }cout << endl;

    cout << "adres rozgloszeniowy: ";
    for (int i = 0; i < 4; i++)
    {
        adres_rozgloszeniowy[i] = negacja_maski[i] + adres_sieci[i];
        ar[i] = dec2bin(adres_rozgloszeniowy[i]);
        cout << adres_rozgloszeniowy[i] << ".";
    }
    cout << " = ";
    for (int i = 0; i < 4; i++)
    {
        cout << ar[i] << ".";
    }

    cout << endl << endl << endl;
    cout << "Pierwszy adres: ";

    for (int i = 0; i < 4; i++)
    {
        if (i != 3)
            adres1 [i]= adres_sieci[i];
        else
            adres1[i] = adres_sieci[i] + 1;
        cout << adres1[i] << ".";
    }
    cout << " = ";
    for (int i = 0; i < 4; i++)
    {
        a1[i] = dec2bin(adres1[i]);
        cout << a1[i] << ".";
    }cout << endl;

    cout << "Ostatni adres: ";
    for (int i = 0; i < 4; i++)
    {
        if (i != 3)
            adres_ost[i] = adres_rozgloszeniowy[i];
        else
            adres_ost[i] = adres_rozgloszeniowy[i] -1;
        cout << adres_ost[i] << ".";
    }
    cout << " = ";
    for (int i = 0; i < 4; i++)
    {
        ao[i] = dec2bin(adres_rozgloszeniowy[i]);
        cout << ao[i] << ".";
    }cout << endl;
    cout << endl << endl << endl;



    long long int CIDR = 0;
    for(int i=0; i<4; i++)
        for (int j = 0; j < 8; j++)
        {
            if (ms[i][j] == '1')
                CIDR++;
        }
    cout << "CIDR: " << CIDR << endl;
    cout << "Liczba hostow: " << pow(2, 32-CIDR) - 2;




    return 0;
}
