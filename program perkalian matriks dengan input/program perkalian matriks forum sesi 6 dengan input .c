#include <stdio.h>
#include <stdbool.h>

int main() {
	// membuat variable 
    int matriks1[2][2];
    int matriks2[2][2];
    int hasil[2][2];
    int i, j, k;

     // meminta pengguna untuk memasukkan elemen matriks1
    printf("Masukkan elemen-elemen matriks pertama (2x2, maksimal dua angka per elemen):\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
        	// menggunakan boolean jika false / 0, maka akan turun dan menampilkan pesan error
            int input;
            if (scanf("%d", &input) != 1 || input < 0 || input > 99) {  
                printf("\x1b[31mError: Input harus berupa bilangan dari (0 - 99).\x1b[0m\n\n");
                return 1;
            }
            matriks1[i][j] = input;
        }
    }

    // meminta pengguna untuk memasukkan elemen matriks2
    printf("Masukkan elemen-elemen matriks kedua (2x2, maksimal dua angka per elemen):\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
        	// menggunakan boolean jika false / 0, maka akan turun dan menampilkan pesan error
            int input;
            if (scanf("%d", &input) != 1 || input < 0 || input > 99) {
                 printf("\x1b[31mError: Input harus berupa bilangan dari (0 - 99).\x1b[0m\n\n");
                return 1;
            }
            matriks2[i][j] = input;
        }
    }

    // membuat agar value hasil berawal dari 0
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

    // output hasil perkalian matriks
    printf("Hasil perkalian matriks:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", hasil[i][j]);
        }
        printf("\n");
    }

    return 0;
}

