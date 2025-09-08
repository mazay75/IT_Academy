//Это главный файл с расширением .cpp
//- Необходимо сделать программу, которая вычисляет факториал 5.
// В зависимости от объявленного define все вычисления должны проводиться используя тип int или float.
// Обязательно использовать функцию и отдельный .h и .cpp файл

#include <iostream>
#include "Calculate_factorial.h"
#define FUNC_TYPE_FLOAT ;

using namespace std;

int main() {
    int a1 = 5;
    CalcFactorial (a1);
    return 0;
}
