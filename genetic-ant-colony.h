// src/genetic-ant-colony/model/genetic-ant-colony.h
#ifndef GENETIC_ANT_COLONY_H
#define GENETIC_ANT_COLONY_H

#include <vector>
#include <iostream>
#include "ns3/core-module.h"
#include "ns3/network-module.h"

namespace ns3 {

class GeneticAntColony {
public:
    GeneticAntColony();
    ~GeneticAntColony();

    void SetPopulationSize(uint32_t size);
    void SetMaxGenerations(uint32_t generations);
    void SetCrossoverRate(double rate);
    void SetMutationRate(double rate);
    void SetAntCount(uint32_t count);
    void SetAlpha(double alpha);
    void SetBeta(double beta);
    void SetRho(double rho);
    void SetQ(double q);

    void Initialize();
    void Run();

private:
    uint32_t m_populationSize;
    uint32_t m_maxGenerations;
    double m_crossoverRate;
    double m_mutationRate;
    uint32_t m_antCount;
    double m_alpha;
    double m_beta;
    double m_rho;
    double m_q;

    std::vector<std::vector<double>> m_pheromoneMatrix;
    std::vector<std::vector<double>> m_heuristicMatrix;

    void InitializePheromoneMatrix();
    void InitializeHeuristicMatrix();
    void GeneticAlgorithm();
    void AntColonyOptimization();
};

} // namespace ns3

#endif /* GENETIC_ANT_COLONY_H */
