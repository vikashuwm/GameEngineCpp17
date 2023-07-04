#include <iostream>
class Student
{
    std::string m_first = "Fist name";
    std::string m_last  = "Last name";
    size_t      m_age   = 0;
    size_t      m_id   = 0;

public:
    Student () {}
    Student(std::string first, std::string last, size_t age, size_t avg)
        : m_first  (first)
        , m_last   (last)
        , m_age    (age) 
        , m_id    (avg)
    {
    }
    size_t getAvg()
    {
        return m_id;
    }
    size_t getAge ()
    {
        return m_age;
    }
    std::string getFirst ()
    {
        return m_first;
    }
    std::string getLast ()
    {
        return m_last;
    }
    void print() const
    {
        std:: cout << m_first << " " << m_last << " " <<m_age << " " << m_id << "\n";
    }
};