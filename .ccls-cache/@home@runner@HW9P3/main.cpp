#include <iostream>
using namespace std;

////////////funtion prototype////////////
int tot_points(const char answ[][5], int num_tests);


int main()
{

char tests[6][5]=
{
  {'T', 'F', 'T', 'T', 'T'},
  {'T', 'T', 'T', 'T', 'T'},
  {'T', 'T', 'F', 'F', 'T'},
  {'F', 'T', 'F', 'F', 'F'},
  {'F', 'F', 'F', 'F', 'F'},
  {'T', 'T', 'F', 'T', 'F'}
};
  int points = tot_points(tests, 6);
  for (int j = 0; j++);
    cout<< points[j]<< " ,";

  return 0;
  
}

int tot_points(const char answ[][5], int num_tests)
{
  const char answ[5] = {'T', 'T', 'F', 'F', 'T'};
  int points = new int[num_tests]();
  const int point = 5;

  for (j = 0; j < num_tests; j++)
  for (i = 0; i < 5; i++)
    if(answ[j][i] == answ[i])
      points[j] += point;
  return points;
}