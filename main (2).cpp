#include <iostream>

using namespace std;

int main()
{
   int matA[2][2]={4,8,2,10};
   int matB[2][2]={-5,4,8,-12};
   int transpose[2][2];
   cout<<"matriks A"<<endl;
   for (int i=0; i<2; i++){
    for ( int j=0; j<2; j++){
        cout<<matA[i][j]<<" ";
        transpose [j] [i] = matA [i][j];
    }
    cout<<endl;
   }
   cout<<"matriks B"<<endl;
   for (int i=0; i<2; i++){
    for (int j=0; j<2; j++){
        cout<<matB[i][j]<<" ";
    }
    cout<<endl;

   }
   cout<<"Hasil Transpose matriks A :  "<<endl;
   for (int i=0; i<2; i++){
    for (int j=0; j<2; j++){
        cout<<transpose  [i][j]<<" ";
    }
    cout <<endl;
   }
   return 0;
}
