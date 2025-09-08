//​​ Это файл с расширением .h для объявления 
//классов, функций, переменных и других элементов

#pragma once
#define FUNC_TYPE_FLOAT ;
#define FUNC_TYPE_INT ;

#ifdef FUNC_TYPE_FLOAT
    float CalcFactorial (int a);
#elif FUNC_TYPE_INT   
    int CalcFactorial (int a);
#else 
    int CalcFactorial (int a);
#endif 