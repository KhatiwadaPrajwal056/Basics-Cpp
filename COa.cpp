
#include <iostream>
using namespace std;
int add(int *, int *, int *, int);
void get_twos_complement(int *, int *, int);
void shift_left(int *, int *, int);
int main()
{
    int n;
    cout<<endl<<"    PRAJWAL KHATIWADA < 077BCT056 >   "<<endl<<endl;
    cout << "Number of bits:";
    cin >> n;
    int *Q = new int[n];
    int *M = new int[n + 1];
    int *A = new int[n + 1];
    int *M2C = new int[n + 1];
    cout << "Enter the Dividend:";
    for (int i = 0; i < n; i++)
        cin >> Q[i];
    M[0] = A[0] = 0;
    cout << "Enter the Divisor:";
    for (int i = 1; i <= n; i++)
    {
        cin >> M[i];
        A[i] = 0;
    }
    int count = n;
    get_twos_complement(M, M2C, n + 1);
    for (int i = count; i > 0; i--)
    {
        if (A[0] == 1)
        {
            shift_left(A, Q, n);
            add(A, M, A, n + 1);
        }
        else
        {
            shift_left(A, Q, n);
            add(A, M2C, A, n + 1);
        }

        if (A[0] == 1)
        {
            Q[n - 1] = 0;
        }
        else
        {
            Q[n - 1] = 1;
        }
    }
    if (A[0] == 1)
    {
        add(A, M, A, n + 1);
        cout << "The Quotient is : ";
        for (int i = 0; i < n; i++)
            cout << Q[i];
        cout <<endl<< "The Remainder is : ";
        for (int i = 0; i <= n; i++)
        {
            cout << A[i];
        }
        cout<<endl;
    }
    else
    {
        cout << "The Quotient is : ";
        for (int i = 0; i < n; i++)
            cout << Q[i];
        cout <<endl<< "The Remainder is : ";
        for (int i = 0; i <= n; i++)
            cout << A[i];
        cout<<endl;
    }
    return 0;
}

    int add(int *b1, int *b2, int *sum, int n)
    {
        int carry = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            int temp = (b1[i] + b2[i] + carry);
            sum[i] = temp % 2;
            carry = temp / 2;
        }
        return carry;
    }
    void get_twos_complement(int *b, int *result, int n)
    {
        int *oc = new int[n];
        for (int i = 0; i < n; i++)
            oc[i] = (b[i] == 0) ? 1 : 0;
        int *one = new int[n];
        for (int i = 0; i <= n - 2; i++)
        {
            one[i] = 0;
        }
        one[n - 1] = 1;
        add(oc, one, result, n);
    }

    void shift_left(int *A, int *Q, int n)
    {
        for (int i = 0; i <= n - 1; i++)
            A[i] = A[i + 1];
            A[n] = Q[0];
        for (int i = 0; i <= n - 2; i++)
            Q[i] = Q[i + 1];
    }