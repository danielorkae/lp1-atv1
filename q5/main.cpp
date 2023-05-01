#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <map>

using namespace std;

struct Student
{
    string name;
    float av1, av2, av3;
};

vector<Student> get_students();
void save_students(vector<Student> students);
void print_students(vector<Student> students);

int main()
{
    vector<Student> students_to_save;

    students_to_save.push_back({"John", 9, 10, 7});
    students_to_save.push_back({"Mary", 10, 10, 10});
    students_to_save.push_back({"Peter", 10, 9, 10});
    students_to_save.push_back({"Paul", 10, 10, 8});
    students_to_save.push_back({"Mark", 10, 7, 10});
    students_to_save.push_back({"Luke", 10, 10, 10});
    students_to_save.push_back({"James", 10, 9, 10});
    students_to_save.push_back({"Jude", 8, 7, 10});
    students_to_save.push_back({"Thomas", 10, 10, 10});
    students_to_save.push_back({"Matthew", 10, 9, 10});
    students_to_save.push_back({"Simon", 10, 7, 10});
    students_to_save.push_back({"Judas", 9, 8, 10});
    students_to_save.push_back({"Bartholomew", 10, 7, 9});

    save_students(students_to_save);

    vector<Student> students = get_students();
    print_students(students);

    return 0;
}

/// @brief Retorna os alunos salvos no arquivo students.
/// @return
vector<Student> get_students()
{
    vector<Student> students;
    fstream file;

    file.open("students.txt", ios::in | ios::app);

    while (!file.eof())
    {
        string name;
        float av1, av2, av3;

        file >> name >> av1 >> av2 >> av3;

        students.push_back({name, av1, av2, av3});
    }

    file.close();

    return students;
}

/// @brief Salva os alunos no arquivo students.
/// @param students
void save_students(vector<Student> students)
{
    fstream file;
    file.open("students.txt", ios::out);

    for (int i = 0; i < students.size(); i++)
    {
        file << students[i].name << endl
             << students[i].av1 << endl
             << students[i].av2 << endl
             << students[i].av3 << endl;
    }

    file.close();
}

/// @brief Imprime os alunos e suas médias.
/// @param students
void print_students(vector<Student> students)
{
    map<string, float> averages;

    for (int i = 0; i < students.size(); i++)
    {
        averages[students[i].name] = (students[i].av1 + students[i].av2 + students[i].av3) / 3;
    }

    for (auto it = averages.begin(); it != averages.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
}
