
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* bg_substr(const char *src, int pos, int len);

int main()
{
  char cdizi[] = "Karakter dizisi i�inde i�lem";

  /* 9 de�eri karakter dizisi i�inde 0'dan ba�layarak verilir ve 10.karaktere kar��l�k gelir. */
  char* substr = bg_substr(cdizi, 9, 6);

  printf("%s\n", substr);

  /* Fonksiyon i�inde tahsis edilen dinamik belle�i bo�altma */
  free(substr);

  return 0;
}

/* Karakter dizi i�inde ba�lang�� indeksi (pos) verilen belirli uzunlukta (len) dizi okuma */
char *bg_substr(const char *src, int pos, int len)
{
  char *dizi;
  int c;

  if ((pos+len)>strlen(src)) return 0;

  dizi = (char*) malloc(sizeof(char) * (len+1));
  if (dizi==NULL) return NULL;

  for (c=0; c<len; c++) {
       *(dizi+c) = *(src+pos);
       src++;
  }
  *(dizi+c) = '\0';

  return dizi;
}



/*



#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* bg_substr(const char *src, int pos, int len);

int main()
{
  char cdizi[] = "Karakter dizisi i�inde i�lem";

  // 9 de�eri karakter dizisi i�inde 0'dan ba�layarak verilir ve 10.karaktere kar��l�k gelir. 
  char* substr = bg_substr(cdizi, 9, 6);

  printf("%s\n", substr);

  // Fonksiyon i�inde tahsis edilen dinamik belle�i bo�altma 
  free(substr);

  return 0;
}

// Karakter dizi i�inde ba�lang�� indeksi (pos) verilen belirli uzunlukta (len) dizi okuma 
char* bg_substr(const char *src, int pos, int len)
{
  char *dizi;

  if ((pos+len)>strlen(src)) return 0;

  dizi = (char*) malloc(sizeof(char) * (len+1));
  if (dizi==NULL) return NULL;

  strncpy(dizi, (src+pos), len);
  dizi[len] = '\0';

  return dizi;
}


*/
