//Experiment-5:plot line using Bresenham's algorithm
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
   int dx = x2-x1, dy = y2-y1;
   int p0 = 2*dy -dx;
   int i =0;
      /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "C:/TC/BGI");

   /* read result of initialization */
   errorcode = graphresult();
   if (errorcode != grOk)  /* an error occurred */
   {  printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1); /* terminate with an error code */
   }
   do{
   if(p0 < 0){
     x1=x1+1;
     putpixel(x1,y1,10);
     p0 += 2*dy;
   }
   else{
     x1 += 1;
     y1 += 1;
     putpixel(x1,y1,10);
     p0 += 2*dy -2*dx;
   }
   i++;
   }while(i<200);


  // printf("%d",length);
   getch();
   closegraph();
   return 0;
}
