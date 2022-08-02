#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct data {
    char Nimprak[100];
    char Naprak[100];
    char Kelpem[100];
}input[100],change;
int a=0,z;

void Create()
{
    int d;
    int i;
    char NIM[100];
	char NAMA1[100];
	char kelas[100];
    FILE *f1,*f2;
    f1 = fopen("data.txt", "a+");
    f2 = fopen("data.txt", "r");
    while(fscanf(f2, "%[^;];%[^;];%[^\n]\n", input[a].Nimprak, input[a].Naprak, input[a].Kelpem)!= EOF){
        a++;
    }
    system("cls");
    atas:
    printf("Input NIM Praktikan\t : ");
    fflush(stdin);
    scanf("%[^\n]",input[a].Nimprak);
    strcpy(NIM,input[a].Nimprak);
    if(strlen(input[a].Nimprak) > 17)
    {
        printf("NIM Anda Lebih Dari 17 Karakter\n");
        goto atas;
    }
    if(strlen(input[a].Nimprak) < 17)
    {
        printf("NIM Anda Kurang Dari 17 Karakter\n");
        goto atas;
    }

    for(i = 0; i < 2; i++)
    {

        if(NIM[i] >= 'A' && NIM[i] <= 'Z')
        {
            continue;
        }
        printf("NIM Anda Terdapat spesial Karakter atau Huruf kecil\n");
        goto atas;
    }

    for(i = 2; i < 17; i++)
    {
        if(NIM[i] >= '0' && NIM[i] <= '9')
        {
            continue;
        }else{
    	printf("NIM Anda Terdapat spesial Karakter atau Huruf kecil\n");
        goto atas;
		}
    
    }
 
        for( d = 0; d < a; d++)
        {
            if(strcmp(input[a].Nimprak, input[d].Nimprak) == 0)
            {
                printf("NIM Anda Sudah Terdaftar\n");
                goto atas;
            }
        }
    
	printf("Input Nama Depan Praktikan\t : ");
    fflush(stdin);
    scanf("%[^\n]",input[a].Naprak);
	printf("Input Nama Belakang Praktikan\t : ");
    fflush(stdin);
    scanf("%[^\n]",NAMA1);
	strcat(input[a].Naprak,NAMA1);
	printf("Input Kelas Praktikan\t : ");
    fflush(stdin);
    scanf("%[^\n]",strupr(input[a].Kelpem));
    strcpy(kelas,input[a].Kelpem);
    
    	
    for (i = 0; kelas[i]!='\0'; i++) {
    if(kelas[i] >= 'a' && kelas[i] <= 'z') {
	kelas[i] = kelas[i] - 32;}}
	strcpy(input[a].Kelpem,kelas);
    
    f1 = fopen("data.txt", "a+");
    fprintf(f1, "%s;%s;%s\n", input[a].Nimprak, input[a].Naprak, input[a].Kelpem);
    fclose(f1);
    a=0;
}

void Show(){
	system("cls");
    printf("=== List Data ===\n");
	int b = 0;
	FILE *f = fopen("data.txt", "r");
	
	while(fscanf(f, "%[^;];%[^;];%[^\n]\n", input[b].Nimprak, input[b].Naprak, input[b].Kelpem) != EOF){
        printf("===Show Data===\n");
        printf("=== %d ===\n",b+1);		
        printf("NIM Praktikan           : %s\n",input[b].Nimprak);
        printf("Nama Praktikan          : %s\n",input[b].Naprak);	
        printf("Kelas Pemrograman Dasar : %s\n",input[b].Kelpem);	
        b++;
    }fclose(f);
}

