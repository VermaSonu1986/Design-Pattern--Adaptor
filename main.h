#include "Library.h"
#pragma once

enum colorType{
    RED,
    YELLOW,
    GREEN,
    BLUE
};
class localDisplay{
public:
    virtual void message(colorType, string)=0;
};

class adaptor :public localDisplay, public remoteDisplay{

public:
    adaptor()
    {
        cout<<"adaptor CTOR"<<endl;
    }

    virtual ~adaptor()
    {
        cout<<"adaptor DTOR"<<endl;
    }
    virtual void message( colorType c, string s)
    {
        switch(c)
        {

    case RED:
       remoteDisplay::messageRed(s);
        break;
    case GREEN:
       remoteDisplay::messageGreen(s);
        break;
    case YELLOW:
       remoteDisplay::messageYellow(s);
        break;
    case BLUE:
       remoteDisplay::messageBlue(s);
        break;

    default:
        cout<<"unknown color type"<<endl;
        break;
    }

    }
};
