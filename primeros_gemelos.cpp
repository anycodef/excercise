// found the prime numbers that are too twins numbers.
# include <iostream>
using namespace std;

bool is_prime(int);

int main() {
  int a, b;
  int last_number_prime = 0;
  int amount_twis_number = 0;

  cout << "\n\tThis program found a twins number between a and b." << endl;
  do {
    system("cls");
    cout << "\na: ";
    cin >> a;
  } while (a < 0);
  
  do {
    system("cls");
    cout << "\na: " << a << endl;
    cout << "b: ";
    cin >> b; 
  } while (a > b);

 for ( int current_number = a; current_number <= b; current_number++ ) {
    if ( is_prime(current_number) ) {
      if ( last_number_prime ) {
        if ( current_number - last_number_prime == 2 ) {
          cout << " twis: " << last_number_prime << " - " << current_number << endl;
          amount_twis_number ++;
        }
      }
      last_number_prime = current_number;
    }
  }

  cout << "\n\tAmount twis number: " << amount_twis_number << endl;

  return 0;
}

bool is_prime(int number) {
  int divisor = 2;
  if (number > 1) {
    while ( number % divisor != 0 && divisor < number ) {
      divisor ++;
    }
    return divisor == number;
  } else {
    return false;
  }
}
  
