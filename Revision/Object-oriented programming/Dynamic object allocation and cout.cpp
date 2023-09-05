#include <iostream>
using namespace std;
 
class hero{
private:
int health = 50;

public:
char level = 'A';

//getter function - 

int getHealth(){
    return health;
}

char getLevel(){
    return level;
}

//setter function - s

void setHealth(int h){
    health = h;
}

void setLevel(char l){
    level = l;
}

};

int main() {

//creating a object in static memory - statically 

hero ramesh;

//cout static object 

cout<<"health of ramesh is : "<<ramesh.getHealth()<<endl;  


cout<<"level of ramesh is : "<<ramesh.level<<endl;  

//creating a object un heap memory - dynamically allocation 

hero *ram = new hero;

//print dynamic object 

ram -> setHealth(79);

cout<<"health of ramesh is : "<<ram -> getHealth()<<endl;    // or  cout<<"health of ramesh is : "<<(*ramesh).getHealth()<<endl;

cout<<"level of ramesh is : "<<ram -> level<<endl;           // or cout<<"level of ramesh is : "<<(*ramesh).level<<endl;


return 0;
}


