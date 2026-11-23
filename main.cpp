
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    float marks;

public:
    Student(int r, string n, float m) {
        rollNo = r;
        name = n;
        setMarks(m);
    }

    int getRollNo() { return rollNo; }
    string getName() { return name; }
    float getMarks() { return marks; }

    void setMarks(float m) {
        if (m >= 0 && m <= 100) {
            marks = m;
        } else {
            cout << "Invalid marks for " << name << ", setting to 0" << endl;
            marks = 0;
        }
    }

    void display() {
        cout << rollNo << " " << name << " " << marks << endl;
    }
};

void printResult(Student s) {
    if (s.getMarks() >= 40) {
        cout << s.getName() << ": Pass" << endl;
    } else {
        cout << s.getName() << ": Fail" << endl;
    }
}

int main() {
    Student batch[3] = {
        Student(201, "Rahul", 85),
        Student(202, "Meera", 32),
        Student(203, "Adithya", 110)
    };

    for (int i = 0; i < 3; i++) {
        batch[i].display();
    }

    batch[1].setMarks(65);

    cout << endl;

    for (int i = 0; i < 3; i++) {
        printResult(batch[i]);
    }

    return 0;
}
