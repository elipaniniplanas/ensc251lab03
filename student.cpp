//student.cpp to implement your classes
#include "student.hpp"
#include <iostream>

//ToeflScore constructor
ToeflScore::ToeflScore(int read, int write, int listen, int speak)
{
  //Error checking to make sure the values are in range, if not, set value to 0
  if(read <0 || read > 30)
  {
          cout << "Reading toeflScore is invalid, setting value to zero\n";
          reading = 0;
  }
  else
  {
          reading = read;
  }
  if(write <0 || write > 30)
  {
          cout << "Writing toeflScore is invalid, setting value to zero\n";
          writing = 0;
  }
  else
  {
          writing = write;
  }
  if(listen <0 || listen > 30)
  {
          cout << "Listening toeflScore is invalid, setting value to zero\n";
          listening = 0;
  }
  else
  {
          listening = listen;
  }
  if(speak <0 || speak > 30)
  {
          cout << "Speaking toeflScore is invalid, setting value to zero\n";
          speaking = 0;
  }
  else
  {
          speaking = speak;
  }
  totalscore = reading + writing + listening + speaking;
}
ToeflScore::ToeflScore()
{
        reading = 0;
        writing = 0;
        listening = 0;
        speaking = 0;
        totalscore = 0;
}
//Below are the mutator functions for the ToeflScore class
void ToeflScore::setreading(int read)
{
        if(read < 0 || read > 30)
        {
                cout << "Reading toeflScore is invalid, setting value to zero\n";
                reading = 0;
        }
        else
        {
                reading = read;
        }
}
void ToeflScore::setwriting(int write)
{
        if(write < 0 || write > 30)
        {
          cout << "Writing toeflScore is invalid, setting value to zero\n";
          writing = 0;
  }
  else
  {
          writing = write;
  }
}
void ToeflScore::setlistening(int listen)
{
  if(listen < 0 || listen > 30)
  {
          cout << "listening toeflScore is invalid, setting value to zero\n";
          listening = 0;
  }
  else
  {
          listening = listen;
  }
}
void ToeflScore::setspeaking(int speak)
{
  if(speak < 0 || speak > 30)
  {
          cout << "Speaking toeflScore is invalid, setting value to zero\n";
          speaking = 0;
  }
  else
  {
          speaking = speak;
  }
}
void ToeflScore::settotalscore()
{
        totalscore = reading + writing + listening + speaking;
}
//Below are the accessor functions for the ToeflScore class
int ToeflScore::getreading() const
{
        return(reading);
}
int ToeflScore::getwriting() const
{
        return(writing);
}
int ToeflScore::getlistening() const
{
        return(listening);
}
int ToeflScore::getspeaking() const
{
        return(speaking);
}
int ToeflScore::gettotalscore() const
{
        return(totalscore);
}


