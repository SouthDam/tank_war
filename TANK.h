#ifndef __TANK_H__
#define __TANK_H__

#include "Graphic.h"
// include后边用双引号的话，编译器会从当前目录开始找这个头文件，如果找不到，则进入系统目录找
// 用尖括号的话，编译器会到系统目录中去寻找
// 因此不确定该头文件路径的话，用双引号

enum Dir {UP, DOWN, LEFT, RIGHT};

class Tank{

public:
    virtual void Display() = 0;
    virtual void Move() = 0;

protected:
    int m_x;
    int m_y;
    COLORREF m_color;

    Dir m_dir;
    int m_step;
};

#endif