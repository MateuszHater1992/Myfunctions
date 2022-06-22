// swaps two variables efficiently
// !! cant be const char* or floating number !! (works on string though)

template<typename T, typename U>
void swap(T &a, U &b)
{
	a^=b; b^=a;a^=b;
}

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
