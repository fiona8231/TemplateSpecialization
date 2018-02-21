#include <iostream>

using namespace std;

template <class T>

class InputType{
//general input case -> data could be any type
public:
    //constructor
    InputType(T a){

        cout << a << " is not a character!" << endl;
    }

};
// special case -> input data is a character

template <>
class InputType<string>{

public:
    //constructor
    InputType(string a){
     cout << a << " is a string" << endl;
    }
};
int main() {

    InputType<int> ob1(13);
    InputType<double> ob2(23.44);
    InputType<string> ob3("cat");

}