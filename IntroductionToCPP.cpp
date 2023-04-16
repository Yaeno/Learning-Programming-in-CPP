#include<iostream>
using namespace std;

// ----hello world----//

/*int main() {

    cout << "Hello C++ " << endl;

    //system("pause") -only works for Windows


    return 0;
}*/


//----1.3 Variable ----//
/*
int main(){
    //变量的定义
    //语法：数据类型 变量名 = 初始值

    int a = 10;
    cout << "a =" << a << endl;

    return 0;
}*/


//----1.4 Constant----//
// 1. #define 
// 2. const

// ex1. Macro Constant
/*#define Day 7

int main(){

    cout <<"One week has " << Day << " days." <<endl;

    // 2. const decorative constant
    const int month = 12;
    //month = 24; Error

    cout << "There are "<< month << " months in a year." <<endl;

    return 0;
}*/

// ======== 2. Data Type ==========
//----2.2 sizeof ----//
/*int main(){

    cout << "short 类型所占内存空间为： " << sizeof(short) << endl;

    cout << "int 类型所占内存空间为： " << sizeof(int) << endl;

    cout << "long 类型所占内存空间为： " << sizeof(long) << endl;

    cout << "long long 类型所占内存空间为： " << sizeof(long long) << endl;

    return 0;

}*/

//----2.3 Floats ----//
/* int main(){
    float f1 = 3.14f; //在数字后面加f，强调这个值是float//
    double d1 = 3.14;

    cout << f1 << endl;
    cout << d1 << endl;

    cout << "float sizeOf = " << sizeof(f1) << endl;
    cout << "double sizeOf = " << sizeof(d1) << endl;

    // 科学计数法
    float f2 = 3e2; // e(n) = 10^n
    cout << "f2 = " << f2 << endl;

    float f3 = 3e-2; // e(-n) = 0.1^n
    cout << "f3 = " << f3 << endl;

    return 0;
} */

//----2.4 Char ----//
int main(){

    // 1. Create Char variable
    char ch = 'a';
    cout << ch << endl;

    // 2. Figure out the size of a char 
    cout << "char sizeOf = " << sizeof(ch) << endl;

    // 3. Common Mistakes
    // mistake 1: char ch2 = "b";
    // mistake 2: char ch2 = "xyz";


    // 4. Mapped ASCII Code
    // Two common ASCII cases
    // a = 97
    // A = 65 
    cout << "The mapped ASCII is " << (int)ch << endl;
    cout << "The mapped ASCII is " << (int)'A' << endl;

    return 0;
}






