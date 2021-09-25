#include <cstdio>

#include "buzz/buzzvm.h"
#include "swarm_template_loop_functions.h"
#include <argos3/core/simulator/simulator.h>
#include <argos3/core/utility/configuration/argos_configuration.h>
#include <argos3/plugins/robots/kheperaiv/simulator/kheperaiv_entity.h>
#include <cmath>

/****************************************/
/****************************************/

/**
 * Functor to get data from the robots
 */
struct GetRobotData : public CBuzzLoopFunctions::COperation
{
};

/****************************************/
/****************************************/

/**
 * Functor to put the belief in the Buzz VMs.
 */
struct PutValues : public CBuzzLoopFunctions::COperation
{
};

/****************************************/
/****************************************/

void CSwarmTemplateLoopFunctions::Init(TConfigurationNode &t_node)
{
   /* Call parent Init() */
   CBuzzLoopFunctions::Init(t_node);
}

/****************************************/
/****************************************/

void CSwarmTemplateLoopFunctions::Reset()
{
}

/****************************************/
/****************************************/

void CSwarmTemplateLoopFunctions::Destroy()
{
}

/****************************************/
/****************************************/

CColor CSwarmTemplateLoopFunctions::GetFloorColor(const CVector2 &c_position_on_plane)
{
   return CColor::WHITE;
}

/****************************************/
/****************************************/

void CSwarmTemplateLoopFunctions::PreStep()
{
}

/****************************************/
/****************************************/

void CSwarmTemplateLoopFunctions::PostStep()
{
}

/****************************************/
/****************************************/

int CSwarmTemplateLoopFunctions::GetNumRobots() const
{
   return 0;
}

/****************************************/
/****************************************/

bool CSwarmTemplateLoopFunctions::IsExperimentFinished() {
   /* Feel free to try out custom ending conditions */
   if(GetSpace().GetSimulationClock() >= m_maxIter) {
      return true;
   }
   return false;
}

REGISTER_LOOP_FUNCTIONS(CSwarmTemplateLoopFunctions, "swarm_template_loop_functions")
