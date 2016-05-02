#pragma once

#include <algorithm>
#include <iterator>
#include <vector>

namespace util {

/* O(nlogn) solution */
template <typename Iterator>
int longest_increasing_subsequence(Iterator begin, Iterator end) {
    if (begin == end) {
        return 0;
    }

    std::vector<int> t;
    t.reserve(std::distance(begin, end));
    t.push_back(*begin);

    for (auto it = std::next(begin); it != end; ++it) {
        auto boundIt = std::lower_bound(t.begin(), t.end(), *it);
        if (boundIt == t.end()) {
            t.push_back(*it);
        } else {
            *boundIt = *it;
        }
    }

    return t.size();
}

} // namespace util
