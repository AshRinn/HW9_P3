#include <iostream>
using namespace std;

////////////funtion prototype////////////
int score(const char answ[][5], int r, int N_COLS);


int main()
{
int FinalScore = 0; 
const int N_COLS = 5;
const int N_ROWS = 6;

char answ[N_ROWS][N_COLS] = 
{
  {'T', 'F', 'T', 'T', 'T'},
  {'T', 'T', 'T', 'T', 'T'},
  {'T', 'T', 'F', 'F', 'T'},
  {'F', 'T', 'F', 'F', 'F'},
  {'F', 'F', 'F', 'F', 'F'},
  {'T', 'T', 'F', 'T', 'F'}
  };
  
 
  for (int r = 0; r<6; r++){
    score(answ, r, N_COLS);
    FinalScore = score(answ, r, N_COLS);
    }
    
  cout<< FinalScore<< endl;
  return 0;
  
}

int score(const char answ[][5], int r, int N_COLS)
{
  
  int score = 0;
  const char key[5] = {'T', 'T', 'F', 'F', 'T'};
  
  for (int c = 0; c < N_COLS; c++)
  {
    if(answ[r][c] == key[c])
      score = score + 5;
    }
  return score;
}
