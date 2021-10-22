#include <iostream>
using namespace std;

int main()
{
  int choice1, password;
  string username;
    
  cout << "\n\tENTER YOUR CHOICE: ";
  cin >> choice1;


  cout << "\n***********************************************************************";
  switch (choice1)
  {
  case 1:
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

  case 2:
    cout << "\n\tREGISTER YOUR ACCOUNT\n"
         << "\n\tENTER YOUR USERNAME: ";

    cin >> username;

    cout << "\n\tENTER YOUR PASSWORD: ";
    cin >> password;

    if (password >= 10000 || password < 1000)
    {
      cout << "\n\tINVALID PASSWORD";
      cout << "\n\t4 DIGIT NUMBER ONLY";
    }
    else
      break;

  default:
    cout << "\n\tINVALID CHOICE";
    break;
  }

  return 0;
}