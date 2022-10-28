#include <iostream>
using namespace std;

////////////funtion prototype////////////
int score(const char answ[][5], int N_ROWS, int N_COLS);


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

int score(const char answ[][5], int N_ROWS, int N_COLS)
{
  int score = 0;
  
  const char answ[5] = {'T', 'T', 'F', 'F', 'T'};
  int score = new int[N_ROWS]();
  const int point = 5;

  for (c = 0; c < N_COLS; c++)
  for (r = 0; r < 5; r++)
    if(answ[r][c] == answ[c])
      score[c] score + 5;
  return score;
}