#include <iostream>
using namespace std ;
int main()
{
int A[3][3],B[3][3],C[3][3],T[3][3],r,c,i,j,ch;
char x;

cout<<"Enter number of rows and columns:";
cin >> r >> c;

cout<<"enter elements of matrix A:\n";
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        cin>>A[i][j];
    }
}

cout<<"enter elements of matrix B:\n";
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        cin>>B[i][j];
    }
}
do{
cout<<"1.addition"<<endl;
cout<<"2.substraction"<<endl;
cout<<"3.transpose"<<endl;
cout<<"4.diagonal elements"<<endl;


cout<<"Enter your choice: ";
cin>>ch;
switch(ch)
{
case 1:
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        C[i][j]=A[i][j] +B[i][j];
    }
    
}
for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++) 
        {
            cout << C[i][j] << " ";
        }
            cout << endl;
                }
break;

case 2:
for ( i = 0; i < r; i++)
                    for (j = 0; j < c; j++)
                        C[i][j] = A[i][j] - B[i][j];

                cout << "Subtraction is:\n";
                for (int i = 0; i < r; i++)
                {
                    for (int j = 0; j < c; j++)
                        cout << C[i][j] << " ";
                    cout << endl;
                }

break;

case 3:
for (i = 0; i < r; i++)
                    for (j = 0; j < c; j++)
                        T[j][i] = A[i][j];

                cout << "Transpose of Matrix A:\n";
                for (int i = 0; i < c; i++)
                {
                    for (int j = 0; j < r; j++)
                        cout << T[i][j] << " ";
                    cout << endl;
                }
                break;

case 4:
if (r != c)
                {
                    cout << "Matrix is not square. Diagonal not possible.\n";
                }
                else
                {
                    cout << "Diagonal elements:\n";
                    for (int i = 0; i < r; i++)
                        cout << A[i][i] << " ";
                }
break;




}
cout<<"Do you want to continue";
cin>>x;
}
while(x=='y'|| x=='Y');
return 0;
}