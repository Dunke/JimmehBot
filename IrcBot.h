//
//  IrcBot.h
//  JimmehBot
//
//  Created by Simon Persson on 12/12/13.
//  Copyright (c) 2013 Simon Persson. All rights reserved.
//

#ifndef __JimmehBot__IrcBot__
#define __JimmehBot__IrcBot__

class IrcBot
{
public:
    IrcBot(char * _nick, char * _usr);
    virtual ~IrcBot();
    
    bool setup;
    
    void start();
    bool charSearch(char *toSearch, char *searchFor);
    
private:
    char *port;
    int s; //the socket descriptor
    
    char *nick;
    char *usr;
    
    bool isConnected(char *buf);
    char * timeNow();
    bool sendData(char *msg);
    void sendPong(char *buf);
    void msgHandel(char *buf);
};

#endif /* defined(__JimmehBot__IrcBot__) */
