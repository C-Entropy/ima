#ifndef PLAYER_H
#define PLAYER_H

class People
{
 public:
  void getName();
  void addEquip();//正数增加 负数减少 
  People(char Name, int Age, bool Sex);


 private:
  char name[20];
  int age;
  bool sex;
  int equip[10];
  int skill[10];
};

People::People()

extern people player;//玩家
#endif
