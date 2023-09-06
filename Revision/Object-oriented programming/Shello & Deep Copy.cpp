#include <iostream> 
#include <bits/stdc++.h> 
using namespace std;

//deep and shallow copy 

class hero{
private:

int health ;

public:
char *name;
char level;


hero(){
    
   cout<<"simple constructor called "<<endl;
   name = new char[100];
}

hero(int health ){
    this -> health = health;   
}

// hero(int health , char level ){
//     this -> level = level;
//     this -> health = health;
// }

//copy constructor  for deep copy 


hero ( hero& temp ){
    
char*ch = new char [strlen(temp.name)+1]; // strlen determines the length of string excluding the ending null character  
strcpy(ch,temp.name);   //char* strcpy(char* destination, const char* source);
this->name = ch;        //strcpy The strcpy() function copies the string pointed by source (including the null character) to the destination.

cout<<"copy constructor called "<<endl;
this -> health = temp.health;
this -> level = temp.level; 

}   

void print(){
    cout<<endl;
    cout<<"name is : "<< this -> name <<" "<<endl;
    cout<<"health is : "<< this -> health <<endl;
    cout<<"level is : "<< this -> level <<endl;

}

int getHealth(){
    return health;
}

char getLevel(){
    return level;
}

void setHealth(int h){
    health = h;
}

void setLevel (int ch){
    level = ch;
}


void setName (char name[]){
    this -> name = name;
}
};

int main() {

hero hero1;

hero1.setHealth(12);
hero1.setLevel('D');
char name[7]="Babbar";
hero1.setName(name);
hero1.print();


//use default copy constructor

hero hero2(hero1);

hero2.print();

//changing name of hero 1 

hero1.name[0]='G';

hero1.print();    //hero1 name changed to Gabbar 

hero2.print();   //her2 also change to Gabber

return 0;
}

//shallow copy - her name is a pointer and both hero1.name and hero2.name storing a address of char array (name) , not value. 
//so , when we change value of hero1 (which is name of hero 1 ) , than we call hero2.name , than hero2's name will be automatically changed because hero2.name has same address which value we change befor for hero1.  


//we can stop this shallow copy using deep copy 

//in deep copy - we create a new special char arr for hero2 which have diffrent address and same value  

//output

// simple constructor called 

// name is : Babbar 
// health is : 12
// level is : D
// copy constructor called 

// name is : Babbar 
// health is : 12
// level is : D

// name is : Gabbar 
// health is : 12
// level is : D

// name is : Babbar 
// health is : 12
// level is : D

