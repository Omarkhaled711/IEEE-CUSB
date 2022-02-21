#include <string>
class Course{
        private:
        string courseName;
        string* students;
        int numOfStudents,capacity;
        public:
        Course(const Course& x){
            this-> courseName= x.courseName;
            this-> numOfStudents=x.numOfStudents;
            this->capacity=x.capacity;
            this-> students=new string[capacity];
        }
        //adding some functions
    };