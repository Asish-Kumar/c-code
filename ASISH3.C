//Experiment-4:plot line using DDA algorithm
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   int x1 = 100, y1 = 100, x2 = 200, y2 = 200;
   int x_inc=0,y_inc=0;
   float x,y;
   int i;
   int length;

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
   length = ((((x2-x1) > (x1-x2))? (x2-x1) : (x1-x2)) > ((y2-y1) > (y1-y2))? (y2-y1):(y1-y2)) ?  ((x2-x1) > (x1-x2))? (x2-x1) : (x1-x2) : ((y2-y1) > (y1-y2))? (y2-y1):(y1-y2);
   x_inc = (x2-x1)/length;
   y_inc = (y2-y1)/length;
   x =x1+0.5;
   y = y1+0.5;
   for(i=0;i<length;i++){
     // printf("(%d,%d)",abs(x),abs(y));
     putpixel(abs(x),abs(y),10); //it should be putpixel(int(x),int(y),10);
     x += x_inc;
     y += y_inc;
   }
  // printf("%d",length);
   getch();
   closegraph();
   return 0;
}
