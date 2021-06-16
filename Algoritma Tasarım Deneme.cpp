/*Main fonksiyonunda sabit olarak verilmiþ olan buffer, dönüþ tipi char* olan ve char* tipinde parametre alan Func() isimli fonksiyona parametre olarak gönderilecek. 
- Gönderilen Bufferýn Func() isimli fonksiyonda iþlenmesi bekleniyor. 
- Func() isimli fonksiyon gönderilen bufferýn karakterlerini teker teker tarayacak, bufferýn en baþýndan analiz etmeye baþlayan fonksiyon þu iþlemi yapacak ; 
- Gönderilen bufferýn ilk karakterinden baþlayarak tarayacak, ? Eðer karakter bulunduðu konumdan itibaren tekrar etmemiþ ise o karakter silinerek yerine ‘-’ karakteri yazýlacak. 
- Eðer karakter daha sonrasýnda tekrar etmiþ ise o karakter aynen býrakýlacak.*/
#include <stdio.h>
#include <stdint.h>
#include <string.h>


char* Func( char* Text )
{
	int kontrol [20] = {0};
	int i, j, k;
	
	for (i=0; i<20; i++)
	{
		for (j=i+1; j<20; j++)
		{
			if( Text[i] == Text[j] )
			{
				kontrol [i] = 1;
			}
		}
	}
	for (k=0; k < 20; k++)
	{
		if(kontrol [k] != 1 )
		{
			Text [k] = '-';	
		}
	}
	return Text;
}

int main()
{
	char ucTxBuff[ 20 ] = "SSBAGHSAGGHHMAKKTKHL";
	
	char* ucRxBuff;
	
	printf("  Transmited Buffer  -> %s\n",ucTxBuff);
	
	ucRxBuff = Func( ucTxBuff );
	
	printf("  Returned Buffer    -> %s\n",ucRxBuff);
	
	return 0;
}

