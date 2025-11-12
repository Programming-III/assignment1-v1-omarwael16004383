#ifndef VISITOR_H_INCLUDED
#define VISITOR_H_INCLUDED
#include <string>
#include<iostream>
using namespace std;

class Visitor{
private:
    string visitorName;
    int ticketsBought;

public:
    Visitor();
    Visitor(string visitorName,int ticketsBought);
    void displayinfo();
    string getVisitorsName;
    int getTicketsBought;
    void setVisitorName;
    void setTicketsBought;
    ~Visitor();



};



#endif // VISITOR_H_INCLUDED
