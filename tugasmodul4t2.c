#include <stdio.h>

int main(){
    int pilih;
    int i;
    int j;
    int terkecil = 1000;
    int terbesar = -1000;

    printf("Pilih Ordo Matrix, 2x2 maka 2 atau 3x3 maka 3 : ");
	scanf("%d",&pilih);
    printf("\nMasukkan Angka Dalam Matrix : \n");

    int matrix[pilih][pilih];
    for(i=0;i<pilih;i++){
	    for( j=0;j<pilih;j++){
            printf("Masukkan Angka Pada Indeks [%d][%d] : ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    for(i=0;i<pilih;i++){
        for(j=0;j<pilih;j++){
            printf("\t%d",matrix[i][j]);
            if(matrix[i][j]>terbesar)
            {
                terbesar=matrix[i][j];
            }
            if(matrix[i][j]<terkecil) 
            { 
                terkecil=matrix[i][j];
            }
        }
        printf("\n");
    }
    printf("Hasilnya Adalah : \n");
    printf("Terbesar : %d",terbesar);
    printf("\tTerkecil : %d",terkecil);
    return 0;
}