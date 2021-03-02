// overloaded '+' operator to do -
#include <iostream>
using namespace std;
////////////////////////////////////////////////////////////////
class Weird
{
private:
    int value;
public:
    Weird()
    { }
    Weird(int v)
    {value = v; }
    
    Weird operator+(const Weird &w)
    {
        int v = this->value - w.value;
        return Weird(v);
    }
    
    void display()
    {
        cout << "value = " << value << endl;
    }
    
};
////////////////////////////////////////////////////////////////
int main()
{
    Weird a(5), b(10), c;
    c = a + b;
    c.display();
    return 0;
}