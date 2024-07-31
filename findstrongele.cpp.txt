#include<iostream>
#include<string>
int main(){
    std::string str="Hello, World!";
    std::string substr="World";
    size_t found=str.find(substr);
    if(found!=std::string::npos){
        std::cout<<"Substring found at index:"<<found<<std::endl;
    }
    else{
        std::cout<<"Substring not found"<<std::endl;
    }
    return 0;
}
