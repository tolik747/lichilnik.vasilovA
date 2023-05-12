#include <iostream>
#include<Windows.h>

class DigitalCounter {
   
private:
    int currentValue;
    int minimum;
    int maximum;

public:
    
    DigitalCounter(int minVal, int maxVal) {
        minimum = minVal;
        maximum = maxVal;
        currentValue = minimum;
    }

    void increment() {
        if (currentValue == maximum) {
            currentValue = minimum;
        }
        else {
            currentValue++;
        }
    }

  
    int getValue() {
        return currentValue;
    }
};

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
  
    DigitalCounter counter(0, 59);

  
    counter.increment();

    
    std::cout << "Поточне значення: " << counter.getValue() << std::endl;

    return 0;
}
