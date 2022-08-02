#include <stdio.h>


float hasilvolumetabung(float phi, int r, int t){
	float volumetabung;
	volumetabung = phi * r * r * t;
	return volumetabung;
}

float hasilluaspermukaantabung(float phi, int r, int t){
	float luaspermukaantabung;
	luaspermukaantabung = 2 * phi * r * (r + t);
	return luaspermukaantabung;
}
int hasilvolumebalok(int p, int l, int t){
	int volumebalok;
	volumebalok = p * l * t;
	return volumebalok;
}

float hasilluasdpermukaanbalok(int phi, int l, int t){
	float luaspermukaanbalok;
	luaspermukaanbalok  = 2 * (phi * l + phi * l + l * t);
	return luaspermukaanbalok;
}

int hasilvolumekubus(int s){
	int volumekubus;
	volumekubus = s * s * s;
	return volumekubus;
}

int hasilluaspermukaankubus(int s){
	int luaspermukaankubus;
	luaspermukaankubus = 6 * s * s;
	return luaspermukaankubus;
}

int main(){
	float phi = 3.14;
	int r;
	int tt;
	int tb;
	int p;
	int l;
	int s;
	float volumetabung;
	float luaspermukaantabung;
	int volumebalok;
	float luaspermukaanbalok;
	int volumekubus;
	int luaspermukaankubus;
		
	printf("Masukan Nilai Jari-Jari Tabung:");
	scanf("%d", &r);
	
	printf("Masukan Nilai Tinggi Tabung:");
	scanf("%d", &tt);
	
	volumetabung = hasilvolumetabung(phi, r, tt);
	printf("Hasil Volume Tabung = %.2f", volumetabung);
	printf ("\n");
	
	luaspermukaantabung = hasilluaspermukaantabung(phi, r, tt);
	printf("Hasil Luas Permukaan Tabung  = %.2f", luaspermukaantabung);
	printf ("\n\n");	
	
	printf("Masukan Nilai Panjang Balok:");
	scanf("%d", &p);
	
	printf("Masukan Nilai lebar Balok:");
	scanf("%d", &l);
	
	printf("Masukan Nilai Tinggi Balok:");
	scanf("%d", &tb);
	
	volumebalok = hasilvolumebalok(p, l, tb);
	printf("Hasil Volume Balok = %d", volumebalok);
	printf ("\n");
	
	luaspermukaanbalok = hasilluasdpermukaanbalok(phi, l, tb);
	printf("Hasil Luas Permukaan Balok = %.2f", luaspermukaantabung);
	printf ("\n\n");
		
	printf("Masukan Nilai SiSi Kubus:");
	scanf("%d", &s);
	
	volumekubus = hasilvolumekubus(s);
	printf("Hasil Volume Kubus = %d", volumekubus);
	printf ("\n");
	
	luaspermukaankubus = hasilluaspermukaankubus(s);
	printf("Hasil Luas Permukaan Kubus = %d", luaspermukaankubus);
	printf ("\n");
	
	return 0;
		
}

