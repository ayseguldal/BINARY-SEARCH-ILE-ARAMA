#include <stdio.h>
#include <stdlib.h>

int binarySearch(int dizi[],int bas,int son,int aranan){    //B�NARY SEARCH YAPACAK FONKS�YON 
 if (son >= bas) {      //SONDAK� ELEMAN BA�TAK� ELEMANDAN B�Y�KSE �ALI�IR
        int orta = (bas + son) / 2;   //ORTADAK� ELEMAN BEL�RLEN�R

        if (dizi[orta] == aranan) {  //ARANAN ELEMAN ORTADAK� ELEMANA E��T M� D�YE KONTROL ED�L�R
            return orta;    //E��TSE ORTADAK� ELEMAN DE�ER� D�ND�R�L�R
        }
        if (dizi[orta] > aranan) {     //ARANAN ELEMAN ORTADAK� ELEMANDAN K���KSE,
            return binarySearch(dizi, bas, orta - 1, aranan);   //ORTADAK� ELEMANIN SOLUNDAN DEVAM ED�LEREK RECURS�VE OLARAK FONKS�YON �A�IRILIR
        }
        return binarySearch(dizi, orta + 1, son, aranan); //ARANAN ELEMAN ORTADAK� ELEMANDAN B�Y�KSE,ORTADAK� ELEMANIN SA�INDAN DEVAM ED�LEREK RECURS�VE OLARAK FONKS�YON �A�IRILIR  
    }
    return -1;   //ELEMAN YOKSA -1 DE�ER� D�ND�R�L�R


}


void quickSort(int dizi[],int bas ,int son){    //SIRALAMA FONKS�YONU 
	int i,j,pivot,temp;    //KULLANILCAK DE���KENLER TANIMLANIR
	i=bas;  //BA�TAK� ELEMAN � YE ATANDI
	j=son;  //SONDAK� ELEMAN J YE ATANDI 
	pivot=dizi[(i+j)/2];  //ORTADAK� ELEMAN BEL�RLEN�R
	do{
		while(dizi[i]<pivot)  //P�VOTUN SOLUNDAK� SAYILARIN P�VOTTAN K���K OLDU�UNU KONTROL ET
		i++;
		while(dizi[j]>pivot)  //P�VOTUN SA�INDAK� SAYILARIN P�VOTTON B�Y�K OLDU�UNU KONTROL ET
		j--;
		
		if(i<=j){    //KAR�ILIKLI YER DE���T�R�L�R.
			temp=dizi[i];
			dizi[i]=dizi[j];
			dizi[j]=temp;
			i++;
			j--;
		
		}
		
	}while(i<j);   //BA�TAK� ELEMAN SONDAK� ELEMANDAN K���K OLDU�UNU KONTROL ET
	
	if(i<son)   //YEN�DEN P�VOT BEL�RLEN�R VE SIRALANIR
	quickSort(dizi,i,son);
	
	if(bas<j)  //YEN�DEN P�VOT BEL�RLEN�R VE SIRALANIR
	quickSort(dizi,bas,j);
	
}

int main() {
	
	int aranacak,sonuc;  //KULLANILACAK DE���KENLER TANIMLANIR
	int dizi[]={4,8,3,84,47,76,9,24,68};
	
	printf("DIZI ELEMANLARI:  4 8 3 84 47 76 9 24 68");  //D�Z� ELEMANLARI EKRANA YAZDIRILIR
	
	printf("\nELEMANLAR SIRALANIYOR...");  
	//�NCE D�Z� ELEMANLARI SIRALANIR...
	quickSort(dizi,0,8);  //ELEMANLARI SIRALAR
	printf("\n");
	
	int i;
	 printf("Siralama sonrasi: ");
    for (i = 0; i < 9; i++) {   //SIRALAMA SONRASI EKRANA YAZDIRIR
        printf("%d ", dizi[i]);
    }
    printf("\n");
	
	
	
	printf("DIZIDE ARANACAK ELEMANI GIR:");
	scanf("%d",&aranacak);    //D�Z�DE ARANACAK ELEMAN KULLANICIDAN ALINIR
	
	sonuc=binarySearch(dizi,0,8,aranacak);   //ELEMAN D�Z�DE ARANIYOR VE D�ND�R�LEN DE�ER SONUC DE���KEN�NE ATANIR.
	
	if(sonuc!= -1)    //SONUC -1 DE��LSE D�ND�R�LEN � DE�ER� �NDEKS NUMARASINI VER�R 
	printf("\tELEMAN %d. INDEKSTE BULUNDU ",sonuc);

	
	else   //SONUC -1 �SE ELEMAN YOKTUR
	printf("\tELEMAN BULUNAMADI.");
	
	
	return 0;
}
