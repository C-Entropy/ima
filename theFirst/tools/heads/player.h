#ifndef PLAYER_H
#define PLAYER_H

typedef struct
{
  char name[20];
  int age;
  bool sex;
  int equip[10];
  int skill[10];
}people;


extern people player;//玩家
#endif
