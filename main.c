#include <stdio.h>
#include <stdlib.h>

int binarySearch(int dizi[],int bas,int son,int aranan){    //BÝNARY SEARCH YAPACAK FONKSÝYON 
 if (son >= bas) {      //SONDAKÝ ELEMAN BAÞTAKÝ ELEMANDAN BÜYÜKSE ÇALIÞIR
        int orta = (bas + son) / 2;   //ORTADAKÝ ELEMAN BELÝRLENÝR

        if (dizi[orta] == aranan) {  //ARANAN ELEMAN ORTADAKÝ ELEMANA EÞÝT MÝ DÝYE KONTROL EDÝLÝR
            return orta;    //EÞÝTSE ORTADAKÝ ELEMAN DEÐERÝ DÖNDÜRÜLÜR
        }
        if (dizi[orta] > aranan) {     //ARANAN ELEMAN ORTADAKÝ ELEMANDAN KÜÇÜKSE,
            return binarySearch(dizi, bas, orta - 1, aranan);   //ORTADAKÝ ELEMANIN SOLUNDAN DEVAM EDÝLEREK RECURSÝVE OLARAK FONKSÝYON ÇAÐIRILIR
        }
        return binarySearch(dizi, orta + 1, son, aranan); //ARANAN ELEMAN ORTADAKÝ ELEMANDAN BÜYÜKSE,ORTADAKÝ ELEMANIN SAÐINDAN DEVAM EDÝLEREK RECURSÝVE OLARAK FONKSÝYON ÇAÐIRILIR  
    }
    return -1;   //ELEMAN YOKSA -1 DEÐERÝ DÖNDÜRÜLÜR


}


void quickSort(int dizi[],int bas ,int son){    //SIRALAMA FONKSÝYONU 
	int i,j,pivot,temp;    //KULLANILCAK DEÐÝÞKENLER TANIMLANIR
	i=bas;  //BAÞTAKÝ ELEMAN Ý YE ATANDI
	j=son;  //SONDAKÝ ELEMAN J YE ATANDI 
	pivot=dizi[(i+j)/2];  //ORTADAKÝ ELEMAN BELÝRLENÝR
	do{
		while(dizi[i]<pivot)  //PÝVOTUN SOLUNDAKÝ SAYILARIN PÝVOTTAN KÜÇÜK OLDUÐUNU KONTROL ET
		i++;
		while(dizi[j]>pivot)  //PÝVOTUN SAÐINDAKÝ SAYILARIN PÝVOTTON BÜYÜK OLDUÐUNU KONTROL ET
		j--;
		
		if(i<=j){    //KARÞILIKLI YER DEÐÝÞTÝRÝLÝR.
			temp=dizi[i];
			dizi[i]=dizi[j];
			dizi[j]=temp;
			i++;
			j--;
		
		}
		
	}while(i<j);   //BAÞTAKÝ ELEMAN SONDAKÝ ELEMANDAN KÜÇÜK OLDUÐUNU KONTROL ET
	
	if(i<son)   //YENÝDEN PÝVOT BELÝRLENÝR VE SIRALANIR
	quickSort(dizi,i,son);
	
	if(bas<j)  //YENÝDEN PÝVOT BELÝRLENÝR VE SIRALANIR
	quickSort(dizi,bas,j);
	
}

int main() {
	
	int aranacak,sonuc;  //KULLANILACAK DEÐÝÞKENLER TANIMLANIR
	int dizi[]={4,8,3,84,47,76,9,24,68};
	
	printf("DIZI ELEMANLARI:  4 8 3 84 47 76 9 24 68");  //DÝZÝ ELEMANLARI EKRANA YAZDIRILIR
	
	printf("\nELEMANLAR SIRALANIYOR...");  
	//ÖNCE DÝZÝ ELEMANLARI SIRALANIR...
	quickSort(dizi,0,8);  //ELEMANLARI SIRALAR
	printf("\n");
	
	int i;
	 printf("Siralama sonrasi: ");
    for (i = 0; i < 9; i++) {   //SIRALAMA SONRASI EKRANA YAZDIRIR
        printf("%d ", dizi[i]);
    }
    printf("\n");
	
	
	
	printf("DIZIDE ARANACAK ELEMANI GIR:");
	scanf("%d",&aranacak);    //DÝZÝDE ARANACAK ELEMAN KULLANICIDAN ALINIR
	
	sonuc=binarySearch(dizi,0,8,aranacak);   //ELEMAN DÝZÝDE ARANIYOR VE DÖNDÜRÜLEN DEÐER SONUC DEÐÝÞKENÝNE ATANIR.
	
	if(sonuc!= -1)    //SONUC -1 DEÐÝLSE DÖNDÜRÜLEN Ý DEÐERÝ ÝNDEKS NUMARASINI VERÝR 
	printf("\tELEMAN %d. INDEKSTE BULUNDU ",sonuc);

	
	else   //SONUC -1 ÝSE ELEMAN YOKTUR
	printf("\tELEMAN BULUNAMADI.");
	
	
	return 0;
}
