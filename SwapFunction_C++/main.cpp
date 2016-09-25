//
//  main.cpp
//  SwapFunction_C++
//
//  Created by chenyufeng on 9/25/16.
//  Copyright © 2016 chenyufeng. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

/**
 *  swap函数的使用
 
 algorithm里面已经继承了swap函数，推荐直接使用，而不是自己去编写交换函数。
 */
using namespace std;

void printVector(vector<int> &vec);
void swap1();
void swap2();
void swap3();

int main(int argc, const char * argv[])
{
    swap1();
    swap2();
    swap3();

    return 0;
}

// 交换两个数int
void swap1()
{
    int a = 2,b = 4;
    cout << "a = " << a << ";b = " << b << endl;
    swap(a, b);
    cout << "a = " << a << ";b = " << b << endl;
}

// 交换两个vector
void swap2()
{
    int a[] = {1,2,3,4};
    int b[] = {5,6,7};
    vector<int> vectorA(a, a + sizeof(a) / sizeof(int));
    vector<int> vectorB(b, b + sizeof(b) / sizeof(int));
    printVector(vectorA);
    printVector(vectorB);

    swap(vectorA, vectorB);
    printVector(vectorA);
    printVector(vectorB);
}

// 交换vector中的数值
void swap3()
{
    int a[] = {1,2,3,4};
    vector<int> vectorA(a, a + sizeof(a) / sizeof(int));
    printVector(vectorA);

    swap(vectorA[1], vectorA[3]);
    printVector(vectorA);
}

void printVector(vector<int> &vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
}
