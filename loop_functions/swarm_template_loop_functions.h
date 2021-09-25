#ifndef SWARM_TEMPLATE_LOOP_FUNCTIONS_H
#define SWARM_TEMPLATE_LOOP_FUNCTIONS_H

#include <buzz/argos/buzz_loop_functions.h>
#include <argos3/core/simulator/loop_functions.h>
#include <argos3/core/simulator/entity/positional_entity.h>
#include <argos3/core/simulator/entity/floor_entity.h>
#include <string>

using namespace argos;

class CSwarmTemplateLoopFunctions : public CBuzzLoopFunctions {

public:

   CSwarmTemplateLoopFunctions() {}
   virtual ~CSwarmTemplateLoopFunctions() {}

   virtual void Init(TConfigurationNode& t_tree);
   virtual void Reset();
   virtual void Destroy();
   virtual void PreStep();
   virtual void PostStep();
   virtual CColor GetFloorColor(const CVector2& c_position_on_plane);


private:
   int m_maxIter;

   int GetNumRobots() const;
   virtual bool IsExperimentFinished();
};

#endif
