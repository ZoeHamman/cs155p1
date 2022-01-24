/*
Name:Zoe Hamman
Class:cs155
Date:1-24-22
*/

#include <iostream>
#include <string>
using namespace std;

int main ()
{
  // Variables
  string name;
  string town;
  int classes;
  char grade;
  double gpa;

cout<<"What is your name?"<<endl;
cin>> name;

cout<<"Nice to meet you, "<<name<<". What town do you live in?"<<endl;
cin>> town;

cout<<"How many classes are you taking, "<<name<<"?"<<endl;
cin>> classes;

cout<<"What grade do you hope to achieve in this class?"<<endl;
cin>> grade;

cout<<"What is your GPA?"<<endl;
cin>> gpa;

cout<<endl<<endl;

cout<<"Hello,"<<name<<" from "<<town<<"."<<endl;
cout<<"I see that you are taking "<<classes<<" classes, have a GPA of "<<gpa<<", and expect to get an "<<grade<<" this semester."<<endl;

cout<<endl<<endl;


return 0;
}
