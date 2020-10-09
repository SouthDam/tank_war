#ifndef __MAIN_TANK__
#define __MAIN_TANK__

#include "Tank.h"

class MainTank : public Tank{

public:
    MainTank(){ // 构造函数，函数名与类名完全一致，创建类对象时会被调用
        m_x = 400;
        m_y = 300;
        m_color = WHITE;
        m_dir = Dir::UP;
        m_step = 2;
    }

    ~MainTank(){} //析构函数，函数名与类名完全一致，没有参数，没有返回类型
                  //析构函数在对象被撤销时被调用，用于释放内存

    void SetDir(Dir dir);

    void Display();
    void Move();

protected:
    void DrawTankBody(int style);
};

#endif