/************************* 
 * Автор: Смушков Кирилл *
 * Вариант: 12           *
 *                       *
 *************************/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
  
  // Средняя температура свинца(жидкого),средняя температура свинца(затвердевшего), время твердения, момент времени
  double averageTemperatureLiquid, averageTemperatureSolidification, solidificationTime, momentInTime;
  // Лимит
  int limit = 100;
  
  // Температура жидкого свинца
  double liquidTemperature;
  cout << " liquid Temperature = ";
  cin >> liquidTemperature;
  
  // Температура затвердения
  double solidificationTemperature;
  cout << " solidification Temperature = ";
  cin >> solidificationTemperature;
  
  solidificationTime = -(1.0 / 0.021) * log(solidificationTemperature / liquidTemperature);
  
  for (momentInTime = 0; momentInTime < limit; ++momentInTime) {
    
    cout << " moment In Time = ";
    cin >> momentInTime;
    
    averageTemperatureLiquid = liquidTemperature * exp(-0.021 * momentInTime);
    averageTemperatureSolidification = solidificationTemperature * exp(-0.015 * (momentInTime - solidificationTime));
    
    if (momentInTime < solidificationTime) {
      cout << " average Temperature Liquid = " << averageTemperatureLiquid << endl;
    }
    else {
      cout << " average Temperature Solidification = " << averageTemperatureSolidification << endl;
    }
  }
  
  return 0; 
}
