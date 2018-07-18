#include <iostream>
#include <cstdio>
#include <windows.h>

using namespace std;

int n;
int main()
{
    float oceny[n];
    float suma=0;
    float srednia;
    cout<<"Podaj liczbe przedmiotow: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<"\n___________-----__________\n";
        cout<<"Podaj "<<i<<" ocene: ";
        cin>>oceny[n];
        suma=suma+oceny[n];
        system("cls");
    }
        srednia=suma/n;
        cout<<"_______________________";
        cout<<"\nTwoja srednia to: "<<srednia;
        cout<<"\n^^^^^^^^^^^^^^^^^^^^^^^\n";
        getchar();getchar();



    return 0;
}
