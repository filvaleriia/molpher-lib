/* 
 * File:   ExplorationTree.hpp
 * Author: sichom
 *
 * Created on October 14, 2015, 3:10 PM
 */

#ifndef EXPLORATIONTREE_HPP
#define	EXPLORATIONTREE_HPP

#include <memory>

//#include "ExplorationTreeSnapshot.hpp"
//#include "ExplorationParameters.hpp"
#include "MolpherMol.hpp"

class TreeOperation; // forward declaration to resolve circular dependency

class ExplorationTree {
    
    friend class TreeOperation;
    
public:
//    typedef tbb::concurrent_vector<MolpherMolecule> MoleculeVector;
//    typedef tbb::concurrent_vector<MolpherMolecule*> MoleculePointerVector;
//    typedef std::vector<bool> BoolVector;
//    typedef tbb::concurrent_hash_map<std::string, bool /*dummy*/> SmileSet;
//    typedef tbb::concurrent_vector<std::string> SmileVector;
    
    class ExplorationTreeImpl;
    
private:
//    PathFinderContext context;
//    int threadCount;
//    MoleculeVector candidateMoprhs;
//    BoolVector candidateMorphsMask;
//    ExplorationTree(IterationSnapshot& snp);
//    void treeInit(IterationSnapshot& snp);
//    
    std::shared_ptr<ExplorationTreeImpl> pimpl;
    
//    
//public:
//    static ExplorationTree* createFromSnapshot(ExplorationTreeSnapshot& snapshot);
//    
//    ExplorationTree(const std::string& sourceMolAsSMILES);
//    ExplorationTree(const std::string& sourceMolAsSMILES, const std::string& targetMolAsSMILES);
//    ExplorationTree(ExplorationParameters& params);
//    
//    ExplorationTreeSnapshot* createSnapshot() const;
//    
//    void runOperation(TreeOperation& operation);
//    
//    void fetchLeaves(std::vector<MolpherMol>& leaves);
//    void fetchLeaves(ExplorationTree::MoleculePointerVector&, bool increase_dist_improve_counter = false);
//    const std::vector<MolpherMol>& fetchLeaves();
//    MolpherMol* fetchMol(const std::string& canonSMILES);
//    bool hasMol(const std::string& canonSMILES);
//    bool isPathFound();
//    void deleteSubtree(const std::string& canonSMILES);
//    void generateMorphs();
//    void sortMorphs();
//    void filterMorphs();
//    void filterMorphs(int filters);
//    void extend();
//    void prune();
//    
//    int getThreadCount();
//    int getGenerationCount();
//    ExplorationParameters& getParams();
//    const std::vector<MolpherMol>& getCandidateMorphs();
//    const std::vector<bool>& getCandidateMorphsMask(); // TODO add a bitset version 
//    
//    void setThreadCount(int threadCnt);
//    void setParams(ExplorationParameters& params);
//    void setCandidateMorphsMask(const std::vector<bool>&); // TODO add a bitset version

};

#endif	/* EXPLORATIONTREE_HPP */
