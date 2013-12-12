//
//  main.cpp
//  JimmehBot
//
//  Created by Simon Persson on 12/12/13.
//  Copyright (c) 2013 Simon Persson. All rights reserved.
//

#include <iostream>
#include "IrcBot.h"

int main()
{
    IrcBot bot = IrcBot("NICK JimmehBot\r\n","USER JimmehBot JimmehBot JimmehBot :Jimmeh Bot\r\n");
    bot.start();
    
    return 0;
    
}

