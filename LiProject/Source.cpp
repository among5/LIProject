#include <iostream>

#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdio>

int main()
{
  std::ifstream input("enuc.dat");
  int name;
  input >> name;
  printf("DONE");
  input.close();

}
