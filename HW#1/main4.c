#include <stdio.h>

void change_ (char a[])
{
  int x = 6, y = 1, z = 0, h = 0;
  for (int i = 0; i < x; i++){
      if (a[i] == 45){
	  y = -1;
      }
      if (a[i] > 48 && a[i] < 60){
          z = h*10 + a[i] - 48;
          h = z;
      }
  }
          z = z*y;
          printf ("%d\n", z);
}

int main (){
  char a[] = "-99abc";
  char b[] = "99acbc";
  char c[] = "ac-99bc";
  
  change_ (a), change_ (b), change_ (c);

  return 0;
}