//Student constructors
student::student(string first, string last, float cgpa, int score, int id)
{
        //Error checking, making sure that the proper values are in range
        if(cgpa > 4.3 || cgpa < 0)
        {
                cout<<"CGPA value is invalid, setting value to zero";
                CGPA = 0.0;
        }
        else
        {
                CGPA = cgpa;
        }
        if(score < 0 || score > 100)
        {
                cout<<"Research score is invalid, setting value to zero";
                SCORE = 0;
        }
        else
        {
                SCORE = score;
        }
        if((fname.at(0)>=97) && (fname.at(0)<=122))
        {
          fname.at(0) = fname.at(0)-32;
        }
        else if((fname.at(0)<65) || (fname.at(0)>90))
        {
          cout<<"The name entered contains invaled symbols";
        }
        if((lname.at(0)>=97) && (lname.at(0)<=122))
        {
          lname.at(0) = lname.at(0)-32;
        }
        else if((lname.at(0)<65) || (lname.at(0)>90))
        {
          cout<<"The name entered contains invaled symbols";
        }
        fname = first;
        lname = last;
        ID = id;
        link = NULL;
}
student::student()
{
        fname = " ";
        lname = " ";
        CGPA = 0.0;
        SCORE = 0;
        ID = 0;
        link = NULL;
}
//Below are the mutator funtions for the Student class
void student::setfname(string first)
{
        fname = first;
}
void student::setlname(string last)
{
        lname = last;
}
void student::setCGPA(float cgpa)
{
        if(cgpa > 4.3 || cgpa < 0)
        {
                cout<<"CGPA value is invalid, setting value to zero";
                CGPA = 0.0;
        }
        else
        {
                CGPA = cgpa;
        }
}
void student::setscore(int score)
{
        if(score < 0 || score > 100)
        {
                cout<<"Research score is invalid, setting value to zero";
                SCORE = 0;
        }
        else
        {
                SCORE = score;
        }
}
void student::setID(int id)
{
        ID = id;
}
void student::setlink(student* chain)
{
	link = chain;
}
//Below are the accessor functions for the Student class
string student::getfname() const
{
        return(fname);
}
string student::getlname() const
{
        return(lname);
}
float student::getCGPA() const
{
        return(CGPA);
}
int student::getscore() const
{
        return(SCORE);
}
int student::getID() const
{
        return(ID);
}
student* student::getlink() const
{
	return(link);
}
bool student::checkTOEFL() const
{
  return false;
}
bool student::isDom()
{
  return false;
}
bool student::isInt()
{
  return false;
}
void student::print();
{
  cout << "printing from student";
}
string compareCountry(student left, student right)
{
  return "ERR";
}
string compareProvince(student left, student right)
{
  return "ERR";
}
//Comparing functions (friend functions)
string compareResearchScore(studentptr left, studentptr right)
{
  if(left->getscore() < right->getscore())
  {
    return "less";
  }
  else if(left->getscore() > right->getscore())
  {
    return "greater";
  }
  else
  {
    return "equal";
  }
}
string compareCGPA(studentptr left, studentptr right)
{
  if(left->getCGPA() < right->getCGPA())
  {
    return "less";
  }
  else if (left->getCGPA() > right->getCGPA())
  {
    return "greater";
  }
  else
  {
    return "equal";
  }
}
string compareFirstName(studentptr left, studentptr right)
{
  if (left->getfname() < right->getfname())
  {
    return "less";
  }
  else if (left->getfname() > right->getfname())
  {
    return "greater";
  }
  else
  {
    return "equal";
  }
}
string compareLastName(studentptr left, studentptr right)
{
  if (left->getlname() < right->getlname())
  {
    return "less";
  }
  else if (left->getlname() > right->getlname())
  {
    return "greater";
  }
  else
  {
    return "equal";
  }
}
string compareOverall(studentptr left, studentptr right)//left is <greater/equal/less> than right
{
  if(compareResearchScore(left, right) == "greater")
  {
    return "greater";
  }
  else if(compareResearchScore(left, right) == "equal")
  {
    if(compareCGPA(left, right) == "greater")
    {
      return "greater";
    }
    else if(compareCGPA(left, right) == "equal")
    {
      if(left->isDom() && right->isInt())
      {
        return "greater";
      }
      else if(left->isDom() && right->isDom())
      {
        return compareProvince(*left, *right);
      }
      else if(left->isInt() && right->isInt())
      {
        return compareCountry(*left, *right);
      }
    }
    else
    {
      return "less";
    }
  }
  else
  {
    return "less";
  }
}

void add_node(studentptr head, studentptr tail, studentptr newstudent)
{
  studentptr temp;
  if(newstudent->checkTOEFL())
  {
    return;
  }
	if(!head)//checks if the list is empty
	{
		head = newstudent;
    tail = newstudent;
	}
	else
	{
    temp = head;
    while ((compareOverall(temp, newstudent) == "greater") && (temp->getlink()))
    {
      temp = temp->getlink();
    }
    if(tail == temp)
    {
      newstudent->setlink(temp->getlink());
      temp->setlink(newstudent);
      tail = newstudent;//make the tail point to the newstudent node because it is the "lowest"
    }
    else if(head == temp)
    {
      newstudent->setlink(temp);
      head = newstudent;
    }
    else
    {
    newstudent->setlink(temp->getlink());
    temp->setlink(newstudent);
    }
	}
}

