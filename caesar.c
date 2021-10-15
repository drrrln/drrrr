#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, string argv[]) {
    int i = 0;
    int p = 0;
    int u = 1;
    int r = strlen(argv[1]);
    bool f = true;
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
    }
    else
    {
    while (p <= r - 1)
    {
        u = isdigit(argv[1][i]);
        i++;
        if (u == 0 || argc != 2)
        {
             p++;
             f = false;
        }
        else
        {
            p++;
        }
    }
    if (f == true)
    {
      int key = atoi(argv[1]);
      string plain = get_string ("plantext: ");
      printf("ciphertext: ");
      int m = strlen(plain);
      int j = 0;
      char plaint1 = (int)(plain[j]);
      bool v;
      bool l;
      while (j < m)
      {
      v = isalpha(plaint1);
      if (v != false)
      {
        l = islower(plaint1);
        if (l == true)
        {
      plaint1 = plaint1 + key;
      plaint1 = plaint1 % 26;
      if (plaint1 > 19 && plaint1 <= 25)
      {
      plaint1 = plaint1 + 78;
      }
      else if (plaint1 > 0 && plaint1 <= 18)
      {
      plaint1 = plaint1 + 104;
      }
      printf("%c", plaint1);
      j++;
      plaint1 = (int)(plain[j]);
        }
      else
      {
      plaint1 = plaint1 + key;
      plaint1 = plaint1 % 26;
      if (plaint1 < 13)
      {
      plaint1 = plaint1 + 78;
      }
      else if (plaint1 >= 13)
      {
      plaint1 = plaint1 + 52;
      }
      printf("%c", plaint1);
      j++;
      plaint1 = (int)(plain[j]);
      }
      }
      else {
      printf("%c", plaint1);
      j++;
      plaint1 = (int)(plain[j]);
      }
    }
}
      else
      printf("Usage: ./caesar key\n");
}
}








