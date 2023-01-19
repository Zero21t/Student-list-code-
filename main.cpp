#include <iostream>
using namespace std;

struct info{
    public:
    string number[6];
    string name[6];
    string Age[6]; 
};
struct info information;
void prints(){
    for(int i = 1; i<=5; ++i){
        cout<< "student "<<i<<"'s"<<" Number: "<< information.number[i]<<endl;
        cout<< "student "<<i<<"'s"<<" Name: "<< information.name[i]<<endl;
        cout<< "student "<<i<<"'s"<<" Age: "<< information.Age[i]<<endl;
        cout <<"----------------------------------------------------------\n";
    }
}

void welcome(){
    
    cout<<"welcome please enter 5 Different students information below: "<<endl;
    for(int i = 1; i<=5; ++i){
        cout<<"Please enter the "<< i <<" students number: "<<endl;
    cin>>information.number[i];
    cout<<"enter "<<i<<" Students name: "<<endl;
    cin>>information.name[i];
    cout<<"enter "<<i<<" students age"<<endl;
    cin>>information.Age[i];
    }
    prints();
}
int main(){
    welcome();

}