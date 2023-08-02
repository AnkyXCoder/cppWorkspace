
#include  <iostream>

using namespace std;

void func_c(void)
{
    cout << "Starting func_c" << endl;
    throw 100;
    cout << "Ending func_c" << endl;
}

void func_b(void)
{
    cout << "Starting func_b" << endl;
    func_c();
    cout << "Ending func_b" << endl;
}

void func_a(void)
{
    cout << "Starting func_a" << endl;
    
    func_b();

//    try
//    {   
//        func_b();
//    }
//    
//    catch(int &ex)
//    {
//        cout << "Caught error in func_a" << endl;
//    }

    cout << "Ending func_a" << endl;
}

int main(void)
{
    cout << "Starting main" << endl;
    try {
        func_a();
    }

    catch(int &ex)
    {
        cout << "Caught error in main" << endl;
    }

    cout << "Ending main" << endl;
}