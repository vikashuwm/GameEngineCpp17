#include"course.cpp"

int main()
{
    Student student1;
    Student student2("Vikash" , "Kumar" , 25, 1);
    Student student3("Mat" , "" , 25, 2);
    Student student4("Daniel" , "Hepner", 26, 3);

    // creating a course
    Course comp700("Comp 700");
    comp700.addStudent(student1);
    comp700.addStudent(student2);
    comp700.addStudent(student3);
    comp700.addStudent(student4);

    // Loading data from file
    comp700.loadFromFile("student.txt");
    comp700.print();

    // return ok.
    return 0;
}