# include <iostream>
using namespace std;

int main() {

  int year;
  int A,B,C,D,E;
  int pascua;
  
  do {
    system("clear");
    cout << " Enter the year for compute date of pascua: ";
    cin >> year;
  } while (year < 19);
  
  A = year % 19;
  B = year % 4;
  C = year % 7;
  D = (19*A + 24) % 30;
  E = (2*B + 4*C + 6*D + 5) % 7;
  pascua = 22 + D + E;

  cout << "\n\tDate: ";

  if (pascua > 31) {
    cout << pascua - 31 << " April ";
  } else {
    cout << pascua << " March ";
  }

  cout << year << endl; 

  return 0;
}
