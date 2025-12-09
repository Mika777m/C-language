#include <stdio.h>

void bubbleSort(int tableau[], int n) {
    int i, j, temp;
    // Parcours du tableau
    for (i = 0; i < n - 1; i++) {
        // Derniers éléments déjà triés à chaque boucle
        for (j = 0; j < n - 1 - i; j++) {
            // Si l'élément actuel est plus grand que le suivant → on échange
            if (tableau[j] > tableau[j + 1]) {
                temp = tableau[j];
                tableau[j] = tableau[j + 1];
                tableau[j + 1] = temp;
            }
        }
    }
}

int main() {
    int tableau[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(tableau) / sizeof(tableau[0]);

    bubbleSort(tableau, n);

    printf("Tableau trié : \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", tableau[i]);
    }

    return 0;
}
