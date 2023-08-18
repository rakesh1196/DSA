#include<iostream>
using namespace std;
int
main ()
{

  int inpt;
  cin >> inpt;

  // first star

  for (int i = inpt; i >= 1; --i)
    {
      for (int j = 1; j <= inpt - i; ++j)
	{
	  cout << " ";
	}
      for (int j = i; j <= i * 2 - 1; ++j)
	{
	  cout << "*";
	}
      for (int j = 0; j < i - 1; ++j)
	{
	  cout << "*";

	}
      cout << endl;
    }

  // second star

  for (int i = 1; i <= inpt; i = i + 1)
    {
      for (int j = 1; j <= inpt - i; j = j + 1)
	{

	  cout << " ";
	}
      for (int str = 1; str <= 2 * i - 1; str = str + 1)
	{


	  cout << "*";

	}
      cout << endl;
    }

  return 0;
}

// 5
// *********
//  *******
//   *****
//   ***
//     *
//     *
//   ***
//   *****
//  *******
// *********

