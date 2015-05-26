#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isvowel(int c)
{
    switch (c){
		case 'a': ;
		case 'e': ;
		case 'i': ;
		case 'o': ;
		case 'u': return 1;
                  break;
        default : return 0;
    }
}
	
int count_vowels(char data[10][7], int n)
{
    int i,j,vc=0;
    
    for (i=0; i<=n; i=i+1)
        for (j=0; j<strlen(data[i]); j=j+1)
            if (isvowel(data[i][j]))
                vc = vc + 1;
	return vc;
}

int count_char(char data[10][7], int n)
{
    int i,cc=0;
    
    for (i=0; i<=n; i=i+1)
        cc = cc + strlen(data[i]);
        
	return cc;
}

void vowel_quash(char data[10][7], int n)
{
    int i;
    
    for (i=0; i<=strlen(data[n]); i=i+1)
        if (isvowel(data[n][i]))
            data[n][i] = '-';
}
        
int main(void)
{
	char data[20][7] = {"moider","cardon","labrum","sneest","lunoid",
	                    "axil","munj","furca","stingy","beode"};
	int i, numV, n, choice;
	char opt;
	
	n = 10;
	
	for (i=0; i<n; i=i+1)
	    printf("%d. %s\n", i+1, data[i]);
	    
	numV = count_vowels(data,n);
	
	printf("The words have %d vowels\n", numV);
	printf("There are %d total characters\n", count_char(data,n));

    printf("Vowels - quash them? (y/n): ");
	scanf("%c%*c", &opt);
	if (opt == 'y' || opt == 'Y')
	{
	    printf("Which word? (1-%d) :", n);
	    scanf("%d", &choice);
	    vowel_quash(data,choice-1);
	    printf("The quashed word is %s\n", data[choice-1]);
	}    
	

    return 0;
}