/*accept n float numbers and store it an array and display alternate element(use dynamic memory allocation)*/
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
class Float
{
private:
    double* n;
    int size;
public:
    void accept(int s)
    {
        n = new double[size];
        size = s;
        for (int i = 0;i < size;i++)
        {
            cout << "Enter " << i + 1 << " float number:";
            cin >> n[i];
        }
    }
    void display()
    {
        for (int i = 0;i < size;i++)
        {
            cout << n[i] << "\t";
        }
    }
};
int main()
{
    Float f;
    int size;
    cout << "Enter size of array:";
    cin >> size;
    f.accept(size);
    f.display();
    getch();
    return 0;
}