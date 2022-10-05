#include <iostream>
#include <map>
#include <string>

enum class Colors
{
    RED,
    GREEN,
    BLACK,
    WRITE
};				

void toString(Colors);
Colors toEnum(std::string);

int main()
{
	toString(Colors::RED);
	int c = (int)toEnum("Green");
	std::cout << c << std::endl;
return 0;
}

void toString(Colors type)
{
	std::map<Colors, std::string> mc;
	mc[Colors::RED] = "Red";
	mc[Colors::GREEN] = "green";
	mc[Colors::BLACK] = "black";
	mc[Colors::WRITE] = "write";

	std::cout << mc[type] << std::endl;
}

Colors toEmun(std::string color)
{
	std::map<std::string, Colors> cm;
	      cm["Red"] = Colors::RED;
        cm["green"] = Colors::GREEN;
        cm["black"] = Colors::BLACK;
        cm["write"] = Colors::WRITE;
   return cm[color];
}

//kam espes, bayc 2i mej el warning ka

#include <iostream>
#include <map>
#include <string>

enum class Colors
{
    RED,
    GREEN,
    BLACK,
    WRITE
};

std::map<Colors, std::string> mc = {
    {Colors::RED, "red"},
    {Colors::GREEN, "green"},
    {Colors::BLACK, "black"},
    {Colors::WRITE, "write"},
};

std::string toString(Colors type)
{
   return mc[type];
};

Colors toEnum(std::string s)
{
    for (const auto& [key, value] : mc)
    {
        if(s == value)
        {
               return key;
        }
    }
    return (Colors)0;
}

int main(){
    std::cout << toString(Colors::RED) << std::endl;
    int result = (int)toEnum("red");
    std::cout << result << std::endl;
}

