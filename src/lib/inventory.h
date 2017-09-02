#include <iostream>
using namespace std;

int open();
int close();

int inventory(string action)
{
 if(action=="open"){open();}
 else if(action=="close"){close();}
 else{cout<< "I cannot '"<< action <<"' your inventory!\n";}
 return 0;
}

int open()
{
 return 0;
}
int close()
{
 return 0;
}
