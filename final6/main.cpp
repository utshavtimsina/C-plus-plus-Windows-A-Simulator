#include<iostream>
#include <graphics.h >
#include <windows.h >
#include <conio.h >
#include <string.h >
#include <stdlib.h >
#include <time.h >
#include <stdio.h >
#include <math.h >

  using namespace std;
int backgroundcheck = 1;
inline void background();
inline void calender();
inline void startup1();
inline void startmenue();
inline void startup2();
inline void clockfinal();
inline void shortcuts();
inline void browser();
inline void filenotfound();

void inline filenotfound() {
  DWORD a1 = GetSystemMetrics(SM_CXSCREEN);
  DWORD a2 = GetSystemMetrics(SM_CYSCREEN);
  POINT cursorposition;
  int i = 1;
  while (i == 1) {
    setcolor(2);
    rectangle(0, 310, 1500, 500);
    setfillstyle(1, 7);
    bar(0, 311, 1499, 499);
    setcolor(BLACK);
    setbkcolor(7);
    settextstyle(4, HORIZ_DIR, 3);
    outtextxy(350, 340, "Sorry!");
    settextstyle(4, HORIZ_DIR, 1);
    outtextxy(350, 378, "The file was not found.");
    outtextxy(357, 400, "*Try Reinstalling the programme.");
    setfillstyle(1, 2);
    bar(772, 468, 880, 495);
    outtextxy(775, 470, "CLOSE");
    if (GetAsyncKeyState(VK_LBUTTON)) {
      GetCursorPos( & cursorposition);

      if (cursorposition.x >= 781 && cursorposition.y >= 488 && cursorposition.x <= 884 && cursorposition.y <= 520) {
        i = 2;
      }
    }
    delay(100);
  }
}

