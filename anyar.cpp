#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <windows.h>

int main()
{
    char menu;
    int nilai1, nilai2, hasil, i;
    menu:
    printf("\t\t\t\t\t\t\t -----------------------------------\n");
    printf("\t\t\t\t\t\t\t|         MENU PERHITUNGAN          |\n");
    printf("\t\t\t\t\t\t\t -----------------------------------\n\n");
    printf("\t\t\t\t\t\t\tNAMA : Moch Ridzqi Fauzi SIE-A\n");
    printf("\t\t\t\t\t\t\tNIM : 3411141110\n\n");
	
	printf("\t\t\t\t\t\t\t\t _________________\n");   
	printf("\t\t\t\t\t\t\t\t|MENU :           |\n");
	printf("\t\t\t\t\t\t\t\t _________________ \n");
    printf("\t\t\t\t\t\t\t\t|[1] PENJUMLAHAN  |\n");
    printf("\t\t\t\t\t\t\t\t|[2] PENGURANGAN  |\n");
    printf("\t\t\t\t\t\t\t\t|[3] PERKALIAN    |\n");
    printf("\t\t\t\t\t\t\t\t|[4] PEMBAGIAN    |\n");
    printf("\t\t\t\t\t\t\t\t|[5] PERPANGKATAN |\n");
    printf("\t\t\t\t\t\t\t\t|[6] FUNGSI       |\n");
    printf("\t\t\t\t\t\t\t\t|[7] KELUAR       |\n");
    printf("\t\t\t\t\t\t\t\t|_________________|\n");
    printf("\t\t\t\t\t\t\t\t PILIH MENU : ");
    scanf("%c",&menu);
    system("cls");
    if(menu == '1')
    {
        printf("\n [1] PENJUMLAHAN :\n");
        printf("     Masukan nilai1 : ");
        scanf("%d",&nilai1);
        printf("     Masukan nilai2   : ");
        scanf("%d",&nilai2);
        hasil = nilai1 + nilai2;
        printf("     Hasil                    : %d", hasil);
        getch();
	    system("cls");
	    goto menu;
    }
    else if(menu == '2')
    {
        printf("\n [2] PENGURANGAN :\n");
        printf("     Masukan nilai1 : ");
        scanf("%d",&nilai1);
        printf("     Masukan nilai2  : ");
        scanf("%d",&nilai2);
        hasil = nilai1 - nilai2;
        printf("     Hasil                    : %d", hasil);
        getch();
	    system("cls");
		goto menu;
    }
    else if(menu == '3')
    {
        printf("\n [3] PERKALIAN :\n");
        printf("     Masukan nilai1 : ");
        scanf("%d",&nilai1);
        printf("     Masukan nilai2   : ");
        scanf("%d",&nilai2);
        hasil = nilai1 * nilai2;
        printf("     Hasil                    : %d", hasil);
        getch();
		system("cls");
	    goto menu;
    }
    else if(menu == '4')
    {
        printf("\n [4] PEMBAGIAN :\n");
        printf("     Masukan nilai1 : ");
        scanf("%d",&nilai1);
        printf("     Masukan nilai2   : ");
        scanf("%d",&nilai2);
        hasil = nilai1 / nilai2;
        printf("     Hasil                    : %d", hasil);
        getch();
		system("cls");
		goto menu;
    } else if (menu == '5')
    {
     	printf("\n [5] PERPANGKATAN :\n");
	    printf("Masukan nilai1 : ");
        scanf("%d",&nilai1);
        printf("Masukan nilai2   : ");
        scanf("%d",&nilai2);
		printf("\n");
		hasil = pow(nilai1,nilai2);
		printf("%d ^ %d= %d", nilai1, nilai2,hasil);
		
		getch();
		system("cls");
		goto menu; 
	}

    else if(menu == '6')
    {
    	printf("\n [6] HITUNG F(X)");
		printf("Masukan nilai x : ");
        scanf("%d",&nilai1);
        printf("Masukan nilai y : ");
        scanf("%d",&nilai2);
        printf("Syarat %d >= %d <= %d \n",nilai1 , nilai1, nilai2);
        printf ("Berapa hasilnya jika f(x) = 2x^2 - 3x + 1 ? \n");
                            
			for (i=nilai1;i<=nilai2;i++){
			    printf ("\nJika x = %d \n", i);
	            hasil=((2 * (pow(i,2)) - ( 3 * i) + 1));
	            printf("\nf(%d)=2(%d)^2 - 3(%d) + 1= %d", i, i, i, hasil);
			}
						    
			getch();
			system("cls");
			goto menu;
	}else if (menu == '7'){
						    
      printf("babay");
    
    }
    getch();
    return 0;
}
