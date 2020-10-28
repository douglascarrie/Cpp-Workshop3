// project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void printSummary(string str) {

    string word = "";
    for (auto x : str)
    {
        if (x == ' ')
        {
            cout << word << endl;
            word = "";
        }
        else
        {
            word = word + x;
            cout << x << endl;
        }
    }
    //cout << word << endl;
}

int main()
{
    using namespace std;





    cout << "File Sorting\n\n";


    string array[5];                          // creates array to hold names
    short loop;                               //short for loop for input
    short loop2;                               //short for loop for output
    string line;


    ifstream myfile("./input.txt");          //opening the file.
    if (myfile.is_open())                     //if the file is open
    {
        while (!myfile.eof())                 //while the end of file is NOT reached
        {

            getline(myfile, line);
            

            printSummary(line);
            return 0;

            cout << "number of sentences is " << sizeof(line) << endl;
                                                //get one line from the file
            cout << line << endl;                //and output it
            for (loop = 0; loop < 5; loop++)         //criteria for input loop (as array 0-5)
            {
                array[loop] = line;                     //output loop statement
            };

        }
        myfile.close();                         //closing the file
    }
    else cout << "Unable to open file";
}

