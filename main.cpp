#include <vector>
#include <map>
#include "Any.h"

struct A
{
    int m_a;
};

struct B : public A
{
    vector<int> m_v1;
    map<string, Any> m_s2any;
};

int main()
{
    return 0;
}