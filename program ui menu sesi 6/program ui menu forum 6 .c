/*
    Program UI menu sesi 6
    Dzaki Imam Fawwaz - 2702367486
    date    : 12 sep 2023 22.00
    version : 3.5
*/
/*
	Memberikan bukti bahwa getche lebih responsive dari pada scanf.
	
	menggunakan getche karena lebih responsive, 
	oleh karena itu user tidak perlu menekan enter setelah mengimput data.
	terdapat pada function toMainMenu dan toAddMenu.
	
	menggukan scanf, user perlu menekan enter setelah mengimput data,
	oleh karena itu fungsi scanf kurang responsive.
	terdapat pada pilih opsi di main menu dan juga di add menu.
*/

#include <stdio.h>
#include <conio.h>
/*
    head function yang diperlukan.
*/
void judulProgram();
void mainMenuFunc();
void addMenuFunc();
void toMainMenu();
void toAddMenu();
void clearScreen();

int main()
{
	// variable yang diperlukan
    char nama[100];
    int pilihan, add, mainMenu;
	// melakukan perulangan dengan while
    while (1)
    {
        judulProgram();
        mainMenuFunc();
        //menggunakan scanf
        printf("Pilih opsi (1-6) : ");
        scanf("%d", &pilihan);

        switch (pilihan)
        {
        case 1:
            while (1)
            {
                judulProgram();
                addMenuFunc();
				//menggunakan scanf
                printf("\nPilih opsi (1-5): ");
                scanf("%d", &add);

                switch (add)
                {
                case 1:
                    while (1)
                    {
                        judulProgram();
                        printf("\nFungsi NIM sedang dipanggil...\n");
                        toAddMenu();
                        break;// jika hasil dari function to add menu true, maka akan break dan keluar ke add menu 
                    }
                    break;
                case 2:
                    while (1)
                    {
                        judulProgram();
                        printf("\nFungsi tambahkan Nama sedang dipanggil...\n");
                        toAddMenu();
                        break;// jika hasil dari function to add menu true, maka akan break dan keluar ke add menu 
                    }
                    break;
                case 3:
                    while (1)
                    {
                        judulProgram();
                        printf("\nFungsi tambahkan Alamat sedang dipanggil...\n");
                        toAddMenu();
                        break;// jika hasil dari function to add menu true, maka akan break dan keluar ke add menu 
                    }
                    break;
                case 4:
                    while (1)
                    {
                        judulProgram();
                        printf("\nFungsi tambahkan NO HP sedang dipanggil...\n");
                        toAddMenu();
                        break;// jika hasil dari function to add menu true, maka akan break dan keluar ke add menu 
                    }
                    break;
                case 5:
                    printf("Kembali ke menu utama...\n");
                    break;// kembali ke main menu
                default:
                    printf("\033[1;31mInput invalid!!\033[0m\n");// validasi check
                }

                if (add == 5)
                {
                    break; // Keluar dari menu add dan kembali ke Menu Utama
                }
            }
            break;

        case 2:
            while (1)
            {
                judulProgram();
                printf("\nFungsi View sedang dipanggil...\n");
                toMainMenu();
                break;// jika hasil dari function to main menu true, maka akan break dan keluar ke main menu 
            }
            break;
        case 3:
            while (1)
            {
                judulProgram();
                printf("\nFungsi Delete sedang dipanggil...\n");
                toMainMenu();
                break;// jika hasil dari function to main menu true, maka akan break dan keluar ke main menu 
            }
            break;
        case 4:
            while (1)
            {
                judulProgram();
                printf("\nFungsi Update sedang dipanggil...\n");
                toMainMenu();
                break;// jika hasil dari function to main menu true, maka akan break dan keluar ke main menu 
            }
            break;
        case 5:
            while (1)
            {
                judulProgram();
                printf("\nFungsi Search sedang dipanggil...\n");
                toMainMenu();
                break;// jika hasil dari function to main menu true, maka akan break dan keluar ke main menu 
            }
            break;
         case 6:
            clearScreen(); 
            break;    
        case 7:
            printf("\n\033[1;32m==============================================\n");
            printf("\nTerimakasih sudah menggunakan Program DZAKI\n");
            printf("\n==============================================\033[0m\n");
            return 0;
        default:
            printf("\033[1;31mInput invalid!!\033[0m\n");// validasi check
            break;
        }
    }

    return 0;
}

// function untuk judul.
void judulProgram()
{
    printf("\n\033[1;34m========================================\n");
    printf("     SELAMAT DATANG DI PROGRAM DZAKI\n");
    printf("========================================\033[0m\n");
}

/*
    function main menu
*/
void mainMenuFunc()
{
    printf("Menu Utama\n\n");
    printf("1. Add\n");
    printf("2. View\n");
    printf("3. Delete\n");
    printf("4. Update\n");
    printf("5. Search\n");
    printf("6. Clear Terminal\n");
    printf("7. Quit\n");
}

/*
    function add menu
*/
void addMenuFunc()
{
    printf("\nMenu Add\n");
    printf("1. Tambahkan NIM\n");
    printf("2. Tambahkan Nama\n");
    printf("3. Tambahkan Alamat\n");
    printf("4. Tambahkan NO HP\n");
    printf("5. Menu Utama\n");
}

/*
function untuk balik ke main menu dari submenu1 (seperti pada menu add,dll).
menggunakan getche karena lebih responsive, oleh karena itu user tidak perlu menekan enter setelah mengimput data.
*/
void toMainMenu()
{
    int mainMenu;
    do
    {
        printf("\nKembali ke menu add 1 : ");
        mainMenu = getche();
        if (mainMenu == '1')
        {
            return; // Mengakhiri fungsi toMainMenu()
        }
        else
        {
            printf("\033[1;31m\nInput invalid!! masukkan angka '1'\033[0m\n");
        }
    } while (mainMenu != '1');
}

/*
function untuk balik ke add menu dari submenu2 (seperti pada menambahkan NIM).
menggunakan getche karena lebih responsive, oleh karena itu user tidak perlu menekan enter setelah mengimput data.
*/
void toAddMenu()
{
    int addMenu;
    do
    {
        printf("\nKembali ke menu add 1 : ");
        addMenu = getche();
        if (addMenu == '1')
        {
            return; // Mengakhiri fungsi toAddMenu()
        }
        else
        {
            printf("\n\033[1;31m\nInput invalid!! masukkan angka '1'\033[0m\n");
        }
    } while (addMenu != '1');
}
/*
	function untuk membersihkan terminal
*/
 void clearScreen()
{
    printf("\033[2J"); // Menggunakan ANSI escape code untuk membersihkan layar
    printf("\033[H");  // Mengatur kursor ke posisi awal (0,0)
}
