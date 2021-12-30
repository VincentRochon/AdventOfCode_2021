#include <iostream>
#include <list>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, const char** argv) {


    ifstream file("AC_01_inputs.txt");
    string str;

    int original_value = 0;
    int times_increased = 0;
    int first = 0;
    int second = 0;
    int third = 0;
    int fourth = 0;
    int control = 0;

    while (getline(file,str))
    {
        int line_value = stoi(str);
        ++original_value;

        switch (control)
        {
        case 0:
            first += line_value;
            break;
        case 1:
            first += line_value;
            second += line_value;
            break;
        case 2:
            first += line_value;
            second += line_value;
            third += line_value;

            break;
        case 3:
    
            second += line_value;
            third += line_value;
            fourth += line_value;
            if(second > first){
                times_increased++;
            }
            first = 0;

            break;
        case 4:
            first += line_value;
            third += line_value;
            fourth += line_value;
            if(third > second){
                times_increased++;
            }
            second = 0;
            break;
        case 5:
            first += line_value;
            second += line_value;
            fourth += line_value;
            if(fourth > third){
                times_increased++;
            }
            third = 0;
            break;     
        case 6:
            first += line_value;
            second += line_value;
            third += line_value;
            if(first > fourth){
                times_increased++;
            }
            fourth = 0;
            break;     
        }

        control++;

        if (control > 6)
        {
            control=3;
        }
        
        /*
        int read_value = stoi(str);

        if (read_value > original_value)
            ++times_increased;
        original_value = read_value;
        */
    }
    

    std::cout << "times increased : " << times_increased << std::endl;
    return 0;
}