#include <stdio.h>

/* Flag=12EZ */

char * dec(char * plaintxt, char key)
{
    char * ret = plaintxt;

    while(*plaintxt)
    {
      *plaintxt -= 3;
      *plaintxt ^=(key=(key*13)+37);
      plaintxt++;
    }
  return ret;
}

int main(c,v) char **v;
{
    char txt[] = {0x3C, 0xF7, 0xBF, 0x3C, 0xD9, 0x53, 0x49, 0x57, 0x33, 0x27, 0x68, 0xBA, 0x70, 0x28, 0x65, 0};
    int i;

      for (i=0;i<256;i++)
        printf("%d %s\n", i, dec(strdup(txt), i));
}