inline void browsertool(int a1, int a2) {
  setfillstyle(1, WHITE);
  bar(0, 0, a1, a2);

  setbkcolor(WHITE);
  setcolor(BLACK);
  settextstyle(1, HORIZ_DIR, 4);
  outtextxy(413, 303, "There is no Internet Connection");
  settextstyle(3, HORIZ_DIR, 3);
  outtextxy(413, 387, "Try:");
  outtextxy(413, 420, "*Checking the network cable or router");
  outtextxy(413, 450, "*Resetting the modem or router");
  outtextxy(413, 480, "*Reconnecting to WI-FI");

  setfillstyle(1, 7);
  bar(0, 0, a1, 50);
  setfillstyle(1, WHITE);
  bar(10, 10, 1100, 40);
  settextstyle(3, HORIZ_DIR, 3);
  outtextxy(10, 10, "http:\\\\www.google.com\\utshavtimsina");
  setbkcolor(RED);
  setcolor(WHITE);
  outtextxy(1329, 2, "X");
  outtextxy(1328, 2, "X");
}
void inline browser() {
  int i = 1, j = 1;
  DWORD a1 = GetSystemMetrics(SM_CXSCREEN);
  DWORD a2 = GetSystemMetrics(SM_CYSCREEN);

  POINT cursorPosition;
  while (i == 1) {
    if (GetAsyncKeyState(VK_LBUTTON)) {
      GetCursorPos( & cursorPosition);
      if (cursorPosition.x > 1336 && cursorPosition.y < 66 && cursorPosition.x < 1360)
        i = 2;

    }
    if (GetAsyncKeyState(VK_LBUTTON)) {
      GetCursorPos( & cursorPosition);

      if (cursorPosition.x >= 447 && cursorPosition.y >= 258 && cursorPosition.y <= 285 && cursorPosition.x <= 471) {
        cleardevice();
        //browsertool(a1,a2);
        int z = 1000;
        int Y1, Y2;
        Y1 = 0;
        Y2 = 240;
        int N = 11;
        int count = 100000000;
        int iSecret;
        int score = 0;
        char s[1];
        while (1) {
          itoa(score, s, 10);

          while (count == 100000000) {

            count = 0;

            //}
            srand(time(NULL));
            iSecret = rand() % 8 + 1;
            iSecret = pow(1 - 9 * iSecret, 4);
            iSecret = iSecret % 800;

          }
          if (1000 / N == count) {
            count = 0;
            srand(time(NULL));
            iSecret = rand() % 8 + 1;
            iSecret = pow(1 - 9 * iSecret, 4);
            iSecret = iSecret % 800;
            z = 1000;
            N++;

          }

          if (GetAsyncKeyState(VK_SPACE)) {
            return;

          }

          //}
          cleardevice();
          setbkcolor(WHITE);
          setcolor(BLACK);

          outtextxy(900, 100, "Press SPACE to EXIT!");
          arc((z -= N) + 8, iSecret, 90, 270, 12);
          outtextxy(700, 100, "Score");
          outtextxy(700, 129, s);
          circle(z, iSecret, 10);
          arc(z, iSecret, 90, 270, 14);

          circle(110, Y2 -= Y1, 8);
          arc(100, Y2 -= Y1, 10, 350, 13);
          //arc(100,240,180,360,13);
          arc(100, Y2 -= Y1, 270, 90, 18);
          circle(110, Y2 -= Y1, 3);
          if (z >= 110 - 25 && z <= 115 + 25 && iSecret >= Y2 - 25 && iSecret <= Y2 + 25) {
            outtextxy(200, 200, ""
              "level up"
              "");
            count = 1000 / N - 1;
            score++;
          }
          Y1 = 0;
          //    line(0,300,a1,300);
          if (GetAsyncKeyState(VK_UP))
            Y1 = 10;
          if (GetAsyncKeyState(VK_DOWN))
            Y1 = -10;
          delay(50);

          count++;

        }
      }
    }
    circle(110 + 350, 240, 3);
    circle(110 + 350, 240, 8);
    arc(100 + 350, 240, 10, 350, 13);
    //arc(100,240,180,360,13);
    arc(100 + 350, 240, 270, 90, 18);
    setcolor(BLACK);
    //  line(0,300,a1,300);
    delay(10);

    if (j == 1) {
      browsertool(a1, a2);
      j++;
    }
  }
}
inline void calculator() {
  setfillstyle(1, RED);
  bar(491, 200, 807, 510);
  setfillstyle(1, BLACK);
  bar(496, 210, 800, 270);
  settextstyle(4, HORIZ_DIR, 6);
  outtextxy(490, 305, "7");
  outtextxy(540, 305, "8");
  outtextxy(590, 305, "9");
  outtextxy(655, 305, "X");
  outtextxy(490, 370, "4");
  outtextxy(540, 370, "5");
  outtextxy(590, 370, "6");
  outtextxy(655, 370, " -");
  outtextxy(490, 435, "1");
  outtextxy(540, 435, "2");
  outtextxy(590, 435, "3");
  outtextxy(730, 370, "+");
  outtextxy(730, 305, " / ");
  outtextxy(640, 435, "0");
  outtextxy(690, 435, "= ");
  setbkcolor(4);
  outtextxy(760, 130, "X");
  setbkcolor(NULL);

}
void calculatorlogic(void) {
  int i, j, k, l;

  //initgraph(&gd, &gm, "C:\\TC\\BGI");
  // initwindow(a1,a2,"",-3,-3);
  POINT cursorPosition;

  char item[5] = "";
  int a[5], b[5], enda, endb;
  enda = endb = 0;
  int end = -1;
  int top = -1;
  int operatorstatus = 0;
  char opcode;
  long int suma, sumb;
  suma = sumb = 0;
  for (i = 0; i < 5; i++)
    a[i] = b[i] = 0;
  long int temp = 0;
  int iwant = 0;

  char c[1];
  int quit = 1;
  calchome:

    while (quit) {

      calculator();
      delay(10);

      //circle(cursorPosition.x,cursorPosition.y,2);
      GetCursorPos( & cursorPosition);

      if (operatorstatus == 0) {

        if (item[end] == 'X' | item[end] == '/' | item[end] == '+' | item[end] == '-') {
          // cleardevice();
          opcode = item[end];
          for (i = 0; i < 5; i++)
            item[i] = '\0';
          item[0] = opcode;
          end = -1;
          operatorstatus = 1;
          for (i = 0; i <= top; i++) {
            b[i] = a[i];
            a[i] = 0;
          }
          endb = top;
          top = -1;
        } else if (item[end] == '1' | item[end] == '2' | item[end] == '3' | item[end] == '4' | item[end] == '5' | item[end] == '6' | item[end] == '7' | item[end] == '8' | item[end] == '9' | item[end] == '0') {
          if (iwant == 1) {
            for (i = 1; i < 5; i++)
              item[i] = '\0';
            iwant++;
          }
        }
      } else if (operatorstatus == 1) {

        if (item[end] == ')') {
          for (i = 0; i <= endb; i++)
            sumb = sumb * 10 + b[i];
          for (i = 0; i <= top; i++)
            suma = suma * 10 + a[i];
          switch (opcode) {
          case '+':
            {
              sumb = sumb + suma;

              itoa(sumb, item, 10);
              // temp=sumb;

              break;
            }
          case '-':
            {
              sumb = sumb - suma;

              itoa(sumb, item, 10);

              break;
            }
          case 'X':
            {

              sumb = suma * sumb;
              itoa(sumb, item, 10);
              break;
            }
          case '/':
            {

              sumb = double(sumb / suma);

              itoa(sumb, item, 10);

              break;
            }

          }
          //  for(i=0;i<5;i++)
          //    item[i]='\0';
          // for(i=0;i<endb;i++)
          //  item[i]=b[endb-1-i];
          for (i = 0; i < 5; i++) {
            b[i] = 0;
            a[i] = 0;
          }
          end = -1;
          suma = sumb = 0;
          operatorstatus = 0;
          iwant = 1;

          top = -1;
        }
      }
      if (GetAsyncKeyState(VK_LBUTTON)) {
        for (i = 0; i < 45; i++)
          for (j = 0; j < 60; j++)
            if (cursorPosition.x == 697 + i && cursorPosition.y == 465 + j) {
              if (item[end] = ')')
                continue;
              item[++end] = ')';

              delay(50);
              goto calchome;
              break;

              // closegraph();
            }
        for (i = 0; i < 45; i++)
          for (j = 0; j < 60; j++)
            if (cursorPosition.x == 765 + i && cursorPosition.y == 166 + j) {

              quit = 0;

              //delay(50);
              //             break;
              // closegraph();
            }
        for (i = 0; i < 45; i++)
          for (j = 0; j < 60; j++)
            if (cursorPosition.x == 662 + i && cursorPosition.y == 335 + j) {

              item[++end] = 'X';

              delay(50);
              break;
              // closegraph();
            }
        for (i = 0; i < 45; i++)
          for (j = 0; j < 60; j++)
            if (cursorPosition.x == 738 + i && cursorPosition.y == 337 + j) {
              item[++end] = '/';
              delay(50);
              break;
              // closegraph();
            }
        for (i = 0; i < 45; i++)
          for (j = 0; j < 60; j++)
            if (cursorPosition.x == 662 + i && cursorPosition.y == 400 + j) {
              item[++end] = '-';
              delay(50);
              break;
              // closegraph();
            }
        for (i = 0; i < 45; i++)
          for (j = 0; j < 60; j++)
            if (cursorPosition.x == 738 + i && cursorPosition.y == 402 + j) {
              item[++end] = '+';

              delay(50);
              break;
              // closegraph();
            }

      }
      if (GetAsyncKeyState(VK_LBUTTON)) {
        for (i = 0; i < 45; i++)
          for (j = 0; j < 60; j++) {

            // if(seven==1)
            //continue;
            if (cursorPosition.x == 498 + i && cursorPosition.y == 335 + j) {
              item[++end] = '7';
              a[++top] = 7;
              delay(80);
              break;
              // closegraph();
            }
          }

        for (i = 0; i < 45; i++)
          for (j = 0; j < 60; j++)
            if (cursorPosition.x == 547 + i && cursorPosition.y == 334 + j) {
              item[++end] = '8';
              a[++top] = 8;
              delay(50);
              break;
              // closegraph();
            }
        for (i = 0; i < 45; i++)
          for (j = 0; j < 60; j++)
            if (cursorPosition.x == 597 + i && cursorPosition.y == 334 + j) {
              item[++end] = '9';
              a[++top] = 9;
              delay(80);
              break;
              // closegraph();
            }
        for (i = 0; i < 45; i++)
          for (j = 0; j < 60; j++)
            if (cursorPosition.x == 498 + i && cursorPosition.y == 400 + j) {
              item[++end] = '4';
              a[++top] = 4;
              delay(80);
              break;
              // closegraph();
            }
        for (i = 0; i < 45; i++)
          for (j = 0; j < 60; j++)
            if (cursorPosition.x == 547 + i && cursorPosition.y == 400 + j) {
              item[++end] = '5';
              a[++top] = 5;
              delay(80);
              break;
              // closegraph();
            }
        for (i = 0; i < 45; i++)
          for (j = 0; j < 60; j++)
            if (cursorPosition.x == 597 + i && cursorPosition.y == 400 + j) {
              item[++end] = '6';
              a[++top] = 6;
              delay(80);
              break;
              // closegraph();
            }
        for (i = 0; i < 45; i++)
          for (j = 0; j < 60; j++)
            if (cursorPosition.x == 497 + i && cursorPosition.y == 464 + j) {
              item[++end] = '1';
              a[++top] = 1;
              delay(80);
              break;
              // closegraph();
            }
        for (i = 0; i < 45; i++)
          for (j = 0; j < 60; j++)
            if (cursorPosition.x == 547 + i && cursorPosition.y == 465 + j) {
              item[++end] = '2';
              a[++top] = 2;
              delay(80);
              break;
              // closegraph();
            }
        for (i = 0; i < 45; i++)
          for (j = 0; j < 60; j++)
            if (cursorPosition.x == 597 + i && cursorPosition.y == 465 + j) {
              item[++end] = '3';
              a[++top] = 3;
              delay(80);
              break;
              // closegraph();
            }
        for (i = 0; i < 45; i++)
          for (j = 0; j < 60; j++)
            if (cursorPosition.x == 646 + i && cursorPosition.y == 465 + j) {
              item[++end] = '0';
              a[++top] = 0;
              delay(80);
              break;
              // closegraph();
            }
      }

      // cleardevice();
      outtextxy(496, 210, (item));
      // delay(500);

      delay(100);
    }

}

