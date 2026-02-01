#include<iostream>
using namespace std;
class BoardMarker{
  string company;
  string color;
  bool refillable;
  bool inkstatus;
  public:
  void set_values(string com, string col, bool refill, bool status){
    company=com;
    color=col;
    refillable=refill;
    inkstatus=status;
  }
  void write(void){
    cout<<company<<", "<<color<<endl;
    if(inkstatus==false){
      cout<<"Writing is not possible!(Refill the ink)"<<endl;
    }
    else{
      cout<<"Continue with writing"<<endl;
    }
  }
  void refill(void){
    if(inkstatus==false){
      if(refillable==true){
        inkstatus==true;
        cout<<"The ink is refilled!"<<endl;
      }
      else{
        cout<<"Buy a new marker, this marker is not refillable!"<<endl;
      }
    }
  }
};
int main(){
BoardMarker b1;
b1.set_values("dollar","black",true,false);
b1.write();
b1.refill();

b1.set_values("dollar","blue",false,true);
b1.write();
b1.refill();

b1.set_values("dollar","black",false,false);
b1.write();
b1.refill();
return 0;
}
