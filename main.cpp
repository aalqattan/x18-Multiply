// Author: Ali Alqattan

#include<iostream>
#include<vector>



using namespace std;


int main()

{


vector <vector <int> > matrix;


matrix.resize(13);

for(int row=1; row<matrix.size(); row++)
    { 
    matrix[row].resize(13);
    for(int column=1; column<matrix[row].size(); column++)
    {
    matrix[row][column] = row*column;
	    
	    cout<<matrix[row][column] <<" ";
	
    }
        cout<<endl;

        cout<<endl;
    }



return 0;



}