inline void shortcuts(int back) {

  setfillstyle(SOLID_FILL, RED); //calc start
  bar(50, 56, 88, 104); //calc
  setfillstyle(SOLID_FILL, BLACK);
  bar(52, 58, 85, 65); //calc
  setcolor(BLACK);
  line(50, 70, 88, 70);
  rectangle(52, 75, 85, 99);
  setbkcolor(BLACK);
  setcolor(WHITE);
  settextstyle(2, HORIZ_DIR, 5);
  outtextxy(57, 80, "1");
  outtextxy(65, 80, "2");
  outtextxy(74, 80, "3");
  setbkcolor(back);
  outtextxy(52, 117, "CALC"); //calc end

  setfillstyle(SOLID_FILL, RED); //notepad start
  bar(50, 171, 88, 219);
  setbkcolor(RED);
  setfillstyle(LINE_FILL, BLACK);
  bar(53, 173, 83, 218);
  setbkcolor(NULL);
  setcolor(WHITE);
  setbkcolor(back);
  outtextxy(43, 236, "NOTEPAD"); //notepad end

  setcolor(WHITE);
  setbkcolor(back);
  setfillstyle(SOLID_FILL, RED); //tic tac toe start
  bar(50, 288, 88, 336);

  line(75, 288, 75, 336); //vertical line
  line(61, 288, 61, 336); //vertical line

  line(50, 303, 88, 303); //horizontal line
  line(50, 321, 88, 321);
  circle(69, 296, 4);
  circle(69, 331, 4);
  setbkcolor(RED);
  outtextxy(64, 308, "X");
  setbkcolor(back);
  outtextxy(40, 357, "TIC TAC TOE"); //end of ttc

  setbkcolor(back);
  setfillstyle(SOLID_FILL, RED); //tic tac toe start
  bar(50, 434, 88, 482);
  setfillstyle(SOLID_FILL, WHITE);
  bar(52, 436, 85, 479);
  int poly[] = {
    62,
    458,
    80,
    442,
    72,
    468
  };
  setcolor(BLACK);
  fillpoly(3, poly);
  setcolor(WHITE);
  outtextxy(50, 499, "PAINT");

}

inline void eienstinebackground()

