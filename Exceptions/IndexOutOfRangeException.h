#ifndef INDEXOUTOFRANGEEXCEPTION_H
#define INDEXOUTOFRANGEEXCEPTION_H

#include <stdexcept>

class IndexOutOfRangeException : public std::exception
{
    char* m_msg;
public:
    IndexOutOfRangeException();
    explicit IndexOutOfRangeException(const char* msg);

    char* what();
};


#endif
