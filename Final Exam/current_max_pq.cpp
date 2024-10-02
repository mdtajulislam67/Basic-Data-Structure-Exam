#include<bits/stdc++.h>
using namespace std;
class Student{

    public:
    string name;
    int roll;
    int marks;
    Student(string name,int roll,int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }

};
class cmp{
    public:
    bool operator()(Student a, Student b)
    {
        if (a.marks == b.marks)
        {
            return a.roll > b.roll;
        }

        return a.marks < b.marks;
    }

};


int main()
{
    int n;
    cin>>n;

    priority_queue<Student,vector<Student>, cmp> pq;

    while(n--)
    {
        string name;
        int roll, marks;
        cin>>name>>roll>>marks;
        pq.push(Student(name,roll,marks));
    }

    int q;
    cin>>q;
    while(q--)
    {
        int cmnd;
        cin>>cmnd;

        if(cmnd==0)
        {
        string name;
        int roll, marks;
        cin>>name>>roll>>marks;
        pq.push(Student(name,roll,marks));

        cout<<pq.top().name<<' '<<pq.top().roll<<' '<<pq.top().marks<<endl;

        }

        else if(cmnd==1)
        {

        if(pq.empty())
        {
            cout<<"Empty"<<endl;
        }
        else{
           cout<<pq.top().name<<' '<<pq.top().roll<<' '<<pq.top().marks<<endl;
        }

        }
        else if(cmnd==2)
        {

        if(pq.empty())
        {
            cout<<"Empty"<<endl;
        }
        else
        { 
        pq.pop();

        if(pq.empty())
        {
            cout<<"Empty"<<endl;
        }
        else{
            cout<<pq.top().name<<' '<<pq.top().roll<<' '<<pq.top().marks<<endl;
        }

        }
        }


    }    


    return 0;
}