#include <stdio.h>
#include <string.h>
int main()
{
	char kDizi[100];
	int i, uzunluk, sesli, sessiz;
	
	printf("Metni giriniz: ");
	fgets(kDizi, sizeof kDizi, stdin);
	
	sesli = 0;
	sessiz = 0;
	uzunluk = strlen(kDizi);
	
	for (i = 0; i < uzunluk; i++)
	{
		if (kDizi[i] == 'a' || kDizi[i] == 'e' || kDizi[i] == 'i' || kDizi[i] == 'o' || kDizi[i] == 'u' || kDizi[i] == 'A' || kDizi[i] == 'E' || kDizi[i] == 'I' || kDizi[i] == 'O' || kDizi[i] == 'U')
			sesli++;
		else if((kDizi[i] >= 'a' && kDizi[i] <= 'z')||(kDizi[i]>= 'A' && kDizi[i] <= 'Z'))
			sessiz++;
	}
	
	printf("Sesli harf sayisi: %d\n", sesli);
	printf("Sessiz harf sayisi: %d", sessiz);
	
	return 0;
}
