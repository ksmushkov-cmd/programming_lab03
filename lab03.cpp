/************************* 
 * Автор: Смушков Кирилл *
 * Вариант: 12           *
 *                       *
 *************************/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
  
  //время твердения, средняя температура свинца и момент времени
  double solidificationtime, averagetemperature, momentintime;

  //температура жидкого свинца
  double liquidtemperature;
  cout << " liquid temperature = ";
  cin >> liquidtemperature;
  
  //температура затвердения
  double solidificationtemperature;
  cout << " solidification temperature = ";
  cin >> solidificationtemperature;
  
  solidificationtime = -1.0 / 0.021 * log(solidificationtemperature / liquidtemperature);
  
  for(momentintime = 10; momentintime <= 30; momentintime += 10) {
    if(momentintime > solidificationtime) {
      averagetemperature = solidificationtemperature * exp(-0.015 * (momentintime - solidificationtime));
      cout << " averagetemperature = " << averagetemperature << endl;
    }
      
    else(momentintime > solidificationtime); {
      averagetemperature = liquidtemperature * exp(-0.021 * momentintime);
      cout << " averagetemperature = " << averagetemperature << endl;
    }
  }
    for(momentintime = 50; momentintime < 100; momentintime += 50) {
    if(momentintime > solidificationtime) {
      averagetemperature = solidificationtemperature * exp(-0.015 * (momentintime - solidificationtime));
      cout << " averagetemperature = " << averagetemperature << endl;
    }
      
    else(momentintime > solidificationtime); {
      averagetemperature = liquidtemperature * exp(-0.021 * momentintime);
      cout << " averagetemperature = " << averagetemperature << endl;
    }
  }
  return 0; 
}