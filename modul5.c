#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int a=0,b,d,menu=0;
char c[16],nim['0'][64],nama['0'][64],kls['0'][64],dos['0'][64];

void Create(){
    b=1;
    d=0;
    system("cls");
    atas:
    printf("Input NIM Praktikan \t\t: ");
    fflush(stdin);
    scanf("%[^\n]s",nim[a]);
    fflush(stdin);
    if(strlen(nim[a]) > 10)
    {
        printf("NIM Anda Lebih Dari 10 Karakter\n");
        goto atas;
    }
    if(strlen(nim[a]) < 10)
    {
        printf("NIM Anda Kurang Dari 10 Karakter\n");
        goto atas;
    }
    if(nim[a] != 0)
    {
        for( d = 0; d < a; d++)
        {
            if(strcmp(nim[a], nim[d]) == 0)
            {
                printf("NIM Anda Sudah Terdaftar\n");
                goto atas;
            }
        }
    }
    printf("Input Nama Praktikan\t\t: ");
    scanf(" %[^\n]s",nama[a]);
    fflush(stdin);
    printf("Input kelas Pemrograman Dasar\t: ");
    scanf("%[^\n]s",kls[a]);
    fflush(stdin);
	printf("Input Nama Dosen Pengampu\t: ");
    scanf(" %[^\n]s",dos[a]);
    fflush(stdin);
    a++;
    }
void Show(){
	system("cls");
    printf("=== List Data ===\n");
	if(a == 0)
	{
		printf("Anda Belum Input Data");
	}
	else
	{
		b = 0;
		while(b <a){
            printf("===Show Data===\n");
	        printf("=== %d ===\n",b+1);		
	        printf("NIM Praktikan           : %s\n",nim[b]);
	        printf("Nama Praktikan          : %s\n",nama[b]);	
	        printf("Kelas Pemrograman Dasar : %s\n",kls[b]);	
	        printf("Dosen Pengampu          : %s\n",dos[b]);
            b++;
        }
    }
}
void Update(){
	system("cls");
    printf("Masukkan NIM yang Ingin di Update : ");
    scanf("%s",c);
    b=0;
    d=0;
    while(b<=a && d==0){
        if(strcmp(c,nim[b])==0){
            d++;
            printf("NIM Praktikan           : %s\n",nim[b]);
	        printf("Nama Praktikan          : %s\n",nama[b]);	
	        printf("Kelas Pemrograman Dasar : %s\n",kls[b]);	
	        printf("Dosen Pengampu          : %s\n",dos[b]);
            printf("-------------\n");
            printf("Masukkan Nim Praktikum Baru\t: ");fflush(stdin);
            scanf("%[^\n]s",nim[b]);
            printf("Masukkan Nama Baru\t\t: ");fflush(stdin);
            scanf("%[^\n]s",nama[b]);
            printf("Masukan kelas baru\t\t:");fflush(stdin);
            scanf("%[^\n]s",kls[b]);
            printf("Masukan Dosen Pengampu\t\t:");fflush(stdin);
            scanf("%[^\n]s",dos[b]);
        }
        b++;
    }
    if(d<1){
        printf("Data yang Akan Anda Update Mungkin Tidak Ada");
    }
}
void Delete(){
	system("cls");
    printf("Masukkan NIM yang Ingin di Delete : ");
    scanf("%s",c);
    b=1;
    d=0;
    while(b<=a && d==0){
        if(strcmp(c,nim[b])==0){
            d++;
        }
        b++;
    }
    if(d!=0){
        printf("Data yang Akan Anda Delete Mungkin Tidak Ada\n");
    }else{
        b--;
        printf("Data %s Berhasil di Delete\n",nama[b]);
        while(b<=a){
            strcpy(nim[b],nim[b+1]);
            strcpy(nama[b],nama[b+1]);
            strcpy(kls[b],kls[b+1]);
            strcpy(dos[b],dos[b+1]);
            b++;
        }
        a--;
		strcpy(nim[a],"");
    }
}
void Search(){
	system("cls");
    printf("Masukkan NIM yang Ingin di Cari : ");
    scanf("%s",c);
    b=0;
    d=0;
    while(b<=a && d==0){
        if(strcmp(c,nim[b])==0){
            d++;
        }
        b++;
    }
    if(d==0){
        printf("Data yang Akan Anda cari Mungkin Tidak Ada");
    }else{
      		b--;
            printf("NIM Praktikan           : %s\n",nim[b]);
	        printf("Nama Praktikan          : %s\n",nama[b]);	
	        printf("Kelas Pemrograman Dasar : %s\n",kls[b]);	
	        printf("Dosen Pengampu          : %s\n",dos[b]);
            b++;
    }
}
int main(){	
	char menu;
	on:
	printf("Sistem Pendaftaran Akun I-Lab Infotech\n");
	printf("===Pilihan Menu===\n");
	printf("1. Create data.\n");
	printf("2. Show data.\n");	
	printf("3. Update data.\n");
	printf("4. Delete data.\n");
	printf("5. Search data.\n");
	printf("6. Exit.\n");	
	
	printf("Silahkan pilih menu : ");fflush(stdin);
	scanf("%c", &menu );	
	
	switch(menu){
	case '1':
		Create();
		
		goto on;
	case '2':
		Show();
		
		goto on;
	case '3':
		Update();
		
		goto on;
	case '4':
		Delete();
		
		goto on;
	case '5':
		Search();
		
		goto on;
		
	case '6':
		break;
							
	default:
		goto on;
	}		
	
	return 0;
}