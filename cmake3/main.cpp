#include <iostream>
#include "version.hpp"
#include <algorithm>

#include "vector"
#include "iostream"

#if defined(BOOST)

#include <boost/range/algorithm.hpp>

#endif

void sortValues(std::vector<int> &values) {
#if defined(BOOST)
    std::cout << "boost sort \n";
    boost::range::sort(values);
#else
    std::cout<<"std sort \n";
    std::sort(values.begin(), values.end());
#endif
}

int main() {
    std::cout << "projectname "<<_DPROJECT_NAME<<" version " << VERSION_MAJOR << "." << VERSION_MINOR << "\n";
    std::vector<int> values = {13, 24, 5, 56, 78};
    sortValues(values);
    for (auto &i : values) {
        std::cout << i << " ";
    }
    return 0;
}
