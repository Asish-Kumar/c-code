#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

void smileyface();

int main(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   int midx, midy;
   int radius = 100;
   int i;

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
 /*
   midx = getmaxx() / 2;
   midy = getmaxy() / 2;
   setcolor(getmaxcolor());

   // draw the circle
   for(i=0;i<200;i++){

     circle((midx+i), midy, radius);
     delay(50);
     clrscr();
   }
   // clean up
   closegraph(); */
  // smileyface();
  car();
   getch();
   closegraph();
   return 0;
}
/*
void smileyface(){
int i;
int midx = getmaxx() /2;
int midy = getmaxy() /2;
for(i=0;i<200;i++){
 circle(midx,midy,100);
 circle(midx-50,midy-30,10);
 circle(midx+50,midy-30,10);
 line(midx,midy,midx,midy+30);

  arc(midx,midy,240,300,60);
  line(midx-30,midy+53,midx-30,midy+95);
  line(midx+30,midy+53,midx+30,midy+95);

 clrscr();
 delay(60);
 arc(midx,midy,288,253,100);
 circle(midx-50,midy-30,10);
 circle(midx+50,midy-30,10);
 line(midx,midy,midx,midy+30);

  arc(midx,midy+20,253,288,100);
  arc(midx,midy+20,240,300,60);
  arc(midx,midy,240,300,60);
  line(midx-30,midy+53,midx-30,midy+95+20);
  line(midx+30,midy+53,midx+30,midy+95+20);
}
}*/

car(){
    int x = 69, i=0;
    while(i<400){
    clrscr();
    setbkcolor(255);
    line(x,328,x+100,328);   //line1
    line(x-30,348,x,328);    //line2
    line(x+100,328,x+130,348);  //line3
    line(x-40,348,x+160,348);   //line4
    line(x-40,348,x-40,378);    //line5
    line(x+160,348,x+160,378);  //line6
    line(x-40,378,x-10,378);    //line7
    line(x+20,378,x+80,378);   //line8
    line(x+110,378,x+160,378);  //line9
    arc(x+5,378,0,179,15);
    arc(x+95,378,0,179,15);
    circle(x+5,378,13);
    circle(x+95,378,13);
    i++;
    delay(20);

    x+=2;
    }
}