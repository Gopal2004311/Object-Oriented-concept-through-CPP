#include<iostream>
using namespace std;
class a
{
    float n1;
    float n2;

public:
    void create(float a)
    {
        this->n1 = a;
    }
    void create(float a)
    {
        this->n2 = a;
    }
    friend class b;
};
class b
{
public:
    friend class a;
 };

int main()
{
    b ob;
    
}