void Update(){
	system("cls");
	FILE *f2,*f3;
    f2 = fopen("data.txt","r");
    while(fscanf(f2,"%[^;];%[^;];%[^\n]\n",input[a].Nimprak,input[a].Naprak,input[a].Kelpem) != EOF)
	{
     a++;
	}
    fclose(f2);	

	char c[100];
	
    printf("Masukkan NIM yang Ingin di Update : ");fflush(stdin);
    scanf("%s",c);
    int b=0;
    int d=0;
    while(b<=a && d==0){
        if(strcmp(c,input[b].Nimprak)==0){
            d++;
        }
        b++;
    }
    if(d<1){
        printf("Data yang Akan Anda Update Mungkin Tidak Ada");
    }else{
        b--;
         printf("NIM Praktikan           : %s\n",input[b].Nimprak);
        printf("Nama Praktikan          : %s\n",input[b].Naprak);	
        printf("Kelas Pemrograman Dasar : %s\n",input[b].Kelpem);
        printf("-------------\n");
        printf("Masukkan NIM Baru     : ");fflush(stdin);
        scanf(" %[^\n]",input[b].Nimprak);
        printf("Masukkan Nama Baru      : ");fflush(stdin);
        scanf("%[^\n]",input[b].Naprak);
        printf("Masukkan Kelas Baru  : ");fflush(stdin);
        scanf("%[^\n]",input[b].Kelpem);
     
        
	       
 	f3 = fopen("baru.txt","w");
 	
	for(z=0;z<a;z++){
	fprintf(f3,"%s;%s;%s\n",input[z].Nimprak,input[z].Naprak,input[z].Kelpem);}
	fclose(f3);
	remove("data.txt");
	rename("baru.txt","data.txt");    
    }
    a=0;
	}

void Delete(){
    system("cls");
    FILE *f1,*f2;
    f1 = fopen("db.txt","r");
    while(fscanf(f1, "%[^|]|%[^|]|%[^\n]\n", input[a].Nimprak, input[a].Naprak, input[a].Kelpem)!= EOF){
        a++;
    }
    fclose(f1);
    char hapus[50];
	printf("===Delete Data===\n");
	printf("Masukkan NIM yang ingin di Delete Data nya : ");
    fflush(stdin);
	scanf("%[^\n]",hapus);
	int c = 0;
	int d = 0;
	while(d<=a && c == 0){
	    if (strcmp(input[d].Nimprak,hapus)== 0){
	    c++;
	}
	    d++;	
	}
	if (c == 0){
        system("cls");
	    printf("NIM tidak tersedia\n");
	}else {
	    d--;		
	    while(d<=a){		
	    strcpy(input[d].Nimprak,input[d+1].Nimprak);
	    strcpy(input[d].Naprak,input[d+1].Naprak);
	    strcpy(input[d].Kelpem,input[d+1].Kelpem);		
	    d++;
	}a--;
	    strcpy(input[d].Nimprak,"");	
	    printf("\nData berhasil dihapus\n\n");

        f2 = fopen("new.txt","w");
        for(z=0;z<a;z++){
            fprintf(f2,"%s|%s|%s\n", input[a].Nimprak, input[a].Naprak, input[a].Kelpem);}
            fclose(f2);
            remove("db.txt");
            rename("new.txt","db.txt");	
	} 
    a=0;
}

void Search(){
    system("cls");
	char search[100];
	int i=0;
	int j=0;
    FILE *f = fopen("data.txt", "r");
	
	while(fscanf(f, "%[^;];%[^;];%[^\n]\n", input[a].Nimprak, input[a].Naprak, input[a].Kelpem) != EOF){
        a++;
    }
    fclose(f);
	printf("===Search Data===\n");	
	printf("Masukkan NIM Praktikan : ");fflush(stdin);
	scanf("%[^\n]",search);
	while(i<=a && j == 0){
	if (strcmp(input[i].Nimprak,search)==0){
    j++;	
    }
	i++;	
	}
	if (j==0){
        printf("NIM tidak tersedia");
	}else{
		i--;
	    printf("NIM	Praktikan       : %s\n",input[i].Nimprak);
	    printf("Nama Praktikan	    : %s\n",input[i].Naprak);	
	    printf("Kelas Pemrograman	: %s\n",input[i].Kelpem);	
    }
    a=0;
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

    default:
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
			
	}		
    return 0;
}