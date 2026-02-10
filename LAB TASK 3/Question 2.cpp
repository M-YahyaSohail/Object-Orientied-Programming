#include<iostream>
#include<string>
#include<vector>
class weekDays{
    std::vector<std::string>Days;
    int CurrentDay;
    public:
    weekDays():Days{"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"}{}

    weekDays(int _CurrentDay): CurrentDay(_CurrentDay),Days{"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"}{
        if(CurrentDay>=1){
            if(CurrentDay>7){
                CurrentDay%=7;
            }
        }

        else{
            std::cout<<"Wrong Input!"<<std::endl;
        }
    }
    void getCurrentDay(){
        std::cout<<"The current Day is: "<<Days[CurrentDay-1]<<std::endl;
    }
    void getNextDay(){
        if(CurrentDay==7){
            std::cout<<"The next Day is: "<<Days[0]<<std::endl;
        }
        else{
            std::cout<<"The next Day is: "<<Days[CurrentDay]<<std::endl;
        }
    }
    void getPreviousDay(){
        if(CurrentDay==1){
            std::cout<<"The Previous Day is: "<<Days[6]<<std::endl;
        }
        else{
             std::cout<<"The Previous Day is: "<<Days[CurrentDay-1-1]<<std::endl;

        }
    }
    void getNthDayFromToday(int N){
        int days=N%7;
        int NthDay=CurrentDay+days;
        if(NthDay>7){
                std::cout<<"The day after "<<N<<" days is: "<<Days[(NthDay%=7)-1]<<std::endl;
            }
        else{
            std::cout<<"The day after "<<N<<" days is: "<<Days[(NthDay)-1]<<std::endl;
        }    
    }

};
int main(){
    weekDays* obj1=new weekDays(3);//Initialised an object using DMA
    obj1->getCurrentDay();
    obj1->getNextDay();
    obj1->getPreviousDay();
    obj1->getNthDayFromToday(17);

    delete obj1;
    return 0;
}
