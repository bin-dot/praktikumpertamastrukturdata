#include"iostream"
using namespace std;
main(){ int i,j; float det,temp;
 float mat[2][2], c[2][2], ci[2][2], ch[2][2];
 for(i=0;i<2;i++){
  for(j=0;j<2;j++){
   cout<<"nilai C("<<i+1<<","<<j+1<<")=";
   cin>>mat[i][j];
   c[i][j]=mat[i][j];
  }
  cout<<endl;
 }
 cout<<"matriks diatas diilustrasikan seperti gambaran dibawah ini\n\n";
 for(i=0;i<2;i++){
  for(j=0;j<2;j++){
   cout<<mat[i][j]<<" ";
  }
  cout<<endl;
 }
 mat[0][1]=-mat[0][1]; mat[1][0]=-mat[1][0];
 temp=mat[0][0]; mat[0][0]=mat[1][1]; mat[1][1]=temp;
 cout<<"\nadjoin dari matriks diatas adalah\n";
 for(i=0;i<2;i++){
  for(j=0;j<2;j++){
   cout<<mat[i][j]<<" ";
  }
  cout<<endl;
 }
 det=mat[0][0]*mat[1][1]-mat[1][0]*mat[0][1];
 det=1/(float)det;
 cout<<"\nSedangkan untuk inversnya adalah sebagai berikut\n";
 for(i=0;i<2;i++){
  for(j=0;j<2;j++){
   ci[i][j]=det*mat[i][j];
   cout<<ci[i][j]<<" ";
  }
  cout<<endl;
 }
 for(i=0;i<2;i++){
  for(j=0;j<2;j++){
    for(int k=0;k<2;k++){
   temp=c[i][k]*ci[k][j];
   ch[i][j]=ch[i][j]+temp;
    }
  }
 }
 cout<<"\nhasil perkalian matriks asal dengan\nmatriks yang telah di invers adalah\n";
 for(i=0;i<2;i++){
  for(j=0;j<2;j++){
   cout<<ch[i][j]<<" ";
  }
  cout<<endl;
 }
}

