// This code implementation is the intellectual property of
// the GEANT4 collaboration.
//
// By copying, distributing or modifying the Program (or any work
// based on the Program) you indicate your acceptance of this statement,
// and all its terms.
//
// $Id: ExN02EventAction.cc,v 1.2.8.1 1999/12/07 20:47:26 gunter Exp $
// GEANT4 tag $Name: geant4-01-00 $
//
// 

#include "ExN02EventAction.hh"

#include "G4Event.hh"
#include "G4EventManager.hh"
#include "G4TrajectoryContainer.hh"
#include "G4Trajectory.hh"
#include "G4VVisManager.hh"
#include "G4UImanager.hh"
#include "G4ios.hh"


ExN02EventAction::ExN02EventAction()
{}

ExN02EventAction::~ExN02EventAction()
{}

void ExN02EventAction::BeginOfEventAction(const G4Event*)
{}

void ExN02EventAction::EndOfEventAction(const G4Event* evt)
{
  G4cout << ">>> Event " << evt->GetEventID() << endl;
  
  G4TrajectoryContainer * trajectoryContainer = evt->GetTrajectoryContainer();
  G4int n_trajectories = 0;
  if(trajectoryContainer)
  { n_trajectories = trajectoryContainer->entries(); }
  G4cout << "    " << n_trajectories 
       << " trajectories stored in this event." << endl;

  G4VVisManager* pVVisManager = G4VVisManager::GetConcreteInstance();

  if(pVVisManager)
  {
    for(G4int i=0; i<n_trajectories; i++)
    { (*(evt->GetTrajectoryContainer()))[i]->DrawTrajectory(50); }
  }
}


