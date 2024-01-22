#include <iostream>

using namespace std;

void print_arr(int* arr, int N)
{
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int N;
    cout << "Введите N: ";
    cin >> N;
    
    int A[N];
    int sum;
    int k = 1000000000;
    int j = 0;
    
    for (int i = 0; i < N; i++)
    {   
        cin >> A[i];
        if (k > A[i])
        {
            k = A[i];
            j = i;
            cout << k << endl;
        }
        sum += A[i];
    }
    
    int avg;
    avg = sum / N;
    
    A[j] = avg;
    
    print_arr(A, N);

    return 0;
}
