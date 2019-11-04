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
//Comparing functions (friend functions)
string compareResearchScore(studentptr left, studentptr right)
{
  if(left->SCORE < right->SCORE)
  {
    return "lesser";
  }
  else if(left->SCORE > right->SCORE)
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
  if(left->CGPA < right->CGPA)
  {
    return "lesser";
  }
  else if (left->CGPA > right->CGPA)
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
  if (left->fname < right->fname)
  {
    return "less";
  }
  else if (left->fname > right->fname)
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
  if (left->lname < right->lname)
  {
    return "less";
  }
  else if (left->lname > right->lname)
  {
    return "greater";
  }
  else
  {
    return "equal";
  }
}
string compareOverall(studentptr left, studentptr right)//left is <greater/equal/lesser> than right
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
      return "equal";
    }
    else
    {
      return "lesser";
    }
  }
  else
  {
    return "lesser";
  }
}

void add_node(studentptr head, studentptr tail, studentptr newstudent)
{
  studentptr temp;
	if(!head)//checks if the list is empty
	{
		head = newstudent;
    tail = newstudent;
	}
	else
	{
    temp = head;
    while ((compareOverall(temp, newstudent) == "greater") && (temp->link))
    {
      temp = temp->link;
    }
    if(tail == temp)
    {
      newstudent->link=temp->link;
      temp->link=newstudent;
      tail = newstudent;//make the tail point to the newstudent node because it is the "lowest"
    }
    else if(head == temp)
    {
      newstudent->link=temp;
      head = newstudent;
    }
    else
    {
    newstudent->link=temp->link;
    temp->link=newstudent;
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
    if (seached->ID == id))
    {
      searched->print();
      found = true;
    }
    searched=searched->link;
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
    if (seached->CGPA == cgpa))
    {
      searched->print();
      found = true;
    }
    searched=searched->link;
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
    if (seached->SCORE == score))
    {
      searched->print();
      found = true;
    }
    searched=searched->link;
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
    if ((searched->fname == fn) && (current->lname == ln))
    {
      searched->print();
      found = true;
    }
    searched = searched->link;
  }
  if(!found)
  {
    cout << "Can't find any student with this name" << endl;
  }
}
void insertD(studentptr head, studentptr tail, int* id)
{
  string fn, ln, province;
  float cgpa;
  int researchscore;
  cout << "Please enter the first name of the student to be inserted: ";
  cin >> fn;
  cout << "Please enter the last name of the student to be inserted: ";
  cin >> ln;
  cout << "Please enter the research score of the student to be inserted: ";
  cin >> reseachscore;
  cout << "Please enter the CGPA of the student to be inserted: ";
  cin >> cgpa;
  cout << "Please enter the Province the student used to live in: ";
  cin >> province;
  studentptr DtempPtr = new DomesticStudent(fn, ln, cgpa, researchscore, *id, province);
  add_node(head, tail, DtempPtr);
  *id++;
  head->print();
}
void delete_node(studentptr head, studentptr tail, string fn, string ln)
{
  bool deleted = false;
  studentptr prior, searched;
  while ((head->fname == fn) && (head->lname == ln) && head)
  {
    studentptr tempPtr = head;
    head = head->link;
    delete tempPtr;
    deleted = true;
  }
  prior = head;
  while (prior)
  {
    searched = prior->link;
    if((searched->fname == fn) && (searched->lname == ln))
    {
      studentptr tempPtr = searched;
      prior->link = searched->link;
      delete tempPtr;
      deleted = true;
    }
    prior = prior->link;
  }
  if(!found)
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
  else if(!(head->link))
  {
    studentptr tempPtr = head;
    head = head->link;
    tail = tail->link;
    delete tempPtr;
  }
  else
  {
    studentptr tempPtr = head;
    head = head->link;
    delete tempPtr;
  }
}
studentptr student::merge(const studentptr &otherhead) const
{
  studentptr newhead = new student;
  studentptr newtail;
  newtail = newhead;
  studentptr Dhead = this;
  studentptr Ihead;
  while(1)
  {
    if (this == NULL)
    {
      newtail->setlink(
    }
  }




  newhead->setlink(link);
  newhead->setfname(fname);
  newhead->setlname(lname);
  newhead->setCGPA(CGPA);
  newhead->setscore(score);
  newhead->setID(ID);
  studentptr temp = new student;
  *temp = *otherhead
  while(temp->link != NULL)
  {
    newhead->add_node(*temp);
  }
  return newhead;
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

void insertI(studentptr head, studentptr tail, int* id)
{
  string fn, ln, country;
  float cgpa;
  int researchscore, read, write, listen, speak;
  cout << "Please enter the first name of the student to be inserted: ";
  cin >> fn;
  cout << "Please enter the last name of the student to be inserted: ";
  cin >> ln;
  cout << "Please enter the research score of the student to be inserted: ";
  cin >> reseachscore;
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
  studentptr ItempPtr = new InternationalStudent(fn, ln, cgpa, researchscore, *id, country, read, write, listen, speak);
  add_node(head, tail, ItempPtr);
  *id++;
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
//Student's friend functions
/*string compareCGPA(student overallgpa1, student overallgpa2)
{
        student result1,result2;
        result1.CGPA = overallgpa1.CGPA;
        result2.CGPA = overallgpa2.CGPA;
        if (result1.CGPA < result2.CGPA)
        {
                return "less";
        }
        else if (result1.CGPA > result2.CGPA)
        {
                return "greater";
        }
        else
        {
                return "equal";
}
string compareResearchScore(student overallscore1, student overallscore2)
{
        student result1,result2;
        result1.SCORE = overallscore1.SCORE;
        result2.SCORE = overallscore2.SCORE;
        if (result1.SCORE < result2.SCORE)
        {
                return "less";
        }
        else if (result1.SCORE > result2.SCORE)
        {
                return "greater";
        }
        else
        {
                return "equal";
        }
}
string compareFirstName(student overallfname1, student overallfname2)
{
        student result1,result2;
        result1.fname = overallfname1.fname;
        result2.fname = overallfname2.fname;
        if (result1.fname < result2.fname)
        {
                return "less";
        }
        else if (result1.fname > result2.fname)
        {
                return "greater";
        }
        else
        {
                return "equal";
        }
}
string compareLastName(student overalllname1, student overalllname2)
{
        cout << "test comp";
        if (overalllname1.lname < overalllname2.lname)
        {
                return "less";//the first one's name is first in the alphabet
        }
        else if (overalllname1.lname > overalllname2.lname)
        {
                return "greater";
        }
        else
        {
                return "equal";
        }
}
//friend functions for DomesticStudents
string compareProvince(DomesticStudent overallProv1, DomesticStudent overallProv2)
{
        if (overallProv1.province < overallProv2.province)
        {
                return "less";
        }
        else if (overallProv1.province > overallProv2.province)
        {
                return "greater";
        }
        else
        {
                return "equal";
        }
}
void Dswap(DomesticStudent *xp, DomesticStudent *yp)
{
    DomesticStudent temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void Dbubblesort_CGPA(DomesticStudent *arr, int n)
{
  int i, j;
  bool disorganized;
  for (i = 0; i < n-1; i++)
  {
    disorganized = false;
    for (j = 0; j < n-i-1; j++)
    {
      if (compareCGPA((arr[j]), (arr[j+1])) == "less")   //(arr[j] < arr[j+1]) //change this with the compare function
      {
        Dswap(&arr[j], &arr[j+1]);
        disorganized = true;
      }
    }
    if (!disorganized)
    {
      break;
    }
  }
}
void Dbubblesort_ResearchScore(DomesticStudent *arr, int n)
{
  int i, j;
  bool disorganized;
  for (i = 0; i < n-1; i++)
  {
    disorganized = false;
    for (j = 0; j < n-i-1; j++)
    {
      if (compareResearchScore(arr[j], arr[j+1]) == "less")   //(arr[j] < arr[j+1]) //change this with the compare function
      {
        Dswap(&arr[j], &arr[j+1]);
        disorganized = true;
      }
    }
    if (!disorganized)
    {
      break;
    }
  }
}
void Dbubblesort_FirstName(DomesticStudent *arr, int n)
{
  int i, j;
  bool disorganized;
  for (i = 0; i < n-1; i++)
  {
    disorganized = false;
    for (j = 0; j < n-i-1; j++)
    {
      if (compareFirstName(arr[j], arr[j+1]) == "greater")   //(arr[j] < arr[j+1]) //change this with the compare function
      {
        Dswap(&arr[j], &arr[j+1]);
        disorganized = true;
      }
    }
    if (!disorganized)
    {
      break;
    }
  }
}
void Dbubblesort_LastName(DomesticStudent *arr , int n)
{
  int i, j;
  bool disorganized;
  for (i = 0; i < n-1; i++)
  {
    disorganized = false;
    for (j = 0; j < n-i-1; j++)
    {
      if (compareLastName(arr[j], arr[j+1]) == "greater")   //(arr[j] < arr[j+1]) //change this with the compare function
      {
        Dswap(&arr[j], &arr[j+1]);
        disorganized = true;
      }
    }
    if (!disorganized)
    {
      break;
    }
  }
}
void domesticOverallSort(DomesticStudent *arr, int n)
{
  int i, j, k;
  bool disorganized;
  for (i = 0; i < n-1; i++)
  {
    disorganized = false;
    for (j = 0; j < n-i-1; j++)
    {
      if (compareResearchScore(arr[j], arr[j+1]) == "less")
      {
        Dswap(&arr[j], &arr[j+1]);
        disorganized = true;
      }
      else if (compareResearchScore(arr[j], arr[j+1]) == "equal")
      {
        if (compareCGPA(arr[j], arr[j+1]) == "less")
        {
          Dswap(&arr[j], &arr[j+1]);
          disorganized = true;
        }
        else if (compareCGPA(arr[j], arr[j+1]) == "equal")
        {
          if (compareProvince(arr[j], arr[j+1]) == "greater")
          {
            Dswap(&arr[j], &arr[j+1]);
            disorganized = true;
          }
        }
      }
    }
    if (!disorganized)
    {
      break;
    }
  }
}
//friend funcitons for InternationalStudents
string compareCountry(InternationalStudent overallCo1, InternationalStudent overallCo2)
{
        if (overallCo1.country < overallCo2.country)
        {
                return "less";
        }
        else if (overallCo1.country > overallCo2.country)
        {
                return "greater";
        }
        else
        {
                return "equal";
        }
}
void Iswap(InternationalStudent *xp, InternationalStudent *yp)
{
    InternationalStudent temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void deleteIelement(InternationalStudent *arr, int n, int del)
{
  int i, j;
  for(int j=del; j<(n-1); j++)
			{
				arr[j]=arr[j+1];
			}
}
void Ibubblesort_CGPA(InternationalStudent *arr, int n)
{
    int i, j;
    bool disorganized;
    for (i = 0; i < n-1; i++)
    {
      disorganized = false;
      for (j = 0; j < n-i-1; j++)
      {
        if (compareCGPA((arr[j]), (arr[j+1])) == "less")   //(arr[j] < arr[j+1]) //change this with the compare function
        {
          Iswap(&arr[j], &arr[j+1]);
          disorganized = true;
        }
      }
      if (!disorganized)
      {
        break;
      }
    }
}
void Ibubblesort_ResearchScore(InternationalStudent *arr, int n)
{
    int i, j;
    bool disorganized;
    for (i = 0; i < n-1; i++)
    {
      disorganized = false;
      for (j = 0; j < n-i-1; j++)
      {
        if (compareResearchScore(arr[j], arr[j+1]) == "less")   //(arr[j] < arr[j+1]) //change this with the compare function
        {
          Iswap(&arr[j], &arr[j+1]);
          disorganized = true;
        }
      }
      if (!disorganized)
      {
        break;
      }
    }
}
void Ibubblesort_FirstName(InternationalStudent *arr, int n)
{
    int i, j;
    bool disorganized;
    for (i = 0; i < n-1; i++)
    {
      disorganized = false;
      for (j = 0; j < n-i-1; j++)
      {
        if (compareFirstName(arr[j], arr[j+1]) == "greater")   //(arr[j] < arr[j+1]) //change this with the compare function
        {
          Iswap(&arr[j], &arr[j+1]);
          disorganized = true;
        }
      }
      if (!disorganized)
      {
        break;
      }
    }
}
void Ibubblesort_LastName(InternationalStudent *arr, int n)
{
    int i, j;
    bool disorganized;
    for (i = 0; i < n-1; i++)
    {
      disorganized = false;
      for (j = 0; j < n-i-1; j++)
      {
        if (compareLastName(arr[j], arr[j+1]) == "greater")   //(arr[j] < arr[j+1]) //change this with the compare function
        {
          Iswap(&arr[j], &arr[j+1]);
          disorganized = true;
        }
      }
      if (!disorganized)
      {
        break;
      }
    }
}
void internationalOverallSort(InternationalStudent *arr, int n)
{
  int i, j, k, counter;
  counter = 0;
  bool disorganized;
  for (i = 0; i < n-1; i++)
  {
    disorganized = false;
    for (j = 0; j < n-i-1; j++)
    {
      if (compareResearchScore(arr[j], arr[j+1]) == "less")
      {
        Iswap(&arr[j], &arr[j+1]);
        disorganized = true;
      }
      else if (compareResearchScore(arr[j], arr[j+1]) == "equal")
      {
        if (compareCGPA(arr[j], arr[j+1]) == "less")
        {
          Iswap(&arr[j], &arr[j+1]);
          disorganized = true;
        }
        else if (compareCGPA(arr[j], arr[j+1]) == "equal")
        {
          if (compareCountry(arr[j], arr[j+1]) == "greater")
          {
            Iswap(&arr[j], &arr[j+1]);
            disorganized = true;
          }
        }
      }
    }
    if (!disorganized)
    {
      break;
    }
  }
  for (k = 0; k < n-1; k++)
  {
    redo:
    if((arr+k)->gettoeflread() < 20)
    {
      deleteIelement(arr, n, k);
      goto redo;
    }
    else if((arr+k)->gettoeflwrite() < 20)
    {
      deleteIelement(arr, n, k);
      goto redo;
    }
    else if((arr+k)->gettoefllisten() < 20)
    {
      deleteIelement(arr, n, k);
      goto redo;
    }
    else if((arr+k)->gettoeflspeak() < 20)
    {
      deleteIelement(arr, n, k);
      goto redo;
    }
    else if((arr+k)->gettotal() < 93)
    {
      deleteIelement(arr, n, k);
      goto redo;
    }
    else
    {
      counter++;
    }
  }
  InternationalStudent temp[counter];
  for (k = 0; k < counter; k++)
  {
    temp[k] = arr[k];
  }
  arr = temp;
}
*/
