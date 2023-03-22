#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string what_to_do = "";
int how_many = 0;

string name[10000], password[10000];
string current_name = "", current_password = "", char_check = "";
int current_length = 0;
int account_counter = 0, account_number = 0;

bool char_lowercase = false, char_uppercase = false, char_number = false, char_sign = false;
bool login_busy = false, bad_length = false, account_exist = false;

void registration();
void loginBusy();
void charactersCheck();

void login();
void loginExist();
void error();
void resetBool();

int main()
{
    while (cin >> what_to_do >> how_many)
    {
        for (int i = 0; i < how_many; i++)
        {
            if (what_to_do == "register")
            {
                registration();
            }
            else if (what_to_do == "login")
            {
                login();
            }
        }
    }

    return 0;
}

void registration()
{
    cin >> current_name >> current_password;

    loginBusy();



        current_length = current_name.length();
        if (current_length < 3 || current_length > 12) error();
        else
        {
            char_check = current_name;
            charactersCheck();

            if (char_sign == true) error();
            else
            {
                current_length = current_password.length();
                if (current_length < 5 || current_length > 15) error();
                else
                {
                    resetBool();
                    char_check = current_password;
                    charactersCheck();
                    if (login_busy == true)
                        cout << "Login zajety\n";
                    else
                        if (char_lowercase == false || char_uppercase == false || char_number == false || char_sign == false) error();
                        else
                        {
                        

                            //transform(current_name.begin(), current_name.end(), current_name.begin(), ::tolower);
                            name[account_counter] = current_name;
                            password[account_counter] = current_password;
                            account_counter++;
                            cout << "Zarejestrowano\n";
                        
                        }
                }
            }

        }
    resetBool();
}

void loginBusy()
{
    for (int j = 0; j < account_counter; j++)
    {
        string x, y;
        x = current_name;
        transform(x.begin(), x.end(), x.begin(), ::tolower);
        y = name[j];
        transform(y.begin(), y.end(), y.begin(), ::tolower);
        if (x == y)
        {
            login_busy = true;
            break;
        }
    }
}

void charactersCheck()
{
    for (int j = 0; j < current_length; j++)
    {
        if (char_check[j] >= 48 && char_check[j] <= 57)
            char_number = true;
        if (char_check[j] >= 97 && char_check[j] <= 122)
            char_lowercase = true;
        if (char_check[j] >= 65 && char_check[j] <= 90)
            char_uppercase = true;
        if (char_check[j] >= 33 && char_check[j] <= 47)
            char_sign = true;
        if (char_check[j] >= 58 && char_check[j] <= 64)
            char_sign = true;
        if (char_check[j] >= 91 && char_check[j] <= 96)
            char_sign = true;
        if (char_check[j] >= 123 && char_check[j] <= 126)
            char_sign = true;
    }
}

void login()
{
    cin >> current_name >> current_password;

    //transform(current_name.begin(), current_name.end(), current_name.begin(), ::tolower);

    loginExist();
    if (account_exist == false)
        cout << "Konto nie istnieje\n";
    else
    {
        if (password[account_number] == current_password)
            cout << "Zalogowano\n";
        else
            cout << "Zle haslo\n";
    }

    resetBool();
}

void loginExist()
{
    for (int j = 0; j < account_counter; j++)
    {
        if (name[j] == current_name)
        {
            account_exist = true;
            account_number = j;
        }
    }
}

void error()
{
    cout << "Blad\n";
}

void resetBool()
{
    login_busy = false;
    bad_length = false;
    char_lowercase = false;
    char_uppercase = false;
    char_number = false;
    char_sign = false;
    account_exist = false;
}