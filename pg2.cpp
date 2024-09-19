#include<iostream>
using namespace std;
class Students{
private:
int scores[5];
public:
void input()
{
for (int i=0;i<5;++i)
{
cin>>scores[i];
}
}
int calculateTotalScore() const
{
int TotalScore=0;
for(int i=0;i<5;++i)
{
TotalScore+=scores[i];
}
return TotalScore;
}
};
int main ()
{
Students student;
cout<<"Enter 5 exam scores:";
student.input();
cout<<"Total score:"<<student.calculateTotalScore()<<endl;
return 0;
}
