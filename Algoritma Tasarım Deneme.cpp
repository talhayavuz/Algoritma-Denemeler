
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