{

  int i, j;
  cleardevice();

  DWORD a1 = GetSystemMetrics(SM_CXSCREEN);
  DWORD a2 = GetSystemMetrics(SM_CYSCREEN);

  //initgraph(&gd, &gm, "C:\\TC\\BGI");

  POINT cursorPosition; //
  int poly1[] = {
    984,
    218,
    990,
    210,
    995,
    218
  };
  int poly2[] = {
    1005,
    218,
    1011,
    210,
    1025,
    218
  };
  int poly3[] = {
    1055,
    218,
    1060,
    210,
    1070,
    218
  };
  int poly4[] = {
    1090,
    224,
    1100,
    215,
    1110,
    224
  };
  int poly5[] = {
    1008,
    342,
    1030,
    370,
    1090,
    342
  };
  //  setactivepage(page);
  //cleardevice();
  int backgroundcolour = 6;

  setbkcolor(NULL);
  setfillstyle(SOLID_FILL, backgroundcolour);
  bar(0, 0, a1, a2);
  // setbkcolor(RED);
  // setbkcolor(RED);
  setfillstyle(SOLID_FILL, 7);
  bar(0, 665, a1, a2); //start menue bar
  //setfillstyle(solid,9);
  //setbkcolor(RED);
  setcolor(BLUE);
  rectangle(5, 668, 146, a2);
  rectangle(0, 665, 150, a2);
  setcolor(7);
  bar(1, 668, 163, 668);

  setbkcolor(WHITE);
  setcolor(1);
  settextstyle(6, HORIZ_DIR, 3);
  outtextxy(19, 670, "START");

  setcolor(WHITE);
  for (i = 0; i < 3; i++)
    rectangle(395 + i, 666 + i, 800 + i, 695 + i); //url block
  setcolor(1);
  setbkcolor(BLACK);
  settextstyle(3, HORIZ_DIR, 2);
  outtextxy(400, 670, "URL::http:\\\\                                                            ");
  shortcuts(backgroundcolour);
  // setbkcolor(NULL);
  setcolor(7);
  for (i = 0; i < 8; i++) {

    int poly1[7] = {
      984 - i,
      218,
      990 - i,
      210,
      995 - i,
      218
    };
    int poly2[7] = {
      1005 - i,
      218,
      1011 - i,
      210,
      1025 - i,
      218
    };
    int poly3[7] = {
      1055 - i,
      218,
      1060 - i,
      210,
      1070 - i,
      218
    };
    int poly4[7] = {
      1090 - i,
      224,
      1100 - i,
      215,
      1110 - i,
      224
    };
    int poly5[7] = {
      1008 - i,
      342,
      1030 - i,
      370,
      1090 - i,
      342
    };

    ellipse(973 - i, 271, -10, 290, 20, 10); //nose
    //   ellipse(1020,225,00,180,40,15);//head
    ellipse(995 - i, 252, 100, 390, 3, 15); //eye1
    ellipse(980 - i, 245, 100, 390, 3, 15); //eye2
    ellipse(1090 - i, 250, 0, 220, 10, 5); //inner ear
    ellipse(1090 - i, 250, -100, 170, 15, 8); //outer ear

    line(977 - i, 285, 979, 300); //
    line(973 - i, 285, 975, 300); //
    line(969 - i, 285, 972, 300); //
    line(970 - i, 285, 972, 300); //
    line(982 - i, 285, 985, 300); //
    line(985 - i, 285, 988, 300); //
    ellipse(979 - i, 295, 00, 180, 15, 10); //moustach
    line(994 - i, 217, 1025, 175); //hair
    drawpoly(3, poly1); //
    drawpoly(3, poly2); //
    drawpoly(3, poly3); //
    drawpoly(3, poly4); //
    line(1025 - i, 218, 1062, 175); //hair
    line(1070 - i, 218, 1100, 175); //hair
    line(1110 - i, 224, 1155, 185); //hair
    ellipse(960 - i, 339, 00, 50, 60, 40); //neck
    ellipse(1089 - i, 294, 110, 250, 25, 40); //neck
    drawpoly(3, poly5); //neck colour
    line(945 - i, 356, 1008, 342); //shoulder
    line(1090 - i, 342, 1165, 350); //shoulder
    circle(1028, 391, 9 - i);
    circle(1028, 411, 9 - i);

  }

  setbkcolor(NULL);

}

inline void background1() //start menue
  {
    DWORD a1 = GetSystemMetrics(SM_CXSCREEN);
    DWORD a2 = GetSystemMetrics(SM_CYSCREEN);
    int backgroundcolour = 9;

    setbkcolor(NULL);
    setfillstyle(SOLID_FILL, backgroundcolour);
    bar(0, 0, a1, a2);
    // setbkcolor(RED);
    // setbkcolor(RED);
    setfillstyle(SOLID_FILL, 7);
    int i, j;

    bar(0, 665, a1, a2); //start menue bar
    //setfillstyle(solid,9);
    //setbkcolor(RED);
    setcolor(BLUE);
    rectangle(5, 668, 146, a2);
    rectangle(0, 665, 150, a2);
    setcolor(7);
    bar(1, 668, 163, 668);

    setbkcolor(WHITE);
    setcolor(1);
    settextstyle(6, HORIZ_DIR, 3);
    outtextxy(19, 670, "START");

    setcolor(WHITE);
    for (i = 0; i < 3; i++)
      rectangle(395 + i, 666 + i, 800 + i, 695 + i); //url block
    setcolor(1);
    setbkcolor(BLACK);
    settextstyle(3, HORIZ_DIR, 2);
    outtextxy(400, 670, "URL::http:\\\\                                                            ");

    int poly[] = {
      1050,
      180,
      1250,
      180,
      1050,
      242,
      1050,
      220
    };
    int poly2[] = {
      1250,
      400,
      1050,
      347,
      1050,
      400,
      1250,
      400
    };
    setfillstyle(SOLID_FILL, 1); //black bar inside red background box
    bar(1050, 180, 1250, 400); //size of black bar
    setcolor(backgroundcolour);
    line(1050, 300, 1250, 300);
    line(1125, 180, 1125, 400);
    setcolor(backgroundcolour);
    setfillstyle(SOLID_FILL, backgroundcolour);
    fillpoly(4, poly);
    fillpoly(4, poly2);

    //setcolour(RED);

    //

    clockfinal();
    shortcuts(backgroundcolour);
    setbkcolor(NULL);

    /* */

  }
