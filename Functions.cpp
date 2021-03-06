// swaps two variables efficiently
// !! cant be const char* or floating number !! (works on string though)
template<typename T, typename U>
void swapE(T &fValue, U &sValue) { fValue^=sValue; sValue^=fValue; fValue^=sValue; }


// checks for variable type
// does not recognize rvalues and lvalues
template <typename T> const char* varType(T&) { return "unknown"; }    // default
template<> const char* varType(int&) { return "int"; }
template<> const char* varType(short&) { return "short"; }
template<> const char* varType(long&) { return "long"; }
template<> const char* varType(unsigned&) { return "unsigned"; }
template<> const char* varType(unsigned short&) { return "unsigned short"; }
template<> const char* varType(unsigned long&) { return "unsigned long"; }
template<> const char* varType(float&) { return "float"; }
template<> const char* varType(double&) { return "double"; }
template<> const char* varType(long double&) { return "long double"; }
template<> const char* varType(std::string&) { return "String"; }
template<> const char* varType(char&) { return "char"; }
template<> const char* varType(signed char&) { return "signed char"; }
template<> const char* varType(unsigned char&) { return "unsigned char"; }
template<> const char* varType(char*&) { return "char*"; }
template<> const char* varType(signed char*&) { return "signed char*"; }
template<> const char* varType(unsigned char*&) { return "unsigned char*"; }


// logarithm of given value with a given base
// obviously works only with numbers above 0
unsigned int logN(unsigned int value, unsigned int base)
{
    return (n > r - 1) ? 1 +
        logN(n / r, r) : 0;
}


// floors given value 
int floorE(double v)
{
    int t;
    if (v < 0) { t = (int)v + (-1); return t; }
    else return v;
}


//using floor and logarithm function it outputs integer digits count
int intLength(int a) {
    return floorE(logN(a, 10)) + 1;
}


//check if given value is the power of number 2 ex. 2, 4, 8, 1024
bool isPowerOfTwo(int x) {
    return x && (!(x & (x - 1)));
}
