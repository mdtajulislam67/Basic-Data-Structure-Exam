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

bool cmp(Student a, Student b)
{
    if(a.marks == b.marks)
    {
        return a.roll < b.roll;
    }

    return a.marks > b.marks;
}

int main()
{
    int n;
    cin>>n;

    vector<Student> st;

    while(n--)
    {
        string name;
        int roll, marks;
        cin>>name>>roll>>marks;
        st.push_back(Student(name,roll,marks));
    }

    sort(st.begin(), st.end(),cmp);
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
        st.push_back(Student(name,roll,marks));

        sort(st.begin(), st.end(),cmp);

        cout<<st[0].name <<' '<<st[0].roll<<' '<<st[0].marks<<endl;

        }

        else if(cmnd==1)
        {

        if(st.empty())
        {
            cout<<"Empty"<<endl;
        }
        else{
            sort(st.begin(), st.end(),cmp);
            cout<<st[0].name <<' '<<st[0].roll<<' '<<st[0].marks<<endl;
        }

        }
        else if(cmnd==2)
        {

        if(st.empty())
        {
            cout<<"Empty"<<endl;
        }
        else
        {
        sort(st.begin(), st.end(),cmp);   
        st.erase(st.begin());

        if(st.empty())
        {
            cout<<"Empty"<<endl;
        }
        else{
            sort(st.begin(), st.end(),cmp);
            cout<<st[0].name <<' '<<st[0].roll<<' '<<st[0].marks<<endl;
        }

        }
        }


    }    


    return 0;
}