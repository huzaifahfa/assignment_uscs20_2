#include <iostream>
using namespace std;

int main()
{
  int count, choice2, numSeat;
  float priceLoc, sumPrice, discount, discPrice, sumdiscPrice;
  char code1;

  count = 1;
  while (count <= 1)
  {
    cout << "\n\tENTER NUMBER (1 - 3): ";
    cin >> choice2;

    switch (choice2)
    {
    case 1:
    case 2:
    case 3:

      cout << "\tPLEASE CHOOSE YOUR DESIRED SEAT LOCATION";
      cout << "\n";
      cout << "-----------------------------------------------------------------------"
           << "\n ___________________________________________________"
           << "\n|\tCODE      |  SEAT LOCATION  |   PRICE(RM)   |  DISCOUNT RATE  |"
           << "\n|\t B        |       BOX       |      200      |       20%       |"
           << "\n|\t P        |    PAVILLION    |      150      |       15%       |"
           << "\n|\t F        |      FANCY      |       75      |       10%       |"
           << "\n|\t L        |      LAWN       |       35      |        5%       |"
           << "\n----------------------------------------------------";

      cout << "\n----------------------------------------------------------------------";
      cout << "\n\tSENSITIVE CHARACTER";
      break;

    default:
      cout << "\tINVALID NUMBER, PLEASE CHOOSE BETWEEN 1-3 ONLY.";
      continue;
    }
    count++;
  }

  double totalBefdisc = 0;
  double totalAfdisc = 0;
  const char EXIT = 'q';
  char letter;
  while (letter != EXIT)
  {
    cout << "\n\tENTER CODE (B, P, F, L): ";
    cin >> code1;
    cout << "\n\tENTER HOW MANY SEATS: ";
    cin >> numSeat;

    switch (code1)
    {
    case 'B':
      priceLoc = 200;
      discount = 0.20;
      break;

    case 'P':
      priceLoc = 150;
      discount = 0.15;
      break;

    case 'F':
      priceLoc = 75;
      discount = 0.10;
      break;

    case 'L':
      priceLoc = 35;
      discount = 0.05;
      break;

    default:
      cout << "\tINVALID CODE";
      continue;
    }

    sumPrice = priceLoc * numSeat;
    discPrice = priceLoc - (priceLoc * discount);
    sumdiscPrice = discPrice * numSeat;

    cout << "\n\tBEFORE DISCOUNT: The price of " << numSeat << " " << code1 << " seat(s) is RM" << sumPrice << " .\n"
         << "\n\tAFTER DISCOUNT: The price of " << numSeat << " " << code1 << " seat(s) is RM" << sumdiscPrice
         << " .\n";

    totalBefdisc = totalBefdisc + sumPrice;
    totalAfdisc = totalAfdisc + sumdiscPrice;

    cout << "\n\tIf you want to buy more, press any letter except q.\n"
         << "\n\tIf you don't want to buy more, press q.\n";
    cin >> letter;
  }

  cout << "\n\tThe total price (before discount) is RM" << totalBefdisc << ".\n"
       << "\n\tThe total price (after discount) is RM" << totalAfdisc << ".\n"
       << "\n***********************************************************************"
       << "\n***********************************************************************"
       << "\n";

  return 0;
}