#include <graphics.h>
int main()
{
    int gd=DETECT,gm;
    initgraph (&gd,&gm,(char*)"");
    line (150,150,250,300);
    getch();
    closegraph();
    return 0;
}