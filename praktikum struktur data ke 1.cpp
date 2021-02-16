#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    const int kolom = 4, baris = 2;
    int array[baris][kolom] = {{1,2,3,4},{5,6,7,8}};
    int arrayTranspose[kolom][baris];


    cout << "Matriksnya"<<endl;
    for(int i = 0; i<baris; i++){
        for(int n = 0; n<kolom; n++){
            cout << array[i][n]<<" ";
            arrayTranspose[n][i] = array[i][n];
        }
        cout<<endl;
    }

    cout << "transposenya"<<endl;

    for(int i = 0; i<kolom; i++){
        for(int n = 0; n<baris; n++){
            cout<<arrayTranspose[i][n]<<" ";
        }
        cout<<endl;
    }


    cout << endl << "\n"<<endl<<endl;

    double A[2][2]={1,2,3,4};
    int i,j;
    double det;
 

    cout<<"Matriks A = "<<endl;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            cout<<A[i][j]<<" ";
        }
    cout<<endl;
    }   
    cout<<endl;
    
    det=A[0][0]*A[1][1]-A[1][0]*A[0][1];
    cout<<"determinan A = ";
    cout<<det;
    cout<<endl;
    double A2[2][2];
    A2[1][1]=A[0][0];
    A2[0][0]=A[1][1];
    A2[0][1]=A[0][1]*-1;
    A2[1][0]=A[1][0]*-1;
    cout<<"Invers A = "<<endl;

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            cout<<A2[i][j]/det<<" ";
        }
        cout<<endl;
    }



    cout << endl << "\n"<<endl<<endl;


    const int column = 6, rows = 2;
    int arrayA[rows][column] = {{1,2,3,4,5,6},{7,8,9,10,11,12}};
    int arrayB[column][rows]= {{1,2},{3,4},{5,6},{7,8},{9,10},{11,12}};

    cout << "Matriksnya adalah " << endl;
    for(int z = 0; z<rows; z++){
        for(int x = 0; x<column; x++){
            cout << arrayA[z][x] << " ";
        }
        cout << endl;
    }

    cout << endl;
    for(int z = 0; z<column; z++){
        for(int x = 0; x<rows; x++){
            cout << arrayB[x][z] << " ";
        }
        cout << endl;
    }

    cout << endl << "Perkalian Matriks nya" << endl;

    for(int z = 0; z<rows; z++){
        for(int x = 0; x<column; x++){
            int hasil = arrayA[z][x] * arrayB[x][z];
            cout << "Hasil " << arrayA[z][x] << " x " << arrayB[x][z] << " = " << hasil << endl;
        }
    }

    return 0;
}