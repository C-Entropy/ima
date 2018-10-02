#include <cstdio>
#include <iostream>
#include <cstring>
#include "../heads/putContext.h"
#include "../heads/player.h"
using namespace std;

void putPlayer(char* name)//读取玩家信息
{
  freopen("../player.txt", "r", stdin);
  string player; cin>>player;
  fclose(stdin);
 }

void putInfo()
{
}

void putStory(char* section)//读取故事
{
  char chapter[35] = "./info/chapters/chapter";
  strcat(chapter, section);
  freopen(chapter, "r", stdin);
  string content; cin>>content;
  fclose(stdin);
  cout<<content;
}












void putLogo()//读取游戏提示信息
{
  printf("\t\t\t\t\t\t\t\t _____           _                                  ____       _\n\t\t\t\t\t\t\t\t|_   _|_ _ _ __ | |__   __ _ _   _ ___  ___ _ __   / ___| __ _| |_ ___\n\t\t\t\t\t\t\t\t  | |/ _` | '_ \\| '_ \\ / _` | | | / __|/ _ \\ '__| | |  _ / _` | __/ _ \\\n\t\t\t\t\t\t\t\t  | | (_| | | | | | | | (_| | |_| \\__ \\  __/ |    | |_| | (_| | ||  __/\n\t\t\t\t\t\t\t\t  |_|\\__,_|_| |_|_| |_|\\__,_|\\__,_|___/\\___|_|     \\____|\\__,_|\\__\\___|\n");
}
