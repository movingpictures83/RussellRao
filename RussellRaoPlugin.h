#ifndef RUSSELLRAOPLUGIN_H
#define RUSSELLRAOPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include <string>
#include <vector>

class RussellRaoPlugin : public Plugin
{
public: 
 std::string toString() {return "RussellRao";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
