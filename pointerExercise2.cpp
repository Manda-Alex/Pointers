#include <iostream>

using namespace std;

int main(){

    cout <<"Enter the dimensions of your array(should not exceed 3)  \n";
    int rowSize, columnSize;
    cout <<"Number of rows : "<< endl;
        cin >> rowSize;

        cout <<"Number of columns : "<< endl;
        cin >> columnSize;

    while(rowSize > 3 || columnSize > 3){
        cout <<"The dimensions should not exceed 3. Re-enter the values \n";
        cout <<"Number of rows : "<< endl;
        cin >> rowSize;

        cout <<"Number of columns : "<< endl;
        cin >> columnSize;

    }
    

    cout<<endl;

    double** myArray = new double*[rowSize];
    
    for(int i =0; i<rowSize; i++){

        myArray[i] = new double[columnSize];
    }

    for(int i = 0; i < rowSize; i++){
            for(int j =0; j < columnSize; j++){
                myArray[i][j] = rand() % 100;
            }
    }

    for(int i = 0; i < rowSize; i++){
            for(int j = 0; j < columnSize; j++){
                cout << myArray[i][j] << "\t";

            }
            cout<< endl;
            
    for(int k = 0; k< rowSize; k++){
        delete[] myArray[k];
    }   
    delete[] myArray;    
   
    }
    return 0;
}