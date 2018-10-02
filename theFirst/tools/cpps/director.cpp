#include <cstdio>
#include <iostream>
#include <cstring>
#include "../heads/director.h"
#include "../heads/readOthers.h"
#include "../heads/putContext.h"

using namespace std;

void gameStart()
{
  printWelcome(false);
  int flag = readNumber();
  while(flag>3 || flag < 1)
    {
      printf("Wrong Input!!\n");
      printWelcome(true);
      flag = readNumber();
    }

  switch (flag)
    {
    case 1: {newGame(); break;}
    case 2: {conGame(); break;}
    default: break;
    }
}

//void gameSrotre(){}
//void gameOver(){}

void printWelcome(bool reWelcome)//
{
  if(reWelcome)
    printf("Please make sure your input matched the request.\n\n");
  else
    putLogo();
  printf("\t\t\t\t\t\t\t\t\t\t\tEnter Number To Select\n");
  printf("\t\t\t\t\t\t\t\t\t\t\t   1......New game\n");
  printf("\t\t\t\t\t\t\t\t\t\t\t   2......Continue\n");
  printf("\t\t\t\t\t\t\t\t\t\t\t   3......Exit\n");
}

void newGame()
{
  char section[] = "0.txt";
  putStory(section);
}

void conGame()
{
  printf("You have chosen conGame\n");
}
