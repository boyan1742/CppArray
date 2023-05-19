#include "IndexOutOfRangeException.h"
#include <cstring>

IndexOutOfRangeException::IndexOutOfRangeException()
{
    m_msg = new char[23];
    strcpy_s(m_msg, 23, "Index is out of range!");
}
IndexOutOfRangeException::IndexOutOfRangeException(const char *msg)
{
    m_msg = new char[strlen(msg) + 1];
    strcpy_s(m_msg, strlen(msg) + 1, msg);
}
char *IndexOutOfRangeException::what()
{
    return m_msg;
}