void search_ID(studentptr head, int id)
{
  bool found = false;
  studentptr searched;
  searched = head;
  while (searched)
  {
    if (searched->getID() == id)
    {
      searched->print();
      found = true;
    }
    searched=searched->getlink();
  }
  if(!found)
  {
    cout << "Can't find any student with this ID" << endl;
  }
}
void search_CGPA(studentptr head, float cgpa)
{
  bool found = false;
  studentptr searched;
  searched = head;
  while (searched)
  {
    if (searched->getCGPA() == cgpa)
    {
      searched->print();
      found = true;
    }
    searched=searched->getlink();
  }
  if(!found)
  {
    cout << "Can't find any student with this CGPA" << endl;
  }
}
void search_score(studentptr head, int score)
{
  bool found = false;
  studentptr searched;
  searched = head;
  while (searched)
  {
    if (searched->getscore() == score)
    {
      searched->print();
      found = true;
    }
    searched=searched->getlink();
  }
  if(!found)
  {
    cout << "Can't find any student with this research score" << endl;
  }
}
void search_name(studentptr head, string fn, string ln)
{
  bool found = false;
  studentptr searched; //initialize searched
  searched = head;
  while (searched)
  {
    if ((searched->getfname() == fn) && (searched->getlname() == ln))
    {
      searched->student*;
      found = true;
    }
    searched = searched->getlink();
  }
  if(!found)
  {
    cout << "Can't find any student with this name" << endl;
  }
}
void delete_node(studentptr head, studentptr tail, string fn, string ln)
{
  bool deleted = false;
  studentptr prior, searched;
  while ((head->getfname() == fn) && (head->getlname() == ln) && head)
  {
    studentptr tempPtr = head;
    head = head->getlink();
    delete tempPtr;
    deleted = true;
  }
  prior = head;
  while (prior)
  {
    searched = prior->getlink();
    if((searched->getfname() == fn) && (searched->getlname() == ln))
    {
      studentptr tempPtr = searched;
      prior->setlink(searched->getlink());
      delete tempPtr;
      deleted = true;
    }
    prior = prior->getlink();
  }
  if(!deleted)
  {
    cout << "Can't find any student with this name" << endl;
  }
}
void delete_tips(studentptr head, studentptr tail)
{
  if(!head)
  {
    cout<<"List is empty"<<endl;
  }
  else if(!(head->getlink()))
  {
    studentptr tempPtr = head;
    head = head->getlink();
    tail = tail->getlink();
    delete tempPtr;
  }
  else
  {
    studentptr tempPtr = head;
    head = head->getlink();
    delete tempPtr;
  }
}
void sortResearchscore(studentptr head, studentptr tail)
{
  studentptr newhead;
  studentptr newtail;
  studentptr temp;
  while(!head)
  {
    if(!newhead)//checks if the list is empty
  	{
  		newhead = head;
      newtail = head;
  	}
  	else
  	{
      temp = newhead;
      while ((compareCGPA(temp, head) == "greater") && (temp->getlink()))
      {
        temp = temp->getlink();
      }
      if(newtail == temp)
      {
        head->setlink(temp->getlink());
        temp->setlink(head);
        newtail = head;//make the tail point to the newstudent node because it is the "lowest"
      }
      else if(newhead == temp)
      {
        head->setlink(temp);
        newhead = head;
      }
      else
      {
      head->setlink(temp->getlink());
      temp->setlink(head);
      }
    }
    head = head->getlink();
  }
head = newhead;
tail = newtail;
}
void sortCGPA(studentptr head, studentptr tail)
{
  studentptr newhead;
  studentptr newtail;
  studentptr temp;
  while(!head)
  {
    if(!newhead)//checks if the list is empty
  	{
  		newhead = head;
      newtail = head;
  	}
  	else
  	{
      temp = newhead;
      while ((compareCGPA(temp, head) == "greater") && (temp->getlink()))
      {
        temp = temp->getlink();
      }
      if(newtail == temp)
      {
        head->setlink(temp->getlink());
        temp->setlink(head);
        newtail = head;//make the tail point to the newstudent node because it is the "lowest"
      }
      else if(newhead == temp)
      {
        head->setlink(temp);
        newhead = head;
      }
      else
      {
      head->setlink(temp->getlink());
      temp->setlink(head);
      }
    }
    head = head->getlink();
  }
head = newhead;
tail = newtail;
}
void sortFirstname(studentptr head, studentptr tail)
{
  studentptr newhead;
  studentptr newtail;
  studentptr temp;
  while(!head)
  {
    if(!newhead)//checks if the list is empty
  	{
  		newhead = head;
      newtail = head;
  	}
  	else
  	{
      temp = newhead;
      while ((compareFirstName(temp, head) == "greater") && (temp->getlink()))
      {
        temp = temp->getlink();
      }
      if(newtail == temp)
      {
        head->setlink(temp->getlink());
        temp->setlink(head);
        newtail = head;//make the tail point to the newstudent node because it is the "lowest"
      }
      else if(newhead == temp)
      {
        head->setlink(temp);
        newhead = head;
      }
      else
      {
      head->setlink(temp->getlink());
      temp->setlink(head);
      }
    }
    head = head->getlink();
  }
head = newhead;
tail = newtail;
}
void sortLastname(studentptr head, studentptr tail)
{
  studentptr newhead;
  studentptr newtail;
  studentptr temp;
  while(!head)
  {
    if(!newhead)//checks if the list is empty
  	{
  		newhead = head;
      newtail = head;
  	}
  	else
  	{
      temp = newhead;
      while ((compareLastName(temp, head) == "greater") && (temp->getlink()))
      {
        temp = temp->getlink();
      }
      if(newtail == temp)
      {
        head->setlink(temp->getlink());
        temp->setlink(head);
        newtail = head;//make the tail point to the newstudent node because it is the "lowest"
      }
      else if(newhead == temp)
      {
        head->setlink(temp);
        newhead = head;
      }
      else
      {
      head->setlink(temp->getlink());
      temp->setlink(head);
      }
    }
    head = head->getlink();
  }
head = newhead;
tail = newtail;
}
void sortOverall(studentptr head, studentptr tail)
{
  studentptr newhead;
  studentptr newtail;
  studentptr temp;
  while(!head)
  {
    if(!newhead)//checks if the list is empty
  	{
  		newhead = head;
      newtail = head;
  	}
  	else
  	{
      temp = newhead;
      while ((compareOverall(temp, head) == "greater") && (temp->getlink()))
      {
        temp = temp->getlink();
      }
      if(newtail == temp)
      {
        head->setlink(temp->getlink());
        temp->setlink(head);
        newtail = head;//make the tail point to the newstudent node because it is the "lowest"
      }
      else if(newhead == temp)
      {
        head->setlink(temp);
        newhead = head;
      }
      else
      {
      head->setlink(temp->getlink());
      temp->setlink(head);
      }
    }
    head = head->getlink();
  }
head = newhead;
tail = newtail;
}
void merge(studentptr domestic, studentptr internationalhead, studentptr internationaltail, studentptr mergedhead, studentptr mergedtail)
{
  studentptr insert = domestic;
  mergedhead = internationalhead;
  mergedtail = internationaltail;
  while (insert)
  {
    add_node(mergedhead, mergedtail, insert);
    insert = insert->getlink();
  }
}
void threshold(studentptr head, float cgpa, int score)
{
  bool found = false;
  studentptr searched;
  searched = head;
  while (searched)
  {
    if ((searched->getscore() >= score) && (searched->getCGPA() >= cgpa))
    {
      searched->print();
      found = true;
    }
    searched=searched->getlink();
  }
  if(!found)
  {
    cout << "Can't find any students reaching this threshold" << endl;
  }
}

