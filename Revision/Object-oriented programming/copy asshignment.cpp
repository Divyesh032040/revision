#include <iostream> 
#include <bits/stdc++.h> 
using namespace std;

//copy assignment   

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





hero ( hero& temp ){
    
char*ch = new char [strlen(temp.name)+1];
strcpy(ch,temp.name);   
this->name = ch;      
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




hero hero2(hero1);

hero2.print();


hero1.name[0]='G';

hero1.print();    

hero2.print();  

//copy assignment 

hero1 = hero2;

//simple her copy all value of hero2 to hero1 


// consept of destructor 

    
// #include <iostream>
// using namespace std;

// class hero {
// public:
// int health;
// string name;

// //destructor 

// ~ hero(){

//     cout<<"Destructor called "<<endl;
// }

// };


// int main() {

// //static  
// hero a;      //destructor for static allocation will be happen automatically.

// //dynamically 
// hero *b = new hero();       //but in case of dynamic allocation , we have to use delete(class name) ,, and de allocate manually. 

// delete(b);

// return 0;
// }






return 0;
}

