#include <stdio.h>

int main(){
	
	int nilai_boruto[3] = {85, 90, 86};
    int nilai_sarada[3] = {84, 90, 89};
	int a=3;
	int b;
	int i;

	printf("nilai boruto :\n");
	for(a = 0; a<3; a++){
    printf("ujian progdas ke-%d : %d\n",a+1,nilai_boruto[a]);
    }
	printf("nilai sarada :\n");
	for(b = 0; b<3; b++){
	printf("ujian progdas ke-%d : %d\n",b+1,nilai_boruto[b]);
	}
	printf("\nRekap Perbandingan Nilai Boruto dan Sarada : \n");
	for(i = 0; i<3; i++){
	if(nilai_boruto[i]>nilai_sarada[i]){
		printf("Hasilnya : 1\n");
	}
	else{
		printf("Hasilnya : 0\n");
	}
	}
	return 0;
}