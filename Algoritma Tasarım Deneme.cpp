/*Main fonksiyonunda sabit olarak verilmi� olan buffer, d�n�� tipi char* olan ve char* tipinde parametre alan Func() isimli fonksiyona parametre olarak g�nderilecek. 
- G�nderilen Buffer�n Func() isimli fonksiyonda i�lenmesi bekleniyor. 
- Func() isimli fonksiyon g�nderilen buffer�n karakterlerini teker teker tarayacak, buffer�n en ba��ndan analiz etmeye ba�layan fonksiyon �u i�lemi yapacak ; 
- G�nderilen buffer�n ilk karakterinden ba�layarak tarayacak, ? E�er karakter bulundu�u konumdan itibaren tekrar etmemi� ise o karakter silinerek yerine �-� karakteri yaz�lacak. 
- E�er karakter daha sonras�nda tekrar etmi� ise o karakter aynen b�rak�lacak.*/
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

