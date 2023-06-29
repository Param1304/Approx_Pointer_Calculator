/*
*/
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

class student
{
    public:
    int Regno;
    float GP,cp;
    virtual void display()=0;
};
class Physics :public student
{
    private:
    float MST,ESE;
    int TA;
    public:
    Physics(float n);
    void display();
};
class PhysicsLab : public student
{
    float viva, assignments,journal,attd;
    public:
    PhysicsLab(float n);
    void display();
};
class ChemLab : public student
{
    float assignments,journal,attd,pract;
    public:
    ChemLab(float n);
    void display();
};
class Chemistry : public student
{
    private:
    float MST,ESE;
    int TA;
    public:
    Chemistry(float n);
    void display();
};
class Maths : public student
{
    private:
    float MST,ESE;
    int TA;
    public:
    Maths(float n);
    void display();
};
class EnggMech : public student
{
    private:
    float MST,ESE;
    int TA;
    public:
    EnggMech(float n);
    void display();
};
class EMlab : public student
{
    private:
    float attendance,file,practical_exam;
    public:
    EMlab(float n);
    void display();
};
class EnggGraphic : public student
{
    private:
    float MST,ESE;
    int TA;
    public:
    EnggGraphic(float n);
    void display();
};
class EGlab : public student
{
    private:
    float file,attendance,practical_exam;
    public:
    EGlab(float n);
    void display();
};

