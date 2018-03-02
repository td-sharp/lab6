//#include <iostream>
using namespace std;
#include "fonts.h"

void showName()
{
        Rect s;
        s.bot = 100;
        s.left = 100;
        s.center = 100;
        ggprint8b(&s, 16, 0xFFFFFFFF, "Tyler");
}
