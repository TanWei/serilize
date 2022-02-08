#include <vector>
#include <map>
#include <unordered_map>
#include <string>
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
    map<string, Any> map1;
    int a='1';
    Any a1='a';
    Any a2 = 1;
    //B b;
    // b.m_s2any.insert(make_pair("asd", 1));
    // b.m_s2any.insert(make_pair("fgh", 'g'));
    std::vector<Any> p1;
    //p1.second = 0;
    return 0;
}