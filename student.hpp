//header file student.hpp to declare your classes
//checking if student.hpp is previously defined
#ifndef STUDENT_HPP
#define STUDENT_HPP
using namespace std; //use namespace std
#include <string> //you will have to use string in C++
#include <iostream>

class ToeflScore
{
public:
        // Constructors
        ToeflScore(int read, int write, int listen, int speak);
        ToeflScore();
        // Mutator functions
        void setreading(int read);
        void setwriting(int write);
        void setlistening(int listen);
        void setspeaking(int speak);
        void settotalscore();
        // Accessor functions
        int getreading() const;
        int getwriting() const;
        int getlistening() const;
        int getspeaking() const;
        int gettotalscore() const;
private:
        int reading;
        int writing;
        int listening;
        int speaking;
        int totalscore;
};

class student
{
public:
  // Constructor
  student(string first, string last, float cgpa, int score, int id);
  student();
  // Mutator functions
  void setfname(string);
  void setlname(string);
  void setCGPA(float);
  void setscore(int);
  void setID(int);
  void setlink(student*);
  //Accessor functions
  string getfname() const;
  string getlname() const;
  float getCGPA() const;
  int getscore() const;
  int getID() const;
  student* getlink() const;
  //virtual functions
  virtual bool isDom();
  virtual bool isInt();
  virtual void print();
  virtual bool checkTOEFL() const;
  //friend functions
  friend string compareCountry(student, student);
  friend string compareProvince(student, student);
  friend string compareReseachScore(student*, student*);
  friend string compareCGPA(student*, student*);
  friend string compareFirstName(student*, student*);
  friend string compareLastName(student*, student*);
  friend string compareOverall(student*, student*);

  friend void add_node(student*, student*, student*);
  friend void search_ID(student*, int);
  friend void search_CGPA(student*, float);
  friend void search_score(student*, int);
  friend void search_name(student*, string, string);
  friend void delete_node(student*, student*, string, string);
  friend void delete_tips(student*, student*);
  friend void insertD(student*, student*, int);
  friend void insertI(student*, student*, int);

  friend void sortResearchscore(student*, student*);
  friend void sortCGPA(student*, student*);
  friend void sortFirstname(student*, student*);
  friend void sortLastname(student*, student*);
  friend void sortOverall(student*, student*);

  /*The student in the parameter points to nullptr*/

  friend void sortGPA(student*, student*);
  friend void merge(student*, student*, student*, student*, student*);
  friend void threshold(student*, float, int);
private:
        string fname;
        string lname;
        float CGPA;
        int SCORE;
        int ID;
        student* link;
};
typedef student* studentptr;


class DomesticStudent : public student
{
public:
        //Constructors
        DomesticStudent(string first, string last, float cgpa, int score, int id, string pv);
        DomesticStudent();
        //Mutator functions
        void setprovince(string pv);
        //Accessor functions
        string getprovince() const;
        //virtual functions
        virtual bool checkTOEFL() const;
        virtual bool isDom();
        virtual bool isInt();
        virtual void print();
        // Friend functions
        friend string compareProvince(DomesticStudent, DomesticStudent);
        friend ostream& operator<<(ostream& outs, const DomesticStudent& dstu);
private:
        string province;
};
typedef DomesticStudent* DomesticStudentptr;


class InternationalStudent : public student
{
public:
        //Constructors
        InternationalStudent(string first, string last, float cgpa, int score, int id, string co, int read, int write , int listen, int speak);
        InternationalStudent();
        //Mutator functions
        void setcountry(string co);
        void settoefl(int read, int write, int listen, int speak);
        //Accessor functions
        string getcountry() const;
        int gettoeflread() const;
        int gettoeflwrite() const;
        int gettoefllisten() const;
        int gettoeflspeak() const;
        int gettotal() const;
        //virtual functions
        virtual bool checkTOEFL() const;
        virtual bool isDom() const;
        virtual bool isInt() const;
        virtual void print();
        //friend functions
        friend string compareCountry(InternationalStudent, InternationalStudent);
        friend ostream& operator<<(ostream& outs, const InternationalStudent& istu);

private:
        string country;
        ToeflScore TOEFL;
};
typedef InternationalStudent* InternationalStudentptr;
#endif
