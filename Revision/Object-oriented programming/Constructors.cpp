#include <iostream>
using namespace std;

//default constructor 
//parameterized constructor 
//copy constructor 

class hero{
private:
int health ;

public:
char level;

//default constructor 

hero (){
    cout<<"default constructor called "<<endl;
}

//parameterized constructor 

hero(int health , char level){
    this -> health = health;
    this -> level = level;
}

//when we create a manually  constructor ,  default constructor will be die. 

//getter function

int getHealth(){
    return health;
}

char getLevel(){
    return level;
}

//setter function -

void setHealth(int h){
    health = h;
}

void setLevel(char l){
    level = l;
}

};

int main() {

//static allocation 
hero ramesh(88 , 'U'); 

cout<<ramesh.getHealth()<<" and "<<ramesh.level<<endl;

//dynamic allocation

hero *ram = new hero(23 , 'H');

cout<<ram->getHealth()<<" and "<<ram->level<<endl;

//copy constructor 

//copy constructor help a new object to copy the value if parameters of other object 

hero trevor(ramesh);

cout<<"level of trevor is : "<<trevor.getLevel()<<endl;  //U
cout<<"health of trevor is: "<<trevor.getHealth()<<endl;  //88

//her trevor copy the value of level and health from ramesh.

return 0;
}