inline void background() {
  if (backgroundcheck == 1)
    background1();
  else
    eienstinebackground();

}
inline void clockfinal(void) {
  char time1[100];
  time_t rawTime;
  DWORD a1 = GetSystemMetrics(SM_CXSCREEN);
  DWORD a2 = GetSystemMetrics(SM_CYSCREEN);
  struct tm * currentTime;
  rawTime = time(NULL);
  currentTime = localtime( & rawTime);
  strftime(time1, 100, "%I:%M:%S", currentTime);
  setbkcolor(7);
  setcolor(WHITE); //to make clock time appear white
  settextstyle(3, HORIZ_DIR, 2);
  outtextxy(1250, 670, time1); //time coordinates
  setbkcolor(NULL);
}

inline void startup1() {
  int i;
  int startup;
  DWORD a1 = GetSystemMetrics(SM_CXSCREEN);
  DWORD a2 = GetSystemMetrics(SM_CYSCREEN);
  int poly1[] = {
    542,
    277,
    770,
    277,
    542,
    320,
    542,
    277
  };
  int poly2[] = {
    770,
    440,
    540,
    440,
    541,
    412,
    770,
    440
  };
  setfillstyle(SOLID_FILL, 4);
  bar(0, 0, a1, a2);

  //  for(startup=0;startup<10000;startup++)
  //      {

  setcolor(4);
  setfillstyle(SOLID_FILL, WHITE);
  bar(542, 277, 770, 440);

  setfillstyle(SOLID_FILL, 4);
  fillpoly(4, poly1);
  fillpoly(4, poly2);
  for (i = 0; i < 7; i++)
    line(634 + i, 300, 634 + i, 440);
  for (i = 0; i < 7; i++)
    line(543, 375 - i, 770, 375 - i);
  //setcolor(11);
  //circle(666,540,15);

  //  }

}

inline void startup2() {
  int i;
  startup1();
  setbkcolor(4);
  setcolor(WHITE);
  settextstyle(2, HORIZ_DIR, 3);
  outtextxy(590, 532, "LOADING.?");
  setfillstyle(SOLID_FILL, BLACK);
  bar(600, 530, 708, 510);

  // int i=0;
  setcolor(WHITE);
  for (i = 0; i < 100; i++) {

    circle(600 + i, 520, 10);
    delay(50);
  }
  setbkcolor(NULL);
}

inline void authendicate() {
  int i;
  setfillstyle(SOLID_FILL, 11);
  bar(629, 257, 630, 259);
  setbkcolor(RED);
  for (i = 0; i < 5; i++)
    rectangle(450 + i, 200 + i, 850 + i, 400 + i);
  for (i = 0; i < 5; i++)
    rectangle(625 - i, 250 - i, 832 - i, 277 - i);
  for (i = 0; i < 5; i++)
    rectangle(625 - i, 320 - i, 832 - i, 350 - i);
  bar(650, 360, 720, 382);
  setcolor(1);
  settextstyle(4, HORIZ_DIR, 1);
  outtextxy(480, 250, "username");
  outtextxy(480, 320, "password");
  outtextxy(655, 365, "login");
  setbkcolor(NULL);

}

void authendication()

{
  int flag1status, flag2status;
  flag1status = flag2status = 0;
  int k = 0;
  int j;
  DWORD a1 = GetSystemMetrics(SM_CXSCREEN);
  DWORD a2 = GetSystemMetrics(SM_CYSCREEN);
  int gd = DETECT, gm;
  int i, pow = 1;
  char pass;
  int flag1, flag2;
  flag1 = flag2 = 0;
  char c = '\0';
  char star[10] = "*********";

  char username[20] = "", password[20] = "";
  cleardevice();
  authendicate();
  POINT cursorPosition;

  do {
    home:
    //closegraph();
      authendicate();
    flag1status = flag2status = 0;
    //flagstatus2=0;
    GetCursorPos( & cursorPosition);

    setbkcolor(NULL);
    k = 0;

    if ((flag2) == 0) {
      //setcolor(NULL);
      authendicate();
      outtextxy(630, 255, username);

    } else if (flag2 != 0) {
      outtextxy(657, 323, "*****");

    }

    if (GetAsyncKeyState(VK_LBUTTON)) {
      //  if (flag1status!=1)
      //  {
      for (j = 0; j < 220; j++) {

        for (i = 0; i < 20; i++) {
          if (flag1status == 1) {

            // initwindow(a1,a2,"",-3,-3);
            //  authendicate();
            continue;
          }

          if (cursorPosition.x == 640 + j && cursorPosition.y == 280 + i) {

            flag1status = 1;
            continue;

            // delay(500);
            //  goto home;
          }
          //     )

        }
      }

      //}

      if (flag1status == 1) {
        closegraph();
        system("cls");
        std::cin >> username;

        cleardevice();
        initwindow(a1, a2, "", -3, -3);
        authendicate();
        if (strcmp(username, "admin") == 0) {
          flag1 = 1;

          // outtextxy(400,300,"flag1 set");
          // delay(1000);
          // goto home;
        } else {

          goto home;
          //  std::cout<<"error"<<std::endl;
          //   delay(1100);
          //                    goto home();

        }

      }

      // }
      //}
      //if(flag2status==0)
      //{

      for (j = 0; j < 220; j++) {

        for (i = 0; i < 20; i++) {
          if (flag2status == 1) {
            //initwindow(a1,a2,"",-3,-3);
            //  authendicate();
            continue;
          } else if (cursorPosition.x == (620 + j) && cursorPosition.y == 358 + i) {
            flag2status = 1;
            continue;

          }
        }
      }
      if (flag2status == 1) {

        // outtextxy(400,300,"flag2 set");
        //delay(100);
        closegraph();
        cout << endl;
        // /*
        int z = -1;
        while ((c = getche()) != 13) {
          system("cls");
          password[++z] = c;
          cout << (star + 8 - (z));

        }

        //*/

        cleardevice();
        initwindow(a1, a2, "", -3, -3);
        authendicate();
        // setfillstyle(SOLID_FILL,WHITE);

        if (strcmp(password, "admin") == 0) {

          flag2 = 1;

          //goto home;
        } else {

          // std::cout<<"password error";
          goto home;
        }

      }
      //}
    }

    // }

    if (flag1 == 1 && flag2 == 1) //*/
      pow = 2;
    // }
    delay(50);
  } while (pow == 1);

}

