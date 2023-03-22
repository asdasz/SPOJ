#include <iostream>
#include <string>
using namespace std;
int main()
{
    int m; cin >> m; m++;
    string t;
    while (m--)
    {
        getline(cin, t);
        for (int i = 0; i < t.size(); i++)
        {
            switch (t[i])
            {
            case 'A': case 'B': case 'C': case 'D': case 'E': cout << 1; break;
            case 'J': case 'F': case 'G': case 'H': case 'I': case'K' : cout << 2; break;
            case 'L': case 'M': case 'N': case 'O': case 'P': cout << 3; break;
            case 'Q': case 'R': case 'S': case 'T': case 'U': cout << 4; break;
            case 'V': case 'W': case 'X': case 'Y': case 'Z': cout << 5; break;
            }
            switch (t[i])
            {
            case 'A': case 'F': case 'L': case 'Q': case 'V': cout << 1 << " "; break;
            case 'B': case 'G': case 'M': case 'R': case 'W': cout << 2 << " "; break;
            case 'C': case 'H': case 'N': case 'S': case 'X': cout << 3 << " "; break;
            case 'D': case 'I': case 'O': case 'T': case 'Y': case'J': cout << 4 << " "; break;
            case 'E': case 'K': case 'P': case 'U': case 'Z': cout << 5 <<" "; break;
            }           
        }
        cout << endl;
    }
}

/*
#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){map<char,int> P;for(int i=0,j=0;i<26;i++,j++){if(i==9)j--;P[(char)(i+65)]=((j/5)+1)*10+((j%5+1));}string s;int t;cin>>t;getline(cin,s);for(int i=0;i<t;i++){getline(cin,s);int sz=s.size();for(int j=0;j<sz;j++){if(s[j]!=' '){cout<<P[s[j]]<<" ";}}cout<<endl;}}
*/