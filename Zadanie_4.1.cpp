#include <iostream>
using namespace std;

int main() {
    int* wskaznik;
    int n;
    int max=0;
    
    cout << "Podaj rozmiar tablicy ";
    cin >> n;

    wskaznik = new int[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Podaj " << i + 1 << " element tablicy ";
        cin >> wskaznik[i];
        
        if (max < wskaznik[i])
        {
            max = wskaznik[i];
        }
        
    }
    cout << "Najwiekszy element tablicy " << max;

    delete[] wskaznik;

    return 0;
}