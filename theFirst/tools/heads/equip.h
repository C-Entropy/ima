#ifndef EQUIP_H
#define EQUIP_H
class Equip
{
 public:
  Equip(char Name, char Describtion, int Attack, int Define, char Part);
  const char getDescribtion();
  const int getAttack();
  const int getDefine();
  const int getPart();
  
 private:
  char name[10];
  char describtion[50];
  int attack;
  int define;
  int part[10];
}

Equip:Equip(char Name, char Describtion, int Attack, int Define char Part)
{
  name = Name;
  describtion = describtion;
  attack = Attack;
  define = Define;
  part = Part;
}

const char *Equip:getAttack() {return attack;}
const int Equip:getDefine() {return define;}
const int Equip:getPart() {return part;}

extern Equip gunone;
extern Equip guntwo;
extern Equip gunthree;

extern Equip swordone;
extern Equip swordtwo;
extern Equip swordthree;

extern Equip gunone;
extern Equip guntwo;
extern Equip gunthree;

extern Equip gunone;
extern Equip guntwo;
extern Equip gunthree;
