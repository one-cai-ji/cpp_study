// Copyright (c) 2020 by Chrono
//
// curl-config --libs
// curl-config --version
// curl-config --features
// curl-config --protocols
//
// g++ test_curl.cpp -std=c++11 -lcurl -o a.out;./a.out
// g++ test_curl.cpp -std=c++14 -lcurl -o a.out;./a.out

#include <iostream>

#include <curl/curl.h>

int main()
{
    using namespace std;

    cout << "libcurl demo" << endl;
}
