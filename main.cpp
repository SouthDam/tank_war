#pragma warning(disable:4996) //用来关闭所有4996号警告

#include <iostream>
#include <conio.h>
#include <time.h>

#include "Graphic.h"
#include "MainTank.h"

using namespace std;

void main() {
    Graphic::Create();

    MainTank mainTank;

    bool loop = true;
    bool skip = false;
    while(loop) {
        if(kbhit()) {             //kbhit用来捕捉键盘的动作
            int key = getch();    //getch用来获得按下键的码值
                                  //需要注意的是，这只适用于windows系统，Linux并不采用这一套键值

            switch(key) {
                case 72:
                    mainTank.SetDir(Dir::UP);
                    break;
                case 80:
                    mainTank.SetDir(Dir::DOWN);
                    break;
                case 75:
                    mainTank.SetDir(Dir::LEFT);
                    break;
                case 77:
                    mainTank.SetDir(Dir::RIGHT);
                    break;
                
                case 224:         //getch读取功能键或方向键时需要读取两次，第一次
                    break;        //返回0或者224，第二次才返回实际键值
                                  //因此这里是用于跳过第一次读取
                // ESC
                case 27:
                    loop = false;
                    break;
                // space
                case 32:
                    break;
                // Enter
                case 13:
                    if (skip) skip = false;
                    else skip = true;
                    break;
                default:
                    break;
            }
        }

        if (!skip) {
            cleardevice();

            mainTank.Move();
            mainTank.Display();
        }

        Sleep(200);
    }

    Graphic::Destroy();
}