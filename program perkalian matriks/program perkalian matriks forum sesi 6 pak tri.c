#include <stdio.h>

int main() {
	// membuat variable
    int matriks1[2][2] = {
						{1, 2},
						{3, 4}
						  };
    
    int matriks2[2][2] = {
						{5, 6}, 
						{0, 7}
						  };
    int hasil[2][2];
    int i, j, k;

    // membuat loop agar nilai  awal dari hasil = 0
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            hasil[i][j] = 0;
        }
    }

    			/* 
		membuat perkalian matriksnya,
		i berfungsi sebagai baris pada matriks1,
		j berfungsi sebagai kolom pada matriks2,
		k berfungsi sebagai pembuat matriksnya, 
		dia akan berupa kolom di matriks1 dan berupa baris di matriks2
				 */
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            for (k = 0; k < 2; k++) {
                hasil[i][j] += matriks1[i][k] * matriks2[k][j];
            }
        }
    }

    // Menampilkan hasil dari matriksnya
    printf("Hasil perkalian matriks:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", hasil[i][j]);
        }
        printf("\n");
    }

    return 0;
}

