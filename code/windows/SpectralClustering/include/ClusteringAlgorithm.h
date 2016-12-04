#ifndef CLUSTERINGALGORITHM_H
#define CLUSTERINGALGORITHM_H

#include "../CImg.h"

using namespace cimg_library;

class ClusteringAlgorithm
{
    public:
        ClusteringAlgorithm();
        virtual ~ClusteringAlgorithm();

        virtual CImg<unsigned char> operator()(CImg<>,int) = 0;
        static const unsigned long MAXITER = 10000;

    protected:

    private:
};

#endif // CLUSTERINGALGORITHM_H