//}
inline void startmenue() {
  int i, j = 200;
  int a = 0;
  char time1[100];

  DWORD a1 = GetSystemMetrics(SM_CXSCREEN);
  DWORD a2 = GetSystemMetrics(SM_CYSCREEN);
  POINT cursorPosition;
  int point1;
  point1 = 1;
  int powerflag, sleepflag, restartflag;
  sleepflag = restartflag = 0;

  int a11;
  int page = 0;
  //setactivepage(page);
  //setvisualpage(1-page);
  //cleardevice();
  background();

  setbkcolor(NULL);

  // cleardevice();
  //GetCursorPos(&cursorPosition);
  //circle(cursorPosition.x,cursorPosition.y,2);

  if (backgroundcheck == 1)
    a11 = 9;
  else
    a11 = 6;
  setcolor(WHITE); //rectangle start popup colour white

  setfillstyle(SOLID_FILL, a11);
  // for(i=0;i<4;i++)
  bar(2, 3, 484, 664); //start menue popup
  settextstyle(7, HORIZ_DIR, 6);
  setfillstyle(1, 8);
  bar(380 - 30, 8 + 52, 485 - 30, 90 + 52);

  setbkcolor(a11);
  outtextxy(338, 70, "UTS");
  setcolor(WHITE);
  circle(434 - 32, 51 + 52, 68);

  for (i = 0; i < 4; i++)
    rectangle(2 + i, 3 + i, 484 + i, 664 + i); //start menue popup
  setcolor(WHITE); //line colour
  for (i = 0; i < 5; i++)
    line(200 + i, 5, 200 + i, 900); //line coordinates
  //   setfillstyle(SOLID_FILL,BLACK);//background for desktop
  // bar(490,0,a1,a2);//bar of red background
  setbkcolor(NULL);
  setfillstyle(SOLID_FILL, 7); //long  menue bar

  bar(0, 665, a1, a2); //menu bar
  // setfillstyle(SOLID_FILL,3);//start menue cover blue
  rectangle(0, 665, 150, a2); //statt menu cover

  //   setfillstyle(SOLID_FILL,WHITE);//black bar inside red background box
  //bar(1050,180,1250,400);//size of black bar

  //setbkcolor(YELLOW);
  setfillstyle(SOLID_FILL, 8); //colour for caution box
  bar(80, 200, 360, 350); //caution box design
  setbkcolor(8);

  setcolor(YELLOW);
  settextstyle(9, HORIZ_DIR, 5);
  outtextxy(100, 210, "Caution::");
  settextstyle(9, HORIZ_DIR, 2);
  outtextxy(100, 280, "Under Maintainance");

  setbkcolor(NULL); //to prevent form start menu becoming red
  setcolor(1); //colour set green
  settextstyle(6, HORIZ_DIR, 3);
  outtextxy(19, 670, "START"); //displayed start

  bar(205, 600, 482, 665); //shutdownbar

  // fillellipse(260,640,8,18);//circle power
  setcolor(RED);
  for (i = 0; i < 7; i++)
    line(257 + i, 610, 257 + i, 620); //power botton logo

  for (i = 0; i <= 15; i++)
    ellipse(262, 632, 0, 360, 15, 15 - i);
  setcolor(WHITE);
  // for(i=0;i<3;i++)
  circle(262, 630, 20); //power button outermost circle
  // setbkcolor(WHITE);
  circle(340, 630, 20); //restart button outermost circle

  setcolor(GREEN);
  for (i = 0; i < 3; i++)
    ellipse(340 - i, 632 - i, 0, 280, 14, 14); //restart logo
  line(340, 640 - 6, 357, 640 - 6);
  line(340, 640 - 3, 357, 640 - 3);
  setcolor(BLUE);
  settextstyle(3, HORIZ_DIR, 3);
  outtextxy(410, 620, "Z");
  settextstyle(3, HORIZ_DIR, 1);
  outtextxy(418, 610, "z");
  setcolor(WHITE);
  for (i = 0; i < 3; i++)
    circle(420 - i, 630 - i, 20); // sleep button
  //  GetCursorPos(&cursorPosition);
  //
  setcolor(WHITE);
  for (i = 0; i < 3; i++)
    rectangle(395 + i, 666 + i, 800 + i, 695 + i); //url block
  setcolor(1);

  settextstyle(3, HORIZ_DIR, 2);
  outtextxy(400, 670, "URL::http:\\\\                                                            ");

  clockfinal();

  //delay(200);
  //}

  //else a=0;;
  //page=1-page;
  delay(550);
}

int main()

