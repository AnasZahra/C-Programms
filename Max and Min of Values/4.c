#include <stdio.h>
#include <limits.h>

int main(void){
	
	//char: -128-127
	//unsigned char: 0-255
	
	//short: min: -32768 max: 32767
	//unsigned short: min: 0 max: 65535
	
	//int: min: -2147483648 max: 2147483647
	//unsigned int: min: 0 max: 4294967295


    printf("char max: %d\n", CHAR_MAX);
    printf("char min: %d\n", CHAR_MIN);
    printf("--------------------------------------\n");

    printf("short max: %d\n", SHRT_MAX);
    printf("short min: %d\n", SHRT_MIN);
    printf("--------------------------------------\n");

    printf("int max: %d\n", INT_MAX);
    printf("int min: %d\n", INT_MIN);
    printf("--------------------------------------\n");

    printf("unsigned char max: %d\n", UCHAR_MAX);
    printf("--------------------------------------\n");

    printf("unsigned short max: %d\n", USHRT_MAX);
    printf("--------------------------------------\n");

    printf("unsigned int max: %u\n", UINT_MAX);
    printf("--------------------------------------\n");

    printf("int benoetigt %d Byte (%d Bit) Speicher\n",
      sizeof(int), sizeof(int) * CHAR_BIT);

    printf("short benoetigt %d Byte (%d Bit) Speicher\n",
      sizeof(short), sizeof(short) * CHAR_BIT);

    printf("char benoetigt %d Byte (%d Bit) Speicher\n",
      sizeof(char), sizeof(char) * CHAR_BIT);
      
      
      
    printf("\n\n======================================\n");
	printf("**************************************\n");
	printf("======================================\n");
	printf("**************************************\n");  
      
      
      
	// den maximalen und den minimalen Wert feststellt ohne limit.h
  	
  	Char();
  	unsignedChar();
	Short();
  	UnsignedShort();
	Int();
	UnsignedInt();

	
	
	
	
	
	

    return 0;


}



int Char(){	
    char min;  
    char max;  
    printf("\nChar max : ");
  	for (char i = 0; i < 200; i++){    
      if(i < 0){
 	    break;
      }
      max = i;   
      min = max + 1;
  	}
  	printf("%i\n",max);
  	printf("Char min : %i\n",min);
  	
}



int unsignedChar(){	
  	unsigned char min;
  	unsigned char max;   
    printf("\nUnsigned Char max : ");
  	for (unsigned char i = 1; i < 300; i++){    
      if(i == 0){
 	    break;
      }
      max = i;
	  min = max + 1;   
  	}
  	printf("%i\n",max);
  	printf("Unsigned Char min : %i\n",min);
  	
}

int Short(){	
  	short min;
  	short max;   
    printf("\nshort  max : ");
  	for (short i = 1; i < 33333; i++){    
      if(i <  0){
 	    break;
      }
      max = i;
	  min = max + 1;   
  	}
  	printf("%i\n",max);
  	printf("short  min : %i\n",min);
  	
}


int UnsignedShort(){	
  	unsigned short min;
  	unsigned short max;   
    printf("\nUnsigned Short  max : ");
  	for (unsigned short i = 1; i < 66000; i++){    
      if(i == 0){
 	    break;
      }
      max = i;
	  min = max + 1;   
  	}
  	printf("%i\n",max);
  	printf("Unsigned Short min : %i\n",min);
  	
}


int Int(){	
  	int min;
  	int max;   
    printf("\nInt  max : ");
  	for (int  i = 2147483600; i <  2147483700; i++){    
      if(i <  0){
 	    break;
      }
      max = i;
	  min = max + 1;   
  	}
  	printf("%d\n",max);
  	printf("Int  min : %d\n",min);
  	
}


int UnsignedInt(){	
  	unsigned int min;
  	unsigned int max;   
    printf("\nUnsigned int  max : ");
  	for (unsigned int i = 4294966000; i < 4294967400; i++){    
      if(i == 0){
 	    break;
      }
      max = i;
	  min = max + 1;   
  	}
  	printf("%u \n",max);
  	printf("Unsigned int min : %u \n",min);
  	
}









