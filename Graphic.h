/*
带#的都是预处理命令
*/
#ifndef __GRAPHIC_H__ 
#define __GRAPHIC_H__

/*
#ifndef 标识符             左边这种形式是告诉编译器，如果
code snippet 1             标识符未被定义则编译code snippet 1，
#else                       如果定义了则编译code snippet 2，
code snippet 2               若把ifndef改为ifdef则效果相反，这种东西可以用于debug，例如：#ifdef DEBUG，要调试的时候在前面再加上#define DEBUG
#endif
*/
#include <graphics.h>         //头文件

#define SCREEN_WIDTH   1024
#define SCREEN_HEIGHT  768
// #define 标识符 值：这样的语句提前定义该标识符，例如这里两句就是把SCREEN_WIDTH和SCREEN_HEIGHT定义为1024和768；define同时可用于提前定义简单函数
class Graphic{
// 用class定义的类默认成员为private，用struct定义的默认为public
public:
    static void Create();
    static void Destroy();

    static int GetScreenWidth();
    static int GetScreenHeight();

private:
    static int m_screen_width;
    static int m_screen_height;
};

#endif