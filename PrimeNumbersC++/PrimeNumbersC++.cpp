#include <iostream>
#include <iomanip>

#define MAX 120

//para declarar uma constante global... 
//constexpr int MAX = 120;
//const int MAX = 120;

void Multiple(int x, int Array[], int Size);
void Primes(int Array[], int Size);

using namespace std;
int main()
{
    setlocale(LC_ALL, "english");
    int n;
    cout << "Enter Value [Max 120]: ";
    cin >> n;
    int i{}, c{ 1 };
    int vector[MAX]{};
    while (i < n)
    {
        vector[i] = c;
        i++; c++;
    }
    for (int i{}; i < n; i++)
    {
        vector[i] % 10 == 0 ? cout << setw(3) << vector[i] << "\n" : cout << setw(3) << vector[i] << " ";
    }

    Multiple(2, vector, n);
    Multiple(3, vector, n);
    Multiple(5, vector, n);
    Multiple(7, vector, n);
    Primes(vector, n);

    system("PAUSE");
    return 0;
}

void Multiple(int x, int Array[], int Size)
{
    cout << "\nM" << x << ": [ ";
    for (int i{}; i < Size; i++)
        if (Array[i] % x == 0)
        {
            cout << Array[i] << " ";
        }
    cout << "]\n\n";
}

void Primes(int Array[], int Size)
{
    cout << "\nPrimes: [ ";
    for (int i{}; i < Size; i++)
        if (Array[i] != 1 && Array[i] % 2 != 0 || 2 == Array[i])
        {
            if (Array[i] % 3 != 0 || 3 == Array[i])
            {
                if (Array[i] % 5 != 0 || 5 == Array[i])
                {
                    if (Array[i] % 7 != 0 || 7 == Array[i])
                    {
                        cout << Array[i] << " ";
                    }
                }
            }
        }
    cout << "]\n\n";
}