{

  int n = 0;

  int i, j, k;
  int mx, my;
  DWORD a1 = GetSystemMetrics(SM_CXSCREEN);
  DWORD a2 = GetSystemMetrics(SM_CYSCREEN);
  int gd = DETECT, gm;

  initwindow(a1, a2, "", -3, -3);
  POINT cursorPosition;

  home:
    ///*
    authendication();
  system("CLS");
  startup1();
  delay(500);
  startup2();
  // ///*///
  int point = 1;
  int startflag;
  int page = 0;
  char time1[100];

  time_t rawTime;
  struct tm * currentTime;
  int powerflag, sleepflag, restartflag;
  int clockclick;

  int backgroundset;
  int startreturn;
  int chromeclick;
  int calculatorclick;
  int notepadclicked;
  int ttcclicked;
  int paintclicked;
  int refreshclick;
  int nextbackgroundclick;
  home1:
    backgroundset = 1;
  cleardevice();
  while (1) {
    nextbackgroundclick = 0;
    paintclicked = 0;
    ttcclicked = 0;
    chromeclick = 0;
    calculatorclick = 0;

    startreturn = 0;
    startflag = sleepflag = restartflag = 0;
    point = 1;
    refreshclick = 0;

    startflag = sleepflag = restartflag = 0;

    //      currentTime=localtime(&rawTime);
    //    strftime(time1,100,"%I:%M:%S",currentTime);

    GetCursorPos( & cursorPosition);

    while (backgroundset) {
      background();
      backgroundset = 0;
    }
    clockfinal();

    //delay(30);

    //background2();
    // clockfinal();
    if (GetAsyncKeyState(VK_LBUTTON)) {
      for (j = 0; j < 160; j++) {
        for (i = 0; i < 20; i++) {
          if (startflag == 1)
            continue;
          else if (cursorPosition.x == 0 + j && cursorPosition.y == 697 + i) {
            startflag = 1;
          }
        }
      }

      if (startflag == 1) //when statt button clicked;
      {

        while (1) {

          if (point == 1) { //background();
            startmenue(); //calls the startbutton slide up bar
            point = 2;
          }
          // startmenue();
          clockfinal();
          GetCursorPos( & cursorPosition);

          if (GetAsyncKeyState(VK_LBUTTON))

          {
            for (j = 0; j < 40; j++)
              for (i = 0; i < 40; i++) {
                if (powerflag == 1) {
                  continue;
                } else if (cursorPosition.x == (251 + j) && cursorPosition.y == (644 + i)) {
                  powerflag = 1;
                }
              }

            if (powerflag == 1) {
              cleardevice();
              startup1();
              delay(1000);
              exit(1);
            }

            for (j = 0; j < 40; j++)
              for (i = 0; i < 40; i++)

            {
              if (restartflag == 1) {

                continue;
              } else if (cursorPosition.x == (332 + j) && cursorPosition.y == (644 + i)) {
                restartflag = 1;
              }
            }

            if (restartflag == 1) {
              std::cout << "restart" << std::endl;
              startup1();

              delay(1000);
              goto home;

            }

            for (j = 0; j < 40; j++)
              for (i = 0; i < 40; i++) {
                if (sleepflag == 1) {

                  continue;
                } else if (cursorPosition.x == (406 + j) && cursorPosition.y == (633 + i))

                {
                  sleepflag = 1;
                }
              }

            if (sleepflag == 1) {

              int sleeptime;
              closegraph();
              std::cout << "enter sleep time in sec";
              std::cin >> sleeptime;
              initwindow(a1, a2, "", -3, -3);
              cleardevice();
              setbkcolor(NULL);
              delay(sleeptime * 1000);
              goto home1;
              closegraph();
            }

            startreturn = 3;

          }
          ///*
          if (startreturn == 3) {
            startreturn = 0;

            //     if(!(sleepflag&&restartflag&&powerflag))
            //    {
            goto home1;
            //  }

          }
          //*/

          delay(400);
          //exit(1);
        } //end of while
      } //end start click

    } //click and see.
    //} //

    //     return 0;

    // }

    //workspace now
    /*
       setcolor(RED);
           circle(cursorPosition.x-10,cursorPosition.y-30,6);
      if(GetAsyncKeyState(VK_LBUTTON))
        {
            circle(cursorPosition.x,cursorPosition.y,2);
            std::cout<<cursorPosition.x<<std::endl;
            std::cout<<cursorPosition.y<<std::endl;
            exit(0);

        }
    //*/
    if (GetAsyncKeyState(VK_LBUTTON))

    {
      if (cursorPosition.x < 103 && cursorPosition.y < 539) {

        if (cursorPosition.x < 103 && cursorPosition.y < 147) //calculator click
        {

          for (j = 0; j < 42; j++)
            for (i = 0; i < 50; i++) {
              if (calculatorclick == 1)
                continue;
              else if (cursorPosition.x == (58 + j) && cursorPosition.y == 85 + i)
                calculatorclick = 1;
            }
          if (calculatorclick == 1) {
            calculatorlogic();
            //   cout<<"calculator clicked";

            //initwindow(a1,a2,"",-3,-3);
            goto home1;
            //bowser();

          }

        } else if (cursorPosition.y > 147 && cursorPosition.y < 264) //notepad click
        {

          for (j = 0; j < 42; j++)
            for (i = 0; i < 50; i++) {
              if (notepadclicked == 1)
                continue;
              else if (cursorPosition.x == (58 + j) && cursorPosition.y == 200 + i)
                notepadclicked = 1;
            }
          if (notepadclicked == 1) {
            filenotfound();
            //cout<<"notepad clicked";

            // initwindow(a1,a2,"",-3,-3);

            goto home1;
            //bowser();

          }

        } else if (cursorPosition.y > 264 && cursorPosition.y < 382) //ttc   click
        {

          for (j = 0; j < 39; j++)
            for (i = 0; i < 48; i++) {
              if (ttcclicked == 1)
                continue;
              else if (cursorPosition.x == (58 + j) && cursorPosition.y == 317 + i)
                ttcclicked = 1;
            }
          if (ttcclicked == 1) { //closegraph();
            filenotfound();
            // cout<<"tic tac toe clicked";

            //  initwindow(a1,a2,"",-3,-3);
            goto home1;
            //bowser();

          }

        } else if (cursorPosition.y > 382 && cursorPosition.y < 520) //paint  click
        {

          for (j = 0; j < 38; j++)
            for (i = 0; i < 46; i++) {
              if (paintclicked == 1)
                continue;
              else if (cursorPosition.x == (58 + j) && cursorPosition.y == 465 + i)
                paintclicked = 1;
            }
          if (paintclicked == 1) { //closegraph();
            filenotfound();
            // cout<<"paint clicked";

            //  initwindow(a1,a2,"",-3,-3);
            goto home1;
            //bowser();

          }
        }

      } //shortcuts click area
      if (GetAsyncKeyState(VK_LBUTTON)) //chrome browser
      {

        for (j = 0; j < 410; j++)
          for (i = 0; i < 29; i++) {
            if (chromeclick == 1)
              continue;
            else if (cursorPosition.x == (405 + j) && cursorPosition.y == 698 + i)
              chromeclick = 1;
          }
        if (chromeclick == 1) {
          delay(50);
          browser();
          //bowser();

          goto home1;

        }
      }

    }
    clockclick = 0;

    if (GetAsyncKeyState(VK_LBUTTON)) //calender
    {
      for (j = 0; j < 100; j++)
        for (i = 0; i < 21; i++) {
          if (clockclick == 1)
            continue;

          else if (cursorPosition.x == (1258 + j) && cursorPosition.y == 700 + i)

            clockclick = 1;
        }
      if (clockclick == 1) { //exit(0);
        i = 0;
        while (1) {

          i++;
          if (i == 1) {

            background();
          }
          calender();
          setbkcolor(NULL);
          clockfinal();

          delay(80);
          //GetCursorPos(&cursorPosition);
          if (GetAsyncKeyState(VK_LBUTTON))
            goto home1;
          if (i == 30) {

            //setbkcolor(NULL);
            goto home1;
          }

        }
      }
    }

    if (GetAsyncKeyState(VK_RBUTTON)) // right click options
    {
      mx = cursorPosition.x;
      my = cursorPosition.y;
      k = 0;
      if (cursorPosition.x > 115 && cursorPosition.y < 689) {

        while (1) {

          if (backgroundset == 0) {
            background();
            backgroundset = 3;
          }
          clockfinal();
          setfillstyle(SOLID_FILL, 7);

          bar(mx + 150, my + 200, mx, my);
          setcolor(1);
          rectangle(mx + 150, my + 200, mx, my);
          setcolor(6);
          rectangle(mx, my, mx + 150, my + 40);
          rectangle(mx, my + 40, mx + 150, my + 80);
          setcolor(WHITE);
          setbkcolor(7);
          settextstyle(3, HORIZ_DIR, 2);
          outtextxy(mx + 14, my + 9, "REFRESH");
          settextstyle(2, HORIZ_DIR, 5);
          outtextxy(mx + 2, my + 49, "NEXT DESKTOP ");
          outtextxy(mx + 41, my + 65, "BACKGROUND ");
          GetCursorPos( & cursorPosition);
          if (GetAsyncKeyState(VK_LBUTTON)) { //exit(0);

            for (i = 0; i < 150; i++)
              for (j = 0; j < 40; j++) {
                if (refreshclick == 1)
                  continue;
                else
                if (cursorPosition.x == ((mx + 8) + i) && cursorPosition.y == ((my + 30) + j)) {
                  refreshclick = 1;
                  // break;

                }

              }
            if (refreshclick == 1) {

              cleardevice();
              delay(50);
              goto home1;
              // exit(0);
            }

            for (i = 0; i < 150; i++)
              for (j = 0; j < 40; j++) {
                if (nextbackgroundclick == 1)
                  continue;
                else
                if (cursorPosition.x == ((mx + 8) + i) && cursorPosition.y == ((my + 70) + j)) {

                  // break;
                  if (backgroundcheck == 1)
                    backgroundcheck = 2;
                  else
                    backgroundcheck = 1;

                  setbkcolor(1);
                  setfillstyle(1, 1);
                  bar(0, 0, 1500, 665);
                  settextstyle(1, HORIZ_DIR, 4);

                  outtextxy(600, 310, "Please wait..");
                  int i = 0;
                  for (i; i < 4; i++) {
                    if (i == 2)
                      continue;
                    settextstyle(1, i, 4);
                    outtextxy(500, 310, ".");
                    delay(100);

                  }
                  settextstyle(1, 1, 4);
                  outtextxy(500 + 40, 310, ".");
                  delay(100);

                  goto home1;

                }

              }
            if (nextbackgroundclick == 1) {

              //  closegraph();
              //   cout<<"back";
              // exit(0);
            }

            k++;
            /*     cout<<"mx="<<mx<<endl;
                                   cout<<"my="<<my<<endl;
                                   cout<<"cursorpsos.x="<<cursorPosition.x<<endl;
                                   cout<<"cursorpos.y="<<cursorPosition.y<<endl;


circle(cursorPosition.x,cursorPosition.y,2);
                           // exit(0);

 */
          }

          if (k == 1) {

            delay(2);
            goto home1;
          }
          delay(2);
        }

      }
    }

    delay(100); // main delay
    //page=1-page;
  } //end of while(1)
}

inline void calender() {

  int a;
  char time1[100];
  time_t rawtime;
  struct tm * currentTime;
  if (backgroundcheck == 1)
    a = 9;
  else a = 6;
  setbkcolor(a);

  setbkcolor(a);
  setfillstyle(SOLID_FILL, a);
  bar(1248, 540, 1357, 661);

  rawtime = time(NULL);
  currentTime = localtime( & rawtime);
  strftime(time1, 100, " %a ", currentTime);

  setcolor(WHITE);
  settextstyle(3, HORIZ_DIR, 5);
  outtextxy(1252, 610, time1);
  settextstyle(3, HORIZ_DIR, 3);
  strftime(time1, 100, " %d %b ", currentTime);
  outtextxy(1263, 560, time1);
  rectangle(1252, 548, 1353, 657);
}
