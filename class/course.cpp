#include"student.cpp"
#include<fstream>

class Course
{
    std::string          m_name = "Course";
    std::vector<Student> m_students;
public:
    Course(std::string name)
        :   m_name(name)
    {
    }
    void addStudent(const Student& s)
    {
        m_students.push_back(s);
    }
    const std::vector<Student>& getStudents() const
    {
        return m_students;
    }
    void print() const
    {
        for(const auto& s: m_students){
            s.print();
        }
    }

    void loadFromFile(const std::string& filename) 
    {
        std::ifstream   fin(filename);
        std::string     first = "First";
        std::string     last  = "Last";
        size_t          age   = 0;
        size_t          id    = 0;

        while(fin >> first)
        {
            fin >> last >> age >> id;
            addStudent(Student(first,last,age,id));
        }
    }
}; 