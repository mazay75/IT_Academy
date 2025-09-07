//​Это файл с расширением .cpp для определения 
//(реализации) функций и методов, объявленных в .h файле

#include <iostream>
#include "Calculate_factorial.h"


using namespace std;

#ifdef FUNC_TYPE_FLOAT 
    float CalcFactorial (int a) {
    int n = 1;
    for (int i = 1; i <= a; ++i) {
        n = n * i;   
    }
    cout << "факториал " << a << " = "s << n << endl;
    return n;
}
#endif

#ifdef FUNC_TYPE_INT 
int CalcFactorial (int a) {
    int n = 1;
    for (int i = 1; i <= a; ++i) {
        n = n * i;   
    }
    cout << "факториал " << a << " = "s << n << endl;
    return n;     
}
#endif

