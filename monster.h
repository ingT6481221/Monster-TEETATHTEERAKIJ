#ifndef monster_h
#define monster_h
#include <iostream>
using namespace std;

class monster{
private:
	string name;
	int hp,potion;
public:

void print(); //to print all data
bool operator==(monster);

void operator++(){
  hp++;
};
void operator+=(int a){
  hp+=a;
};
void operator--(){
  hp=0;
};

void Attack(monster &); 
void Kill();

monster(string="Monster", int=10,int=0);//constructor
~monster();//deconstructor
};
  
monster::monster(string n, int a,int b){
   //set all values
  name=n;
  hp=a;
 potion=b;
   cout<<"A Monster is"<<" constructed"<<endl;
  cout<<"Hp:"<<hp<<endl;
  cout<<"========================="<<endl;
}
bool monster::operator==(monster x){
  return (hp==x.hp &&potion==x.potion &&name==x.name);
}

monster::~monster(){
  // cout<<"---"<<name<<" is destroyed---"<<endl;
}

void monster::print(){
  cout<<"---Name:"<<name<<"---"<<endl;
   cout<<"Hp:"<<hp<<endl;
  // cout<<"Potion:"<<potion<<endl;
  if(hp<=0){
    cout<<"<--is dead-->"<<endl;
  }
}

void monster::Kill(){
  hp=0;
  cout<<"A monster is dead "<<endl;
}
void monster::Attack(monster & b){
  cout<<name<<" ATTACK!! "<<b.name<<endl;
  if(b.hp>10){
    b.hp-=10;
  }
  else{
    b.hp=0;
    cout<<b.name<<" is dead "<<endl;
  }
}

#endif