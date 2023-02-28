#include <iostream>
using namespace std;
//拷贝构造函数
class stu
{
    int age;
    int *score;
public:
    stu()=default;
    stu(int a,int s)
    {
        this->age = a;
        score = new int(s);
        cout<<"2 params constructor"<<endl;
    }

    void show()
    {
        cout<<"age:"<<age<<'\t'<<"score:"<<*score<<endl;
    }
//    stu(const stu &O) //浅拷贝。两个指针指向同一个空间
//    {
//        this->age = O.age;
//        this->score = O.score;
//        cout<<"copy constructor"<<endl;
//    }
        stu(const stu &O) //浅拷贝。两个指针指向同一个空间
        {
            this->age = O.age;
            this->score = new int(*(O.score));
            cout<<"copy constructor"<<endl;
        }

        stu& operator=(const stu& R) //拷贝赋值函数
        {
            //返回值: 对象的引用
            //函数名: operator=
            this->age = R.age;
            this->score = new int(*(R.score));
            cout<<"copy operator"<<endl;
            return *this;
        }


    ~stu()
    {
        delete  score;
         cout<<"deconstructor"<<endl;
    }
};

int main_3()
{
    //int score = 89;
    stu s1(18,89);
    //s1.show();
    stu s2(s1);
    stu s3(s1);
     s3 = s2;  //拷贝赋值函数
    return 0;
}