//Constructor for the DomesticStudent class
DomesticStudent::DomesticStudent(string first, string last, float cgpa, int score, int id, string pv):
        student(first, last, cgpa, score, id)
{
        province = pv;
}
DomesticStudent::DomesticStudent():student()
{
        province = " ";
}
//Mutator function for DomesticStudent, it inherits all of the mutator functions in its parent class Student
void DomesticStudent::setprovince(string pv)
{
        province = pv;
}
//Accessor function for DomesticStudent
string DomesticStudent::getprovince() const
{
        return(province);
}
bool DomesticStudent::checkTOEFL() const
{
  return false;
}
bool DomesticStudent::isDom()
{
  return true;
}
bool DomesticStudent::isInt()
{
  return false;
}
void DomesticStudent::print();
{
  cout << "Domestic student" << " " << this->getfname() << " "
	 << this->getlname() << " from " << this->getprovince() << " province has cgpa of "
	 << this->getCGPA() << ", and research score of " << this->getscore()
	 << ", the assigned ID is " << this->getID() << endl;
}
string compareProvince(DomesticStudent left, DomesticStudent right)
{
  if (left.province < right.province)
  {
    return "less";
  }
  else if (left.province > right.province)
  {
    return "greater";
  }
  else
  {
    return "equal";
  }
}
//Overloaded << operator for Domesticstudents
ostream& operator<<(ostream& outs, const DomesticStudent& dstu)
{
	outs << "Domestic student" << " " << dstu.getfname() << " "
	 << dstu.getlname() << " from " << dstu.getprovince() << " province has cgpa of "
	 << dstu.getCGPA() << ", and research score of " << dstu.getscore()
	 << ", the assigned ID is " << dstu.getID() << endl;
   return(outs);
}
void insertD(studentptr head, studentptr tail, int id)
{
  string fn, ln, province;
  float cgpa;
  int researchscore;
  cout << "Please enter the first name of the student to be inserted: ";
  cin >> fn;
  cout << "Please enter the last name of the student to be inserted: ";
  cin >> ln;
  cout << "Please enter the research score of the student to be inserted: ";
  cin >> researchscore;
  cout << "Please enter the CGPA of the student to be inserted: ";
  cin >> cgpa;
  cout << "Please enter the Province the student used to live in: ";
  cin >> province;
  studentptr DtempPtr = new DomesticStudent(fn, ln, cgpa, researchscore, id, province);
  add_node(head, tail, DtempPtr);
  studentptr temp = head;
  while(temp)
  {
    temp->print();
    temp = temp->getlink();
  }
}

