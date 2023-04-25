#include <iostream>
#include <cstring>
#include <stdbool.h>
#include "Mystring.h"

// No-args constructor
Mystring::Mystring() 
    : str{nullptr} {
    str = new char[1];
    *str = '\0';
}

// Overloaded constructor
Mystring::Mystring(const char *s) 
    : str {nullptr} {
        if (s==nullptr) {
            str = new char[1];
            *str = '\0';
        } else {
            str = new char[strlen(s)+1];
            strcpy(str, s);
        }
}

// Copy constructor
Mystring::Mystring(const Mystring &source) 
    : str{nullptr} {
        str = new char[strlen(source.str)+ 1];
        strcpy(str, source.str);
//        std::cout << "Copy constructor used" << std::endl;
}

// Move constructor
Mystring::Mystring( Mystring &&source) 
    :str(source.str) {
        source.str = nullptr;
//        std::cout << "Move constructor used" << std::endl;
}

// Destructor
Mystring::~Mystring() {
    delete [] str;
}

// Copy assignment
Mystring &Mystring::operator=(const Mystring &rhs) {
//    std::cout << "Using copy assignment" << std::endl;

    if (this == &rhs) 
        return *this;
    delete [] str;
    str = new char[strlen(rhs.str) + 1];
    strcpy(str, rhs.str);
    return *this;
}

// Move assignment
Mystring &Mystring::operator=( Mystring &&rhs) {
//    std::cout << "Using move assignment" << std::endl;

    if (this == &rhs) 
        return *this;
    delete [] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}


// Display method
void Mystring::display() const {
    std::cout << str << " : " << get_length() << std::endl;
}

// getters
int Mystring::get_length() const { return strlen(str); }
const char *Mystring::get_str() const { return str; }

// overloaded insertion operator
std::ostream &operator<<(std::ostream &os, const Mystring &rhs) {
    os << rhs.str;
    return os;
}

// overloaded extraction operator
std::istream &operator>>(std::istream &in, Mystring &rhs) {
    char *buff = new char[1000];
    in >> buff;
    rhs = Mystring{buff};
    delete [] buff;
    return in;
}

// overloaded unary minus operator
// converts the string to lower case
Mystring Mystring::operator-() const {
	/* create the copy of the string */
	char *buff = new char[std::strlen(str) + 1];
	strcpy(buff, str);

	/* convert the string to lower case */
	for (size_t i = 0; i < std::strlen(buff); i++) {
		buff[i] = std::tolower(buff[i]);
	}

	/* create a new object with the updated string value */
	Mystring temp{buff};
	delete [] buff;

	return temp;
}

// overloaded unary plus operator
// concatenation. Returns an object that concatenates the lhs and rhs
Mystring Mystring::operator+(const Mystring &rhs) const {
	/* create a new buffer with the size of total length of both the strings */
	char *buff = new char[std::strlen(str) + std::strlen(rhs.str) + 1];

	/* concatenate the strings in the new buffer */
	std::strcpy(buff, str);
	std::strcat(buff, rhs.str);

	/* create a new object with the updated string value */
	Mystring temp{buff};
	delete [] buff;

	return temp;
}

// overloaded string equality operator
// returns true if the two strings are equal
bool Mystring::operator==(const Mystring &rhs) const {
	return (std::strcmp(str, rhs.str) == 0);
}

// overloaded string non-equality operator
// returns true if the two strings are not equal
bool Mystring::operator!=(const Mystring &rhs) const {
	return !(std::strcmp(str, rhs.str) == 0);
}

// overloaded string less than comparator
// returns true if the lhs string is lexically less than the rhs string
bool Mystring::operator<(const Mystring &rhs) const {
	return (std::strcmp(str, rhs.str) < 0);
}

// overloaded string greater than comparator
// returns true if the lhs string is lexically greater than the rhs string
bool Mystring::operator>(const Mystring &rhs) const {
	return (std::strcmp(str, rhs.str) > 0);
}

// overloaded string addition
// concatenate the rhs string to the lhs string and store the result in lhs object
Mystring &Mystring::operator+=(const Mystring &rhs) {
	*this = *this + rhs;
	return *this;
}

// overloaded string multiplier
// repeat -  results in a string that is copied n times
Mystring Mystring::operator*(int n) const {
	Mystring temp;
    for (int i = 1; i <= n; i++)
        temp = temp + *this;
    return temp;
}

// overloaded string multiplier and assign
// repeat the string on the lhs n times and store the result back in the lhs object
Mystring &Mystring::operator*=(int n) {
	*this = *this * n;
    return *this;
}

// Pre-increment - make the string upper-case
Mystring &Mystring::operator++() {
    for (size_t i=0; i<std::strlen(str); i++){
		str[i] = std::toupper(str[i]);
	}
   return *this;
}

//Post-increment - make the string upper-case
Mystring Mystring::operator++(int) {
   Mystring temp (*this);
   operator++();
   return temp;
}