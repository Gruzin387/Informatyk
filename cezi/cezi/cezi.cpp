#include <iostream>

using namespace std;
void def(char tab[], int klucz);


int main()
{
    char tab[100];
    int klucz;
    cout << "Podaj wyraz ";
    cin >> tab;
    cout << "podaj klucz z przedziału ";
    cin >> klucz;

    def(tab, klucz);
    cout << "Po zaszyfrowaniu";
    cout << tab;
    
    def(tab, -klucz);
    cout << "Po rozszyfrowaniu";
    cout << tab;
}

void def(char tab[], int klucz)
{
    int dl;


    dl = strlen(tab);

    if (!( klucz >= -26 && klucz <= 26))
    {
        return;
    }

    if (klucz >= 0)
    {
        for (int i = 0; i < dl; i++) 
        {
            if (tab[i] + klucz <= 'z')
            {
                tab[i] += klucz;

            }
            else
            {
                tab[i] = tab[i] + klucz - 26;
            }
        }
    }
    else
    {
        for (int i = 0; i < dl; i++)
        {
            if (tab[i] + klucz >= 'a')
            {
                tab[i] += klucz;
            }
            else
            {
                tab[i] = tab[i] + klucz + 26;
            }
        }
    }

}

