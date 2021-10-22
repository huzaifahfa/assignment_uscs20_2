#include <iostream>
using namespace std;

int main()
{
  //Welcome Interface

  cout << "#####################################################################"
       << "\n---------------------------------------------------------------------"
       << "\n   ___          _________  __  ______  _____  __ ___ ____  ______"
       << "\n   \\  \\  ____  /  /  __  \\|  |/   ___|/  _  \\|  '_  '_   \\/  __  \\ "
       << "\n    \\  \\/    \\/  /\\   ___/|  |   (___|  (_)  |  | | | |  |\\   ___/"
       << "\n     \\____/\\____/  \\_____||__|\\______|\\_____/|__| |_| |__| \\_____|"
       << "\n---------------------------------------------------------------------"
       << "\n||||||||||||||||||||         GSC CINEMA        ||||||||||||||||||||||"
       << "\n#####################################################################";

  //username and id

  int choice1, password, count;
  string username;

  cout << "\n||||||||||||||||||||  LOGIN INTO YOUR ACCOUNT  ||||||||||||||||||||||"
       << "\n#####################################################################\n"
       << "\n\tPress 1 to continue"
       << "\n\tPress 2 to register\n"
       << "\n*********************************************************************\n";

  count = 1;
  while (count <= 3)
  {
    cout << "\n\tENTER YOUR CHOICE: ";
    cin >> choice1;

    cout << "\n***********************************************************************";

    if (choice1 == 1)
    {
      count = 1;
      while (count <= 3)
      {
        cout << "\n\tENTER YOUR USERNAME: ";
        cin >> username;

        cout << "\tENTER YOUR PASSWORD: ";
        cin >> password;

        if (password >= 10000 || password < 1000)
        {
          cout << "\n\tINVALID PASSWORD"
               << "\n\tPLEASE ENTER ONLY 4 DIGIT NUMBER\n";
        }
        else
          break;
      }
      break;
    }
    else if (choice1 == 2)
    {
      cout << "\n\tREGISTER YOUR ACCOUNT\n"
           << "\n\tENTER YOUR USERNAME: ";

      cin >> username;

      count = 1;
      while (count <= 3)
      {
        cout << "\n\tENTER YOUR PASSWORD: ";
        cin >> password;
        if (password >= 10000 || password < 1000)
        {
          cout << "\n\tINVALID PASSWORD";
          cout << "\n\t4 DIGIT NUMBER ONLY";
        }
        else
          break;
      }
      break;
    }
    else if (choice1 > 2)
      cout << "\n\tINVALID CHOICE";
    else
      break;
  }

  // book ticket

  int choice2;

  cout << "\n***********************************************************************"
       << "\n\tHI " << username << "!!!"
       << "\tPLEASE CHOOSE YOUR DESIRED MOVIES\n"
       << "-----------------------------------------------------------------------"
       << "\n ____________________________________"
       << "\n|\tNO.       |      MOVIE      |"
       << "\n|\t 1        |     SPIDERMAN   |"
       << "\n|\t 2        |     SUPERMAN    |"
       << "\n|\t 3        |      BATMAN     |"
       << "\n-------------------------------------"
       << "\n----------------------------------------------------------------------"
       << "\n\tSENSITIVE CHARACTER";

  count = 1;
  while (count <= 3)
  {
    cout << "\n\tENTER NUMBER (1 - 3): ";
    cin >> choice2;
    if (choice2 < 1 || choice2 > 3)
    {
      cout << "\tINVALID NUMBER";
    }
    else
      break;
  }

  cout << "\n***********************************************************************"
       << "\n***********************************************************************"
       << "\n";

  if (choice2 == 1 || choice2 == 2 || choice2 == 3)
  {
    cout << "\tPLEASE CHOOSE YOUR DESIRED SEAT LOCATION";
    cout << "\n";
    cout << "-----------------------------------------------------------------------"
         << "\n ___________________________________________________"
         << "\n|\tCODE      |  SEAT LOCATION  |   PRICE(RM)  |"
         << "\n|\t B        |       BOX       |      200     |"
         << "\n|\t P        |    PAVILLION    |      150     |"
         << "\n|\t F        |      FANCY      |       75     |"
         << "\n|\t L        |      LAWN       |       35     |"
         << "\n----------------------------------------------------";
  }

  cout << "\n----------------------------------------------------------------------";
  cout << "\n\tSENSITIVE CHARACTER";

  count = 1;
  while (count <= 3)
  {
    char code1;
    cout << "\n\tENTER CODE (B, P, F, L): ";
    cin >> code1;
    if (code1 == 'B' || code1 == 'P' || code1 == 'F' || code1 == 'L')
      break;
    else
      cout << "\tINVALID CODE";
    continue;
  }

  cout << "\n***********************************************************************"
       << "\n***********************************************************************"
       << "\n";

  // beverages

  char choice3;
  int code2;

  count = 1;
  while (count <= 3)
  {
    cout << "\n";
    cout << "\tDO YOU WANT BEVERAGES? (y/n)";
    cout << "\n\t y for yes";
    cout << "\n\t n for no";
    cout << "\n\tENTER YOUR CHOICE: ";
    cin >> choice3;
    if (choice3 == 'y' || choice3 == 'Y')
      break;
    else if (choice3 == 'n' || choice3 == 'N')
      break;
    else
      cout << "\n\tINVALID";
    continue;
  }
  cout << "\n----------------------------------------------------------------------";

  if (choice3 == 'y' || choice3 == 'Y')
  {
    cout << "\n\tPLEASE CHOOSE YOUR DESIRED BEVERAGES";
    cout << "\n";
    cout << "-----------------------------------------------------------------------"
         << "\n ___________________________________________________"
         << "\n|\tCODE      |    BEVERAGES    |   PRICE(RM)  |"
         << "\n|\t 1        |     POPCORN     |       8      |"
         << "\n|\t 2        |      WATER      |       3      |"
         << "\n|\t 3        | POPCORN + WATER |       10     |"
         << "\n----------------------------------------------------";
    cout << "\n----------------------------------------------------------------------";
    cout << "\n\tSENSITIVE CHARACTER";
    count = 1;
    while (count <= 3)
    {
      cout << "\n\tENTER YOUR CODE: ";
      cin >> code2;
      if (code2 == 1 || code2 == 2 || code2 == 3)
        break;
      else
        cout << "\tINVALID CODE";
      continue;
    }
  }

  return 0;
}