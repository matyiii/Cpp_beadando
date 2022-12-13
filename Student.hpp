class Student {
private:
  string name;
  string id;
  vector<int> grades;
public:
  Student(string n, string i) {
    name = n;
    id = i;
  }
  Student() {
    name = "";
    id = "";
  }
  string getName() { return name; }
  string getId() { return id; }
  void addGrade(int grade) {
    grades.push_back(grade);
  }
  void showGrades() {
  for (int grade : grades) {
    cout << grade << " ";
  }
}
};
