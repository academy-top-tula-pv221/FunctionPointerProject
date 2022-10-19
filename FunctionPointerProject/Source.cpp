//int Hello()
//{
//    int a = 100;
//    return a;
//}
//
//int Sum(int a, int b)
//{
//    return a + b;
//}
//
//int Mult(int a, int b)
//{
//    return a * b;
//}
//
//int Min(int a, int b)
//{
//    return (a < b ? a : b);
//}
//
//int Calc(int a, int b, int(*funcPtr)(int, int))
//{
//    return funcPtr(a, b);
//}
//
//int(*SelectOperation(char sign))(int, int)
//{
//    switch (sign)
//    {
//    case '+': return Sum;
//    case '*': return Mult;
//    case '<': return Min;
//    default:
//        return nullptr;
//    }
//}
//
///*
//template <typename T>
//T Sum(T a, T b)
//{
//    return a + b;
//}
//
//template <typename T>
//T Mult(T a, T b)
//{
//    return a * b;
//}
//
//template <typename T>
//T Min(T a, T b)
//{
//    return (a < b ? a : b);
//}
//
//template <typename T>
//T Calc(T a, T b, T(*funcPtr)(T, T))
//{
//    return funcPtr(a, b);
//}
//*/
//
//
//
//
//int main2()
//{
//
//    int(*funcPtr)(int, int);
//    funcPtr = Sum;
//    std::cout << funcPtr(10, 20);
//
//    char sign;
//    std::cout << "input sign of operation ('+', '*'): ";
//    std::cin >> sign;
//
//    funcPtr = SelectOperation(sign);
//    std::cout << funcPtr(10, 20);
//    //std::cout << SelectOperation(sign)(10, 20);
//
//
//    /*switch (sign)
//    {
//    case '+': funcPtr = Sum; break;
//    case '*': funcPtr = Mult; break;
//    default:
//        funcPtr = nullptr;
//    }*/
//
//    //if(funcPtr)
//    //    std::cout << funcPtr(10, 20) << "\n";*/
//
//    //std::cout << Sum(10, 20) << "\n";
//    //std::cout << Sum(10.5, 20.5) << "\n";
//
//    //std::cout << Calc(10, 20, Sum) << "\n";
//
//}