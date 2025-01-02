#include <iostream> 
using namespace std; 


int main() 
{
    //variables decleration 
    int i,j, rows; 

    //inputting user for number of rows 
    cout << "Number of Rows: "; 
    cin << rows; 

    //displaying the right triangle 
    for ( i=1; i  <= rows ; i++)
    {
        for ( j = 1; j <= i; j++){ 

            cout << "*";
        }
        cout <<end1;
    }
    return 0;
}