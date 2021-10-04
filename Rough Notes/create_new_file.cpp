#include<iostream>
#include<fstream>
#include<vector>

int main(){
    std::string filename;
    std::cin>> filename;
    std::ofstream fileses (filename.c_str(),std::ios::app); // to make customfilename.
    // std::ofstream fileses ("hello.txt",std::ios::app); //to append in file as you run each time.
    
    if(fileses.is_open()){
        std::cout<<"Workin";
    }

    std::vector <std::string> names;
    names.push_back("Copying");
    names.push_back("this text");
    names.push_back("to a new created file\n");

    for(std::string n : names){
        fileses << n << "\t";
    }

    fileses.close();
    return 0;
}
