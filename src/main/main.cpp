#include <iostream>

#include <cml/cml.h>

using namespace cml;
using namespace cml::xml;

#define xml stream()

String operator""_strm(const char* w);

constexpr INT _w = 0;

#define _ stream() <

int main(int argc, char const *argv[])
{
    String test = "Hallo";

    xml >
        x<p>()
            >> "Das ist ein Test"
            >> "Ein weiterer Test"
        x<_ p>
    xml;

    return 0;
}
