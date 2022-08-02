#include <stdio.h>

int main(){

    int angka1[2][2];
    int angka2[3][3];
    int pilih;
    int i;
    int j;
    int terkecil = 1000;
    int terbesar = -1000;

    printf("Pilih Ordo Matrix, 2x2 maka 2 atau 3x3 maka 3 : ");
	scanf("%d",&pilih);

    if(pilih == 2){
    printf("Masukkan Angka Dalam Matrix : \n");
    for(i=0;i<2;i++){
	    for(j=0;j<2;j++){
            printf("Masukkan Angka Pada Indeks [%d][%d] : ",i,j);
            scanf("%d",&angka1[i][j]);
            }
            }
            printf("Hasilnya Adalah : \n");
			for(i=0;i<2;i++){
				for(j=0;j<2;j++){
					printf("\t%d",angka1[i][j]);
					if(angka1[i][j]>terbesar)
                    {
						terbesar=angka1[i][j];
					}
				    if(angka1[i][j]<terkecil) 
                    { 
						terkecil=angka1[i][j];
					}
				}
				printf("\n");
			}
    printf("Terbesar : %d",terbesar);
    printf("\tTerkecil : %d",terkecil);
    }
    else if (pilih == 3)
    {
    printf("Masukkan Angka Dalam Matrix : \n");
    for(i=0;i<3;i++){
	    for(j=0;j<3;j++){
            printf("Masukkan Angka Pada Indeks [%d][%d] : ",i,j);
            scanf("%d",&angka2[i][j]);
            }
            }
            printf("Hasilnya Adalah : \n");
			for(i=0;i<3;i++){
				for(j=0;j<3;j++){
					printf("\t%d",angka2[i][j]);
					if(angka2[i][j]>terbesar)
                    {
						terbesar=angka2[i][j];
					}
					if(angka2[i][j]<terkecil)
                    {
						terkecil=angka2[i][j];
					}
				}
				printf("\n");
			}
    printf("Terbesar : %d   ",terbesar);
    printf("Terkecil : %d",terkecil);
    }
    return 0;
}