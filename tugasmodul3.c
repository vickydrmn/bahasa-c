#include <stdio.h>

int main()
{
    int i=0;
    char Nama_Pelanggan[50];
    int harga, jumlah, total, jumlah_menu=3 ,total_akhir=0, bayar;
    char ulang='N';
    do
    {
    printf("\n===== SELAMAT DATANG DI WARUNG MAMA =====\n\n");
    printf("Silahkan pilih menu nya kak :\n\n");
    printf("Daftar   Menu           harga\n");
    printf(" 1.      Nasi Bakar    Rp.5.000,00\n");
    printf(" 2.      Nasi Jamur    Rp.5.000,00\n");
    printf(" 3.      Es Teh        Rp.2.000,00\n\n");
    printf("Nama Pelanggan : ");
    gets(Nama_Pelanggan);
    fflush(stdin);
    printf("Silahkan Masukkan Jumlah menu : ");
    scanf("%d",&jumlah_menu);
    printf("---------------------------------------\n");

    for(i = 1; i <= jumlah_menu; i++)
    {
        int menu;

        printf("Silahkan pilih menu ke-%d : ", i);
        scanf("%d", &menu);
      
    switch(menu)
        {
         case 1:
                printf("Qty : Nasi Bakar\n");
                printf("---------------------------------------\n");
                printf("Masukkan Jumlah Pesanan Nasi Bakar : ");
                scanf("%d",&jumlah);
                harga=5000;
                total=harga*jumlah;
                printf("==>Total Pembayaran\t: Rp. %d",total);
                total_akhir=total_akhir+total;
                printf("\n--------------------------------------\n");
            break;
         case 2:
                printf("Qty : Nasi Jamur\n");
                printf("---------------------------------------\n");
                printf("Masukkan Jumlah Pesanan Nasi Jamur : ");
                scanf("%d",&jumlah);
                harga=5000;
                total=harga*jumlah;
                printf("==>Total Pembayaran\t: Rp. %d",total);
                total_akhir=total_akhir+total;
                printf("\n-------------------------------------\n");
            break;
         case 3:
                printf("Qty : Es Teh\n");
                printf("---------------------------------------\n");
                printf("Masukkan Jumlah Pesanan Es Teh : ");
                scanf("%d",&jumlah);
                harga=6000;
                total=harga*jumlah;
                printf("==>Total Pembayaran\t: Rp. %d",total);
                total_akhir=total_akhir+total;
                printf("\n-------------------------------------\n");
            break;
        default:
				printf("Menu yang anda pilih tidak ada!\n");
		    break;
      }
    }
    printf("Grand Total\t: %d\n", total_akhir);
	printf("Tunai\t\t: ");
	scanf("%d", &bayar);

    if(bayar >= total_akhir)
	{
	    printf("Kembali\t\t: %d\n", bayar - total_akhir);
        printf("---------------------------------------\n");
	}
	else
	{
	    printf("\n");
	    printf("Maaf, uang anda kurang\n");
    }
    printf("Apakah Anda Ingin Melanjutkan Program? [Y/N] ");
	scanf(" %c", &ulang);
    if(ulang=='N'){
        break;
    }
    }
    while(1);
    return 0;
}