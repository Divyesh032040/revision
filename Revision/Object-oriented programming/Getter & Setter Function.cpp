#include <iostream>
using namespace std;
 
class hero{
private:
int health = 50;

public:
char level = 'A';

//getter function - access private members out of class 

int getHealth(){
    return health;
}

char getLevel(){
    return level;
}

//setter function - set new value of data member out size of class 

void setHealth(int h){
    health = h;
}

void setLevel(char l){
    level = l;
}

};


int main() {

//creating a object 
hero ramesh;

//using get functions 

//access private member using getter function 
cout<<"health of ramesh is : "<<ramesh.getHealth()<<endl;  //50
//access public member normally 
cout<<"level of ramesh is : "<<ramesh.level<<endl;   //A

//using set function 

ramesh.setHealth(90);   //set health from 50 to 90

cout<<"health of ramesh is : "<<ramesh.getHealth()<<endl;  //90

ramesh.setLevel('B');

cout<<"level of ramesh is : "<<ramesh.level<<endl;  //B


// health of ramesh is : 50
// level of ramesh is : A
// health of ramesh is : 90
// level of ramesh is : B

return 0;
}


