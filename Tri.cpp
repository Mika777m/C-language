#include <iostream>
using namespace std;

void bubbleSort(int tab[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (tab[j] > tab[j + 1]) {
                // Échanger
                int temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }
}

int main() {
    int tab[] = {64, 34, 25, 12, 22, 11, 200};
    int n = sizeof(tab) / sizeof(tab[0]);

    bubbleSort(tab, n);

    cout << "Tableau trié : ";
    for (int i = 0; i < n; i++) {
        cout << tab[i] << " ";
    }

    return 0;
}
