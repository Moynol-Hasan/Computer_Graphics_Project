#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd,&gm, "");


    // CODE FOR SKY

    rectangle(0,230,1365,0);
    setfillstyle(SOLID_FILL,LIGHTCYAN);
    floodfill(1,1,WHITE);

    // CODE FOR SUN
    circle(350,50,30);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(351,51,WHITE);

    //CODE FOR GRASS

    rectangle(0,430,1365,230);
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    floodfill(1,231,WHITE);


    //CODE FOR BIG BUILDING

    int bigbuilding[]= {500,350,800,350, 800,10,500,10,500,350};
    setcolor ( WHITE ) ;
    setfillstyle ( SOLID_FILL,LIGHTBLUE ) ;
    fillpoly (5, bigbuilding );


    int windowright1[]= {530,40,610,40,610,110,530,110,530,40};
    setfillstyle ( SOLID_FILL, WHITE ) ;
    fillpoly(5,windowright1);

    int windowright2[]= {530,130,610,130,610,200,530,200,530,130};
    setfillstyle ( SOLID_FILL, WHITE ) ;
    fillpoly(5,windowright2);

    int windowleft1[]= {690,40,770,40,770,110,690,110,690,40};
    setfillstyle ( SOLID_FILL, WHITE ) ;
    fillpoly(5,windowleft1);

    int windowleft2[]= {690,130,770,130,770,200,690,200,690,130};
    setfillstyle ( SOLID_FILL, WHITE ) ;
    fillpoly(5,windowleft2);

    int door[]= {610,240,690,240,690,350,610,350,610,240};
    setfillstyle ( SOLID_FILL, LIGHTGRAY ) ;
    fillpoly(5,door);


    //  CODE FOR RIGHT SMALL BUILDING

    setcolor(WHITE);
    int smallbuilding1[]= {100,100,400,100,400,320,100,320,100,100};
    setfillstyle(SOLID_FILL,BROWN);
    fillpoly(5,smallbuilding1);

    int smallrightwindow1[]= {130,120,200,120,200,190,130,190,130,120};
    setfillstyle(SOLID_FILL,WHITE);
    fillpoly(5,smallrightwindow1);

    int smallleftwindow1[]= {300,120,370,120,370,190,300,190,300,120};
    setfillstyle(SOLID_FILL,WHITE);
    fillpoly(5,smallleftwindow1);

    int smalldoor1[]= {210,220,290,220,290,320,210,320,210,220};
    setfillstyle(SOLID_FILL,LIGHTGRAY);
    fillpoly(5,smalldoor1);


    // CODE FOR LEFT SMALL BUILDING

    int smallbuilding2[]= {900,100,1200,100,1200,320,900,320,900,100};
    setfillstyle(SOLID_FILL,BROWN);
    fillpoly(5,smallbuilding2);

    int smallrightwindow2[]= {930,120,1000,120,1000,190,930,190,930,120};
    setfillstyle(SOLID_FILL,WHITE);
    fillpoly(5,smallrightwindow2);

    int smallleftwindow2[]= {1100,120,1170,120,1170,190,1100,190,1100,120};
    setfillstyle(SOLID_FILL,WHITE);
    fillpoly(5,smallleftwindow2);

    int smalldoor2[]= {1010,220,1090,220,1090,320,1010,320,1010,220};
    setfillstyle(SOLID_FILL,LIGHTGRAY);
    fillpoly(5,smalldoor2);



    // CODE FOR TREE
    int tree[]={1275, 300,1295,300,1285,180,1275,300};
    setfillstyle(SOLID_FILL,BROWN);
    fillpoly(4,tree);

    setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    pieslice(1285,195,0,360,30);

    setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    pieslice(1265,210,0,360,25);

    setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    pieslice(1310,210,0,360,25);



    // BORDDER FOR ROAD

    setcolor(WHITE);
    rectangle(0,600,1365,430);


    //ROAD DIVIDER

    rectangle(90,520,170,510);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(91,511,WHITE);


    rectangle(280,520,360,510);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(281,511,WHITE);


    rectangle(470,520,550,510);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(471,511,WHITE);


    rectangle(660,520,740,510);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(661,511,WHITE);


    rectangle(850,520,930,510);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(851,511,WHITE);


    rectangle(1040,520,1120,510);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(1041,511,WHITE);


    rectangle(1230,520,1310,510);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(1231,511,WHITE);


    // GRASS

    setcolor(WHITE);
    rectangle(0,750,1365,600);
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    floodfill(1,611,WHITE);



    int cnt=0;
    while(1)
    {
        int backwardA=1800,z=0;
        for (int i = -200; i <= 1800; i+=10)
        {
            int k=12,m=100,n=12,l=i;



            //START CODE FOR CAR 1

            if(cnt%2==0)
                setcolor(LIGHTBLUE);
            else
                setcolor(WHITE);

            line(0 + i, 450+ k, 210 + i, 450+ k);
            line(50 + i, 450+ k, 75 + i, 420+ k);
            line(75 + i, 420+ k, 150 + i, 420+ k);
            line(150 + i, 420+ k, 165 + i, 450+ k);
            line(0 + i, 450+ k, 0 + i, 480+ k);
            line(210 + i, 450+ k, 210 + i, 480+ k);

            circle(65 + i, 480+ k, 15);
            circle(65 + i, 480+ k, 2);

            circle(145 + i, 480+ k, 15);
            circle(145 + i, 480+ k, 2);


            line(0 + i, 480+ k, 50 + i, 480+ k);

            line(80 + i, 480+ k, 130 + i, 480+ k);

            line(210 + i, 480+ k, 160 + i, 480+ k);

            //END CODE FOR CAR 1



            //START CODE FOR CAR 2

            if(cnt%2==0)
                i-=500;
            else
                i-=700;

            if(cnt%2==0)
                setcolor(YELLOW);
            else
                setcolor(CYAN);

            line(0 + i, 450+ k, 210 + i, 450+ k);
            line(50 + i, 450+ k, 75 + i, 420+ k);
            line(75 + i, 420+ k, 150 + i, 420+ k);
            line(150 + i, 420+ k, 165 + i, 450+ k);
            line(0 + i, 450+ k, 0 + i, 480+ k);
            line(210 + i, 450+ k, 210 + i, 480+ k);


            circle(65 + i, 480+ k, 15);
            circle(65 + i, 480+ k, 2);

            circle(145 + i, 480+ k, 15);
            circle(145 + i, 480+ k, 2);

            line(0 + i, 480+ k, 50 + i, 480+ k);

            line(80 + i, 480+ k, 130 + i, 480+ k);

            line(210 + i, 480+ k, 160 + i, 480+ k);

            i=l;


            //END CODE FOR CAR 2



            //START CODE FOR CAR 3

            k=m;
            if(cnt%2==0)
                setcolor(CYAN);
            else
                setcolor(LIGHTMAGENTA);
            i=backwardA;

            line(0 + i, 450+ k, 210 + i, 450+ k);
            line(50 + i, 450+ k, 75 + i, 420+ k);
            line(75 + i, 420+ k, 150 + i, 420+ k);
            line(150 + i, 420+ k, 165 + i, 450+ k);
            line(0 + i, 450+ k, 0 + i, 480+ k);
            line(210 + i, 450+ k, 210 + i, 480+ k);

            circle(65 + i, 480+ k, 15);
            circle(65 + i, 480+ k, 2);

            circle(145 + i, 480+ k, 15);
            circle(145 + i, 480+ k, 2);

            line(0 + i, 480+ k, 50 + i, 480+ k);

            line(80 + i, 480+ k, 130 + i, 480+ k);

            line(210 + i, 480+ k, 160 + i, 480+ k);

            i=l;
            k=n;

            //END CODE FOR CAR 3


            // //START CODE FOR  CLOUD
            i+=790-(z+10);
            setcolor(WHITE);
            setfillstyle(SOLID_FILL,WHITE);
            pieslice(320+i,50,0,180,40);

            setcolor(WHITE);
            setfillstyle(SOLID_FILL,WHITE);
            pieslice(280+i,50,0,180,30);

            setcolor(WHITE);
            setfillstyle(SOLID_FILL,WHITE);
            pieslice(360+i,50,0,180,30);

            setcolor(WHITE);
            setfillstyle(SOLID_FILL,WHITE);
            pieslice(360+i,50,180,360,30);

            setcolor(WHITE);
            setfillstyle(SOLID_FILL,WHITE);
            pieslice(280+i,50,180,360,30);


            setfillstyle(SOLID_FILL,WHITE);
            pieslice(320+i,50,180,360,40);
            i-=790-(z+10);
            //END CODE FOR CLOUD

            delay(100);



            //START CODE FOR CAR 1

            setcolor(BLACK);


            line(0 + i, 450+ k, 210 + i, 450+ k);
            line(50 + i, 450+ k, 75 + i, 420+ k);
            line(75 + i, 420+ k, 150 + i, 420+ k);
            line(150 + i, 420+ k, 165 + i, 450+ k);
            line(0 + i, 450+ k, 0 + i, 480+ k);
            line(210 + i, 450+ k, 210 + i, 480+ k);

            circle(65 + i, 480+ k, 15);
            circle(65 + i, 480+ k, 2);

            circle(145 + i, 480+ k, 15);
            circle(145 + i, 480+ k, 2);

            line(0 + i, 480+ k, 50 + i, 480+ k);

            line(80 + i, 480+ k, 130 + i,480+ k);

            line(210 + i, 480+ k, 160 + i, 480+ k);

            //END CODE FOR CAR 1



            //START CODE FOR CAR 2

            if(cnt%2==0)
                i-=500;
            else
                i-=700;


            setcolor(BLACK);

            line(0 + i, 450+ k, 210 + i, 450+ k);
            line(50 + i, 450+ k, 75 + i, 420+ k);
            line(75 + i, 420+ k, 150 + i, 420+ k);
            line(150 + i, 420+ k, 165 + i, 450+ k);
            line(0 + i, 450+ k, 0 + i, 480+ k);
            line(210 + i, 450+ k, 210 + i, 480+ k);

            circle(65 + i, 480+ k, 15);
            circle(65 + i, 480+ k, 2);

            circle(145 + i, 480+ k, 15);
            circle(145 + i, 480+ k, 2);

            line(0 + i, 480+ k, 50 + i, 480+ k);

            line(80 + i, 480+ k, 130 + i,480+ k);

            line(210 + i, 480+ k, 160 + i, 480+ k);

            i=l;


            //END CODE FOR CAR 2



            //START CODE FOR CAR 3

            k=m;

            setcolor(BLACK);
            i=backwardA;

            line(0 + i, 450+ k, 210 + i, 450+ k);
            line(50 + i, 450+ k, 75 + i, 420+ k);
            line(75 + i, 420+ k, 150 + i, 420+ k);
            line(150 + i, 420+ k, 165 + i, 450+ k);
            line(0 + i, 450+ k, 0 + i, 480+ k);
            line(210 + i, 450+ k, 210 + i, 480+ k);

            circle(65 + i, 480+ k, 15);
            circle(65 + i, 480+ k, 2);

            circle(145 + i, 480+ k, 15);
            circle(145 + i, 480+ k, 2);

            line(0 + i, 480+ k, 50 + i, 480+ k);

            line(80 + i, 480+ k, 130 + i, 480+ k);

            line(210 + i, 480+ k, 160 + i, 480+ k);
            i=l;

            backwardA-=10;

            //END CODE FOR CAR 3


            // START CODE FOR CLOUD

            i+=790-(z+10);

            setcolor(LIGHTCYAN);
            setfillstyle(SOLID_FILL,LIGHTCYAN);
            pieslice(320+i,50,0,180,40);

            setcolor(LIGHTCYAN);
            setfillstyle(SOLID_FILL,LIGHTCYAN);
            pieslice(280+i,50,0,180,30);

            setcolor(LIGHTCYAN);
            setfillstyle(SOLID_FILL,LIGHTCYAN);
            pieslice(360+i,50,0,180,30);

            setcolor(LIGHTCYAN);
            setfillstyle(SOLID_FILL,LIGHTCYAN);
            pieslice(360+i,50,180,360,30);

            setcolor(LIGHTCYAN);
            setfillstyle(SOLID_FILL,LIGHTCYAN);
            pieslice(280+i,50,180,360,30);

            setcolor(LIGHTCYAN);
            setfillstyle(SOLID_FILL,LIGHTCYAN);
            pieslice(320+i,50,180,360,40);


            i-=790-(z+10);

            z+=9;
            //END CODE FOR CLOUD

        }
        cnt++;

    }

    getch();

    closegraph();
}
