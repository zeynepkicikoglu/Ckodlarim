#include <stdio.h>
#include <string.h>

int main(void)
{
  char cdizi[200];

  snprintf(cdizi, sizeof(cdizi), "%d.%s ", 1, "Karakter dizisi");
  snprintf(cdizi + strlen(cdizi), sizeof(cdizi) - strlen(cdizi), "ile %c %d %f %s ", 'A', 121, 75.89, " de�i�ken de�erlerinin");
  snprintf(cdizi + strlen(cdizi), sizeof(cdizi) - strlen(cdizi), "%s", "tek bir diziye aktar�lmas�");

  printf(cdizi);

  return 0;
}


// �OK BOYUTLU D�Z�LERE D�NAM�K BELLEK TAHS�S ETME
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
  char *pdizi[3];
  int id;

  //Bellek tahsisi 
  for (id=0; id<3; id++) {
       pdizi[id] = (char *) malloc(20 * sizeof(char));
  }

  // Dizi atama 
  for (id=0; id<3; id++) {
       strcpy(pdizi[id], "Karakter dizisi");
  }
  //Yazd�rma 
  for (id=0; id<3; id++) {
       printf ("%s\n", pdizi[id]);
  }

  // Bellek bo�altma 
  for (id=0; id<3; id++) {
       free(pdizi[id]);
  }

  return 0;
}  */
