#include <stdio.h>
#include<string.h>
#include<time.h>
struct Musteri {
    char isim[100];
    char adres[100];
    char telefonNumarasi[15];
};
struct Siparis {
    char anaYemek[50];
    char icecek[50];
    char tatli[50];
    char odemeYontemi[20];
    struct Musteri musteriBilgisi;
};

int main() {
	
    struct Siparis menu;
    
	printf("UYARI:Ana Yemek-Icecek-Tatli kategorilerinden secmek istemediginiz bir kategori varsa ilgili kisma'bos'yazmaniz yeterli olacaktir\n");
	printf("MENU\n");
    printf("I) ANA YEMEK\n");
	printf("------------------\n");
    printf("\tpizza=100 tl\n");
    printf("\tlahmacun=50 tl\n");
    printf("\tkebap=150 tl\n");
    printf("\ttavuklu pilav=50 tl\n");
    printf("\tet doner=60 tl\n");
    printf("\ttavuk doner=40 tl\n");
printf("II) ICECEK\n");
 printf("-------------------\n");
printf("\tayran=15 tl\n");
printf("\tmeyve suyu=12 tl\n");
printf("\tsalgam=25 tl\n");
printf("\tmaden suyu=9 tl\n");
printf("\tlimonata=20 tl\n");
printf("III) TATLI\n");
  printf("-------------------\n");
printf("\tsutlac=50 tl\n");
printf("\tbaklava=70 tl\n");
printf("\tkazandibi=40 tl\n");
printf("\ttulumba=30 tl\n");
printf("\tmeyveli pasta=40 tl\n");

char a;
 char b;
    printf("Ana Yemek: ");
	scanf("%s",menu.anaYemek);
	printf("Icecek: ");
    scanf("%s",menu.icecek);
	printf("Tatli: ");
    scanf("%s",menu.tatli);
    int anaYemekFiyat = 0, icecekFiyat = 0, tatliFiyat = 0;
    if (strcmp(menu.anaYemek, "pizza") == 0) {
        anaYemekFiyat = 100;
    } else if (strcmp(menu.anaYemek, "lahmacun") == 0) {
        anaYemekFiyat = 50;
    } else if (strcmp(menu.anaYemek, "kebap") == 0) {
        anaYemekFiyat = 150;
    } else if (strcmp(menu.anaYemek, "tavuklu pilav") == 0) {
        anaYemekFiyat = 50;
	}else if (strcmp(menu.anaYemek, "et doner") == 0) {
        anaYemekFiyat = 60;
    }else if (strcmp(menu.anaYemek, "tavuk doner") == 0) {
        anaYemekFiyat = 40;}
        
    

    if (strcmp(menu.icecek, "ayran") == 0) {
        icecekFiyat = 15;
    } else if (strcmp(menu.icecek, "meyve suyu") == 0) {
        icecekFiyat = 12;
    }else if (strcmp(menu.icecek, "salgam") == 0) {
        icecekFiyat = 25;
    }else if (strcmp(menu.icecek, "maden suyu") == 0) {
        icecekFiyat = 9;
    }else if (strcmp(menu.icecek, "limonata") == 0) {
        icecekFiyat = 20;}
		

    if (strcmp(menu.tatli, "sutlac") == 0) {
        tatliFiyat = 50;
    } else if (strcmp(menu.tatli, "baklava") == 0) {
        tatliFiyat = 70;
    } else if (strcmp(menu.tatli, "kazandibi") == 0) {
        tatliFiyat = 40;
   } else if (strcmp(menu.tatli, "tulumba") == 0) {
        tatliFiyat = 30;
       } else if (strcmp(menu.tatli, "meyveli pasta") == 0) {
        tatliFiyat = 40;}

    int toplam;
	toplam= anaYemekFiyat + icecekFiyat + tatliFiyat;
    printf("Toplam Fiyat: %d tl\n", toplam);
printf("-------------------\n");
printf("NOT: kapida odeme ucreti 20 tl'dir.\n");
printf("\t a-kapida odeme\n",'a');
printf("\t b-banka/kredi karti\n",'b');
    printf("Odeme Yontemi:");
    scanf("%s",menu.odemeYontemi);
    
    if(strcmp(menu.odemeYontemi,"b")==0){
    	printf("kart bilgilerini giriniz:\n");
    	scanf("%s",menu.odemeYontemi);
	}
	else if(strcmp (menu.odemeYontemi,"a")==0) {
		printf("siparis ucretine +20 tl ekleniyor.\n");
	}
   
	printf("Musteri Adi:\n");
    scanf("%s",menu.musteriBilgisi.isim);

    printf("Adres:\n");
    scanf("%s",menu.musteriBilgisi.adres);

    printf("Telefon Numarasi:");
    scanf("%s",menu.musteriBilgisi.telefonNumarasi);

    printf("\nSiparis Bilgileri:\n");
    printf("Musteri Adi:%s\n", menu.musteriBilgisi.isim);
    printf("Adres:%s\n", menu.musteriBilgisi.adres);
    printf("Telefon Numarasi:%s\n", menu.musteriBilgisi.telefonNumarasi);
    printf("Ana Yemek:%s\n", menu.anaYemek);
    printf("Icecek:%s\n",menu.icecek);
    printf("Tatli:%s\n", menu.tatli);
    printf("Odeme Yontemi:%s\n",menu.odemeYontemi);

    printf("\nSiparisiniz basarili bir sekilde alindi\n");
	int kod,tkod;
   srand(time(NULL));
    tkod=rand()%50;
    printf("teslimat kodu=%d\n",tkod);
    printf("kod:");
    scanf("%d",&kod);
    if(tkod==kod){
    	printf("siparisiniz teslim edilmistir.\nAfiyet olsun.");
	}
	else{
	}

return 0;
}