//Constructor for the InternationalStudent class
InternationalStudent::InternationalStudent(string first, string last, float cgpa, int score, int id, string co, int read, int write , int listen, int speak):
        student(first, last, cgpa, score, id)
{
        country = co;
        //Since TOEFL is a seperate object of a different class, we will have to use the ToeflScore mutator functions
        TOEFL.setreading(read);
        TOEFL.setwriting(write);
        TOEFL.setlistening(listen);
        TOEFL.setspeaking(speak);
}
InternationalStudent::InternationalStudent():student(), country(""){ }
//Mutator functions for the InternationalStudent class
void InternationalStudent::setcountry(string co)
{
        country = co;
}
//This mutator function need call on the TOEFL private members, so ToeflScore's mutator functions are used
void InternationalStudent::settoefl(int read, int write, int listen, int speak)
{
        TOEFL.setreading(read);
        TOEFL.setwriting(write);
        TOEFL.setlistening(listen);
        TOEFL.setspeaking(speak);
        TOEFL.settotalscore();
}
//As the same situation as above, to access the values of the TOEFL object, ToeflScore's accessor functions are used in these accessor functions
int InternationalStudent::gettoeflread() const
{
        return TOEFL.getreading();
}
int InternationalStudent::gettoeflwrite() const
{
        return TOEFL.getwriting();
}
int InternationalStudent::gettoefllisten() const
{
        return TOEFL.getlistening();
}
int InternationalStudent::gettoeflspeak() const
{
        return TOEFL.getspeaking();
}
int InternationalStudent::gettotal() const
{
        return TOEFL.gettotalscore();
}
//Accessor Functions for the InternationalStudent class
string InternationalStudent::getcountry() const
{
        return(country);
}
bool InternationalStudent::checkTOEFL() const
{
  if(this->gettoeflread() < 20)
  {
    return true;
  }
  else if(this->gettoeflwrite() < 20)
  {
    return true;
  }
  else if(this->gettoefllisten() < 20)
  {
    return true;
  }
  else if(this->gettoeflspeak() < 20)
  {
    return true;
  }
  else if(this->gettotal() < 93)
  {
    return true;
  }
  else
  {
    return false;
  }
}
bool InternationalStudent::isDom() const
{
  return false;
}
bool InternationalStudent::isInt() const
{
  return true;
}
void InternationalStudent::print()
{
  cout << "International student" << " " << this->getfname() << " "
	 << this->getlname() << " from " << this->getcountry() << " country has cgpa of "
	 << this->getCGPA() << ", and research score of " << this->getscore()
	 << ", the assigned ID is " << this->getID() <<".\n" <<"Their toefl scores are: reading "
	 << this->gettoeflread() << ", writing "<< this->gettoeflwrite() << ", listening "
	 << this->gettoefllisten() << ", speaking " << this->gettoeflspeak() << ", and their total toefl score is "
	 << this->gettotal() <<endl;
}

