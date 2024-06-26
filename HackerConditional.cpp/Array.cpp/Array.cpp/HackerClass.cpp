/*Input Format
Input will consist of four lines.
The first line will contain an integer, representing the age. The second line will contain a string, consisting of lower-case Latin characters ('a'-'z'), representing the first_name of a student.
The third line will contain another string, consisting of lower-case Latin characters ('a'-'z'), representing the last_name of a student.
The fourth line will contain an integer, representing the standard of student.
Note: The number of characters in first_name and last_name will not exceed 50.

Output Format
The code provided by HackerRank will use your class members to set and then get the elements of the Student class.
Sample Input
15
john
carmack
10
Sample Output
15
carmack, john
10

15,john,carmack,10*/
#include <iostream>
#include <sstream>
using namespace std;

class Student {
    private:
        int age;
        string first_name;
        string last_name;
        int standard;
    public:
        void set_age(int a) {
            age = a;
        }
        int get_age() {
            return age;
        }

        void set_first_name(string fn) {
            first_name = fn;
        }
        string get_first_name() {
            return first_name;
        }

        void set_last_name(string ln) {
            last_name = ln;
        }
        string get_last_name() {
            return last_name;
        }

        void set_standard(int s) {
            standard = s;
        }
        int get_standard() {
            return standard;
        }

        string to_string() {
            stringstream ss;
            ss << age << "," << first_name << "," << last_name << "," << standard;
            return ss.str();
        }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}