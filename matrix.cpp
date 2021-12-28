#include <iostream>
    using namespace std;
    class matrix3
    {
        int a[10][10],b[10][10],c[10][10],x,y,i,j;
        public :
            void print();
            void sum();

    };
    void matrix3::print()
    {
        cout << "Enter the rows   "; cin >> x;
        cout << "Enter the columns   "; cin >> y;
        cout << "Enter elements of first matrix\n\n";
        for (i=1; i<=x; i++)
        {
            for ( j=1; j<=y; j++)
            {
                cin >> a[i][j];
            }
        }
        cout << "Enter elements of second matrix\n\n";
        for (i=1; i<=x; i++)
        {
            for (j=1; j<=y; j++)
            {
                cin >> b[i][j];
            }
        }
    }
    void matrix3::sum()
    {
        cout << "Sum of Matrices 1 and 2 is\n";
        for (i=1; i<=x; i++)
        {
            for ( j=1; j<=y; j++)
            {
                c[i][j]=a[i][j]+b[i][j];
                cout << c[i][j] << " ";
            }
            cout << endl;
        }

    }


    int main()
    {

        matrix3 m;
        m.print();
        m.sum();
    return 0;
    }
