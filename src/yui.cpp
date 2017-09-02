#include <iostream>
#include "lib/skills.h"
#include "lib/inventory.h"
using namespace std;



int main(int argc, char *argv[])
{
 if(string(argv[2]) == "skill"){skills(argv[1], argv[3]);}
 if(string(argv[2]) == "inventory"){inventory();}
 return 0;
}
