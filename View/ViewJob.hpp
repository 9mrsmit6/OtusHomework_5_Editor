#ifndef VIEWJOB_HPP
#define VIEWJOB_HPP

#include <vector>

namespace View
{
    struct MinimalViewJob
    {
        int t; //sample
    };

    using ViewJob = std::vector<MinimalViewJob>;

}

#endif // VIEWJOB_HPP
