#ifndef POINT_PILLAR_WRAPPER_H
#define POINT_PILLAR_WRAPPER_H

#include <iostream>
#include <sstream>
#include <fstream>

#include "params.h"
#include "pointpillar.h"

class PointPillarWrapper {
public:
    PointPillarWrapper();
    ~PointPillarWrapper();

    void run();

private:
    cudaEvent_t start, stop;
    cudaStream_t stream = NULL;
    float elapsedTime;

    std::vector<Bndbox> nms_pred;

    PointPillar *pointpillar;

    void Getinfo(void);
    int loadData(const char *file, void **data, unsigned int *length);
    void SaveBoxPred(std::vector<Bndbox> boxes, std::string file_name);
};

#endif // POINT_PILLAR_WRAPPER_H
