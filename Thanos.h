#include"monster.h"

class Thanos {
private:
    int stones;
    int hp; //extra hp;
public:
    /* constructor and destructor */
Thanos(int =0,int=1000); //stone, hp
~Thanos();
    void snap_finger(monster[],int);
    void operator++(){
      stones++;
    }; // increase the stone;
};

void Thanos::snap_finger(monster m[], int n){
  cout<<"SNAP"<<endl;
  if(stones==6){
    cout<<"Balance Restore"<<endl;
    for(int i=0; i<(n/2) ; i++){
      --m[i];
    }
  }else{
    cout<<"nothing happens..."<<endl;
  }
}

Thanos::Thanos(int s, int h){
  stones = s;
  hp = h;
}
Thanos::~Thanos(){
  cout<<"Thanos is gone"<<endl;
}