void insertI(studentptr head, studentptr tail, int id)
{
  string fn, ln, country;
  float cgpa;
  int researchscore, read, write, listen, speak;
  cout << "Please enter the first name of the student to be inserted: ";
  cin >> fn;
  cout << "Please enter the last name of the student to be inserted: ";
  cin >> ln;
  cout << "Please enter the research score of the student to be inserted: ";
  cin >> researchscore;
  cout << "Please enter the CGPA of the student to be inserted: ";
  cin >> cgpa;
  cout << "Please enter the student's country of origin: ";
  cin >> country;
  cout << "Please enter the Reading TOEFL score of the student to be inserted: ";
  cin >> read;
  cout << "Please enter the Writing TOEFL score of the student to be inserted: ";
  cin >> write;
  cout << "Please enter the Listening TOEFL score of the student to be inserted: ";
  cin >> listen;
  cout << "Please enter the Speaking TOEFL score of the student to be inserted: ";
  cin >> speak;
  studentptr ItempPtr = new InternationalStudent(fn, ln, cgpa, researchscore, id, country, read, write, listen, speak);
  add_node(head, tail, ItempPtr);
  studentptr temp = head;
  while(temp)
  {
    temp->print();
    temp = temp->getlink();
  }
}
//Overloaded << operator for InternationalStudents
ostream& operator<<(ostream& outs, const InternationalStudent& istu)
{
	outs << "International student" << " " << istu.getfname() << " "
	 << istu.getlname() << " from " << istu.getcountry() << " country has cgpa of "
	 << istu.getCGPA() << ", and research score of " << istu.getscore()
	 << ", the assigned ID is " << istu.getID() <<".\n" <<"Their toefl scores are: reading "
	 << istu.gettoeflread() << ", writing "<< istu.gettoeflwrite() << ", listening "
	 << istu.gettoefllisten() << ", speaking " << istu.gettoeflspeak() << ", and their total toefl score is "
	 << istu.gettotal() <<endl;
   return(outs);
}
