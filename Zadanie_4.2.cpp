#include <iostream>
using namespace std;

int main() 
{
    int* wskaznik;
    int n;

    cout << "Podaj rozmiar tablicy ";
    cin >> n;

    wskaznik = new int[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Podaj " << i + 1 << " element tablicy ";
        cin >> wskaznik[i];
    }

        int max_licz = 0;
        int max_czestotliwosc;

        for (int i = 0; i < n; i++) 
        {
            int licz = 0;
            for (int j = 0; j < n; j++) 
            {
                if (wskaznik[i] == wskaznik[j]) 
                {
                    licz++;
                }
            }

            if (licz > max_licz) 
            {
                max_licz = licz;
                max_czestotliwosc = wskaznik[i];
            }
        }
        cout << endl << "Najczesciej pojawiajacy sie w tablicy element: " << max_czestotliwosc << endl;

    delete[] wskaznik;

    return 0;
}