//Experiment-3:put pixel program
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

void smileyface();

int main(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   int x1=100,y1=100;

   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "C:/TC/BGI");

   /* read result of initialization */
   errorcode = graphresult();
   if (errorcode != grOk)  /* an error occurred */
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1); /* terminate with an error code */
   }
   putpixel(x1,y1,300);
   getch();
   closegraph();
   return 0;
}
