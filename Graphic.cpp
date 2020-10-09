#include "Graphic.h"

// ::是域操作符，用于类外定义类成员，表示::后的函数/变量是类的成员
// C++规定，类的const静态成员可以直接初始化，非const的静态类成员（比如static）需要在类声明以外初始化
// 一般选择在类的实现文件中初始化
// 也就是这个文件在做的事
// 初始化如果不赋值，系统会自动给一个初始值，例如int Graphic::m_screen_width; 则系统会将其初始化为0

int Graphic::m_screen_width = SCREEN_WIDTH;
int Graphic::m_screen_height = SCREEN_HEIGHT;

void Graphic::Create(){
    initgraph(m_screen_width, m_screen_height);
}

void Graphic::Destroy(){
    closegraph();
}

int Graphic::GetScreenWidth(){
    return m_screen_width;
}

int Graphic::GetScreenHeight(){
    return m_screen_height;
}