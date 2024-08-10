#include <iostream>
#include <vector>
using std::cout;
using std::vector;

// TODO: Add PrintBoard function here.
static void PrintBoard(vector<vector<int>> p_vector);
  
  
int main() {
  vector<vector<int>> board{{0, 1, 0, 0, 0, 0},
                            {0, 1, 0, 0, 0, 0},
                            {0, 1, 0, 0, 0, 0},
                            {0, 1, 0, 0, 0, 0},
                            {0, 0, 0, 0, 1, 0}};
  // TODO: Call PrintBoard function here.
  PrintBoard(board);
}

static void PrintBoard(vector<vector<int>> p_vector)
{
  for(auto l_v : p_vector)
  {
    for(int i : l_v)
    {
      cout << i;
    }
    
    cout << "\n";
  }
}  