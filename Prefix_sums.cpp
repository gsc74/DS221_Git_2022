#include<iostream>
#include<vector>

int main()
{
    std::vector<int> A;
    for (int i = 0; i < 5; i++)
    {
        A.push_back(rand()%101);
    }

    int sum = A[0];
    for (int i = 1; i < A.size(); i++)
    {
        sum += A[i];
        A[i] = sum;
    }

    for (int i = 0; i < A.size(); i++)
    {
        std::cout << A[i] << "\t";
    }
    std::cout << " " << std::endl;
    
    return 0;
}
