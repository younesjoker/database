#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
using namespace std;
//starting functions name
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void start();
void selectclass(string);
void addclass(string);
void removeclass(string);
void addstudent(string,date,unsigned long long int,float);
void removestudent(unsigned long long int);
void Search(unsigned long long int );
void Search(string,string);
void showclass(string);
void showall();
void sortbyname();
void sortbyid();
void save();
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//finish functions name
//starting main
int main()
{
    start();
    return 0;
}//finshing main
//starting startfunction
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    void start(){
                vector<Class> dastabase;
                //beginning date struct
                struct date
                {
                 unsigned short int year;
                 unsigned short int month;
                 unsigned short int day;
                };//finish date struct
                 //beginning student struct
                 struct student
                 {
                  string firstname;
                  string lastname;
                  unsigned long long int id;
                  date birthday;
                  float grade;
                 };//finish student struct
                 //beginning class struct
                 struct Class
                 {
                  string classname;
                  float average;
                  unsigned short int capacity;
                  vector<student>data;
                 };//finish calss struct
    string command;
    switch(command)
    {
        case basu add Class<filename>:
            addclass();
        case basu Remove Class<calss name>:
            removeclass();
        case basu select Class<classname>:
            selectclass();
        case select non:

        case basu Remove student<id>:
             removestudent():
        case basu Search<id>:
            Search();
        case basu Search<full name>:
            Search();
        case basu show:
            showclass(selected Class);
        case base show<calssname>:
            showclass(Classname);
        case basu Sort name:
            sortbyname();
        case basu Sort id;
            sortbyid();
        case basu save:
            save();
        case exit:

        case basu help:

        case basu Rank;
    }
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////




                              }















