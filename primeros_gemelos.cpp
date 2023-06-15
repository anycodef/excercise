// found the prime numbers that are too twins numbers.
# include <iostream>
using namespace std;

bool is_prime(int);

int main() {
  int a, b, c;
  int last_number_prime = 0;
  int amount_twis_number = 0;

  cout << "\n\tThis program found a twins number between a and b." << endl;
  cout << " a: ";
  cin >> a;
  cout << " b: ";
  cin >> b; 

  if ( a != b ) {
    if ( a > b ) {
      c = a;
      a = b;
      b = c;
    }

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
  } else {
    cout << "\n\tNot found twins numbers because a is equal to b. ";
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
  
