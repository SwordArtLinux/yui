#include <iostream>
#include <sqlite3.h>
using namespace std;

int add(string skill);
int remove(string skill);

int skills(string action, string skill)
{
//   sqlite3_open("repos", );
  if (action == "add")
  {
   add(skill);
   return 0;
  }
  else if (action == "remove")
  {
   remove(skill);
   return 0;
  }
  else
  {
   cout << "I cannot '" << action << "' " << skill << "!\n"; return 1;
  }
}

int add(string skill)
{
 cout << "A new skill has been added: " << skill << ".\n" << endl;
 return 0;
}

int remove(string skill)
{
 cout << "A skill been removed: " << skill << ".\n" << endl;
 return 0;
}
