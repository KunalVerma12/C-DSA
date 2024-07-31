#include<iostream>
using namespace std;
int main(){
    //Braced initializers
    //Variable may contain random garbage value. WARNING
    int elephant_count;
    int lion_count{};//Initializer to zero
    int dog_count{10};//Initializer to 10
    int cat_count{15};//Initializers to 15
    //Can use expression as initializer
    int domesticated_animal{dog_count + cat_count};

    //int new_number{doesn't_exist};
    //int narrowing conversion {2,9}; //Compiler error
    cout<<"Elephant count: "<<elephant_count<<endl;
    cout<<"Lion count: "<<lion_count<<endl;
    cout<<"Dog count: "<<dog_count<<endl;
    cout<<"Cat count: "<<cat_count<<endl;
    cout<<"Domesticated animal count: "<<domesticated_animal<<endl;
    return 0;
}