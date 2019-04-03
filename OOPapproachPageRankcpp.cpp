#include <iostream>

using namespace std;

class Page

{
    float rank;
public :
    int outgoing[6];


};

class Matrix
{



public:
    int **data; int row, col;
    Matrix(){
        row = col = 0;
        data = NULL;
    }
    //void setMatrix(int x){
        //row = col = 0;
        //data = NULL;
    //}

        void showMatrix(){
        cout<<endl;
        if(data==NULL){
            cout<<"The matrix is not populated. Nothing to show..."<<endl;
            return;
        }
        int i,j;
        for(i=1;i<=row;i++)
        {
            for(j=1;j<=col;j++)
                cout<<data[i][j]<<" ";
            cout<<endl;
        }
    }




};

int main()

{
    Page P[6];
    int ans=0;
    for(int i = 1; i<=5; i++)
    {

       cout << "For P[" << i << "] : " << endl << endl;
        for(int j=1; j<=5; j++)
    {

        cout << "Is P[" << i << "] connected to P" << j << "?" ;
        cin >> ans;
        if(ans==0){P[i].outgoing[j]=0;cout << "P[" << i << "] is not connected to P" << j << "." << endl;}
        else {P[i].outgoing[j]=1; cout << "P[" << i << "] connected to P" << j << "." << endl;}
    }
        cout << endl;
    }

    for(int i=1;i<=5;i++)
    {


        for(int j=1;j<=5;j++)
        {



        cout << P[j].outgoing[i] << " ";
        }
    cout<< endl;
        }
    /*Matrix H;
    H.row = 6;
    H.col = 6;


    for (int i=1; i<=5;i++)
        for(int j=1; j<=5;j++)
    {
        if (P[i].outgoing[j]==0)H.data[j][i]=0;
        else H.data[j][i]=1;
    }

    H.showMatrix();*/

}