int main()
{
    student *std1[10];
    std1[0] = new Physics(3);
    std1[0]->display();
    std1[1] = new Chemistry(2);
    std1[1]->display();
    std1[2] = new Maths(4);
    std1[2]->display();
    std1[3] = new EnggMech(3);
    std1[3]->display();
    std1[4] = new EnggGraphic(2);
    std1[4]->display();
    std1[5] = new PhysicsLab(1);
    std1[5]->display();
    std1[6] = new ChemLab(1);
    std1[6]->display();
    std1[7] = new EMlab(1);
    std1[7]->display();
    std1[8] = new EGlab(1);
    std1[8]->display();
    float pointer;
    int i, CP=0;
    float tgp=0;
    for(i=0;i<9;i++)
    {
        CP=CP+std1[i]->cp;
    }
    for(i=0;i<9;i++)
    {
        tgp=tgp+std1[i]->GP;
    }
    pointer = tgp/CP;
    cout<<"\n Pointer = "<<pointer<<" /10 ";
    return 0;
}
Physics::Physics(float n)
{
    float m,e;
    int t;
    cout<<"\n APPLIED PHYSICS 1 ";
    cout<<"\n Enter MST marks (/40)";
    cin>>m;
    cout<<"\n Enter ESE marks (/100)";
    cin>>e;
    cout<<"\n Enter TA marks (/20)";
    cin>>t;
    MST=m;
    ESE=e;
    TA=t;
    cp=n;
}
void Physics::display()
{
    float total=((MST*0.5)+(ESE*0.6)+TA);
    float gp=0;
    if(total>85 && total<=100)
    {
        gp=10;
    }
    else if(total>75 && total<=85)
    {
        gp=9;
    }
    else if(total>65 && total<=75)
    {
        gp=8;
    }
    else
    {
        gp=7;
    }
    GP=gp;
    cout<<"\n Grade Point = "<<GP<<endl;
    GP=GP*cp;
}
PhysicsLab::PhysicsLab(float n)
{
    float at,v,as,j;
    cout<<"\n APPLIED PHYSICS 1 LABORATORY ";
    cout<<"\n Enter viva marks (/100)";
    cin>>v;
    cout<<"\n Enter journal marks (/5)";
    cin>>j;
    cout<<"\n Enter attendance marks (/5)";
    cin>>at;
    cout<<"\n Enter assignment marks (/10)";
    cin>>as;
    viva=v;
    assignments=as;
    attd=at;
    journal=j;
    cp=n;
}
void PhysicsLab::display()
{
    float total = ((viva*0.8)+journal+attd+assignments);
    float gp=0;
    if(total>95 && total<=100)
    {
        gp=10;
    }
    else if(total>89 && total<=95)
    {
        gp=9;
    }
    else if(total>78 && total<=89)
    {
        gp=8;
    }
    else
    {
        gp=7;
    }
    GP=gp;
    cout<<"\n Grade Point = "<<GP<<endl;
    GP=GP*cp;
}
Chemistry::Chemistry(float n)
{
    float m,e;
    int t;
    cout<<"\n APPLIED Chemistry 1 ";
    cout<<"\n Enter MST marks (/40)";
    cin>>m;
    cout<<"\n Enter ESE marks (/100)";
    cin>>e;
    cout<<"\n Enter TA marks (/20)";
    cin>>t;
    MST=m;
    ESE=e;
    TA=t;
    cp=n;
}
void Chemistry::display()
{
    float total=((MST*0.5)+(ESE*0.6)+TA);
    float gp=0;
    if(total>87 && total<=100)
    {
        gp=10;
    }
    else if(total>73 && total<=87)
    {
        gp=9;
    }
    else if(total>60 && total<=73)
    {
        gp=8;
    }
    else
    {
        gp=7;
    }
    GP=gp;
    cout<<"\n Grade Point = "<<GP<<endl;
    GP=GP*cp; 
}
ChemLab::ChemLab(float n)
{
    float at,as,j,pr;
    cout<<"\n APPLIED CHEMISTRY 1 LABORATORY ";
    cout<<"\n Enter practical exam marks (/40) ";
    cin>>pr;
    cout<<"\n Enter Attendance marks (/10) ";
    cin>>at;
    cout<<"\n Enter Assignment marks (/60) ";
    cin>>as;
    cout<<"\n Enter journal marks (/10) ";
    cin>>j;
    pract=pr;
    attd=at;
    assignments=as;
    journal=j;
    cp=n;
}
void ChemLab::display()
{
    float total =(pract + (assignments*2/3) + attd + journal);
    float gp=0;
    if(total>93 && total<=100)
    {
        gp=10;
    }
    else if(total>85 && total<=93)
    {
        gp=9;
    }
    else if(total>76 && total<=85)
    {
        gp=8;
    }
    else
    {
        gp=7;
    }
    GP=gp;
    cout<<"\n Grade Point = "<<GP<<endl;
    GP=GP*cp; 
}
Maths::Maths(float n)
{
    float m,e;
    int t;
    cout<<"\n APPLIED Mathematics 1 ";
    cout<<"\n Enter MST marks (/40)";
    cin>>m;
    cout<<"\n Enter ESE marks (/100)";
    cin>>e;
    cout<<"\n Enter TA marks (/20)";
    cin>>t;
    MST=m;
    ESE=e;
    TA=t;
    cp=n;
}
void Maths::display()
{
    float total=((MST*0.5)+(ESE*0.6)+TA);
    float gp=0;
    if(total>93 && total<=100)
    {
        gp=10;
    }
    else if(total>81 && total<=93)
    {
        gp=9;
    }
    else if(total>70 && total<=81)
    {
        gp=8;
    }
    else
    {
        gp=7;
    }
    GP=gp;
    cout<<"\n Grade Point = "<<GP<<endl;
    GP=GP*cp;
}
EnggMech::EnggMech(float n)
{
    float m,e;
    int t;
    cout<<"\n ENGINEERING MECHANICS ";
    cout<<"\n Enter MST marks (/40)";
    cin>>m;
    cout<<"\n Enter ESE marks (/100)";
    cin>>e;
    cout<<"\n Enter TA marks (/20)";
    cin>>t;
    MST=m;
    ESE=e;
    TA=t;
    cp=n;
}
EMlab::EMlab(float n)
{
    float at,f,pe;
    cout<<"\n ENGINEERING MECHANICS LABORATORY ";
    cout<<"\n Enter File and viva marks (/100)";
    cin>>f;
    cout<<"\n Enter attendance marks (/10)";
    cin>>at;
    cout<<"\n Enter Practical Exam marks (/40)";
    cin>>pe;
    file=f;
    attendance=at;
    practical_exam=pe;
}
EGlab::EGlab(float n)
{
    float at,f;
    cout<<"\n ENGINEERING GRAPHICS LABORATORY ";
    cout<<"\n Enter File Practical marks (/60)";
    cin>>f;
    cout<<"\n Enter ESE Practical marks (/40)";
    cin>>at;
    // cout<<"\n Enter Practical Exam marks (/40)";
    // cin>>pe;
    file=f;
    attendance=at;
    //practical_exam=pe;
}
void EGlab::display()
{
    float total = file + attendance;
    float gp=0;
    if(total>80 && total<=100)
    {
        gp=10;
    }
    else if(total>68 && total<=80)
    {
        gp=9;
    }
    else if(total>56 && total<=68)
    {
        gp=8;
    }
    else
    {
        gp=7;
    }
    GP=gp;
    cout<<"\n Grade Point = "<<GP<<endl;
    GP=GP*cp;
}
void EMlab::display()
{
    float total=(file*0.5)+attendance+practical_exam;
    float gp=0;
    if(total>94 && total<=100)
    {
        gp=10;
    }
    else if(total>88 && total<=94)
    {
        gp=9;
    }
    else if(total>77 && total<=88)
    {
        gp=8;
    }
    else
    {
        gp=7;
    }
    GP=gp;
    cout<<"\n Grade Point = "<<GP<<endl;
    GP=GP*cp;
}
void EnggMech::display()
{
    float total=((MST*0.5)+(ESE*0.6)+TA);
    float gp=0;
    if(total>86 && total<=100)
    {
        gp=10;
    }
    else if(total>82 && total<=86)
    {
        gp=9;
    }
    else if(total>74 && total<=82)
    {
        gp=8;
    }
    else
    {
        gp=7;
    }
    GP=gp;
    cout<<"\n Grade Point = "<<GP<<endl;
    GP=GP*cp;
}
EnggGraphic::EnggGraphic(float n)
{
    float m,e;
    int t;
    cout<<"\n ENGINEERING GRAPHICS ";
    cout<<"\n Enter MST marks (/40)";
    cin>>m;
    cout<<"\n Enter ESE marks (/100)";
    cin>>e;
    cout<<"\n Enter TA marks (/20)";
    cin>>t;
    MST=m;
    ESE=e;
    TA=t;
    cp=n;
}
void EnggGraphic::display()
{
    float total=((MST*0.5)+(ESE*0.6)+TA);
    float gp=0;
    if(total>80 && total<=100)
    {
        gp=10;
    }
    else if(total>68 && total<=80)
    {
        gp=9;
    }
    else if(total>60 && total<=68)
    {
        gp=8;
    }
    else
    {
        gp=7;
    }
    GP=gp;
    cout<<"\n Grade Point = "<<GP<<endl;
    GP=GP*cp;
}


/*
class employee
{
    public:
    char *name;
    long num;
    virtual void getdata()=0;
    virtual void putdata()=0;
};
class manager : public employee
{
    public:
    char *title;
    void getdata();
    void putdata();
};
class scientist : public employee
{
    public:
    char *publication;
    void getdata();
    void putdata();
};
int main()
{
    manager m1;
    m1.getdata();
    m1.putdata();
    scientist s1;
    s1.getdata();
    s1.putdata();
    return 0;
}

void manager::getdata()
{
    char *s,*t;
    long n;
    cout<<"\n Employee name = ";
    cin.getline(s,50);
    name=s;
    cout<<"\n Employee number ";
    cin>>n;
    num=n; 
    cout<<"\n Title ";
    cin.getline(t,50);
    title=t;
}
void manager :: putdata()
{
    cout<<"\t"<<name<<endl;
    cout<<"\t"<<num<<endl;
    cout<<"\t"<<title<<endl;
}
void scientist::getdata()
{
    char *s,*p;
    long n;
    cout<<"\n Employee name = ";
    cin.getline(s,50);
    name=s;
    cout<<"\n Employee number ";
    cin>>n;
    num=n; 
    cout<<"\n Publication ";
    cin.getline(p,100);
    publication = p;
}
void scientist :: putdata()
{
    cout<<"\t"<<name<<endl;
    cout<<"\t"<<num<<endl;
    cout<<"\t"<<publication<<endl;
}


/*
const float pi=3.1416;
class shape
{
    public:
    float A;
    virtual void area()=0;
};
class square : public shape
{
    public:
    float side;
    square();
    void area();
};
class circle : public shape
{
    public:
    float radius;
    circle();
    void area();
};
class triangle : public shape
{
    public:
    float base,height;
    triangle();
    void area();
};
int main()
{
    //Array of derived class objects
    shape *S[5];
    S[0] = new square();
    S[0]->area();
    S[1]=new circle();
    S[1]->area();
    S[2]=new triangle();
    S[2]->area();
    return 0;
}
square::square()
{
    float s;
    cout<<"\n Enter side of square ";
    cin>>s;
    side=s;
}
void square::area()
{
    float a;
    a=side*side;
    A=a;
    cout<<"\n Area of square = "<<A<<" sq.unit";
}
circle::circle()
{
    float r;
    cout<<"\n Enter radius of circle ";
    cin>>r;
    radius=r;
}
void circle::area()
{
    float a = pi*radius*radius;
    A=a;
    cout<<"\n Area of circle = "<<A<<" sq.unit";
}
triangle::triangle()
{
    float b,h;
    cout<<"\n Enter base of triangle ";
    cin>>b;
    cout<<"\n Enter height of triangle ";
    cin>>h;
    base=b;
    height=h;
}
void triangle::area()
{
    float a= 0.5*base*height;
    A=a;
    cout<<"\n Area of triangle = "<<A<<" sq.unit";
}
*/

