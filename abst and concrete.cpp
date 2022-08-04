#include <iostream>
#include <string>
using namespace std;
 
class Abstract {
    public: //pure virtual function
        virtual void printContent() = 0; 
};
 
class Concrete:public Abstract {//inherited publicly
    public:
        void printContent() 
		{
            cout << "ID IS 10341" << endl;
        }
};
 
int main()
{
         
    Concrete c;
    c. printContent();
}
