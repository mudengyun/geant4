// This code implementation is the intellectual property of
// the GEANT4 collaboration.
//
// By copying, distributing or modifying the Program (or any work
// based on the Program) you indicate your acceptance of this statement,
// and all its terms.
//
// $Id: Em5EventActionMessenger.hh,v 1.1.4.1 1999/12/07 20:47:08 gunter Exp $
// GEANT4 tag $Name: geant4-01-00 $
//
// 

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo....
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo....

#ifndef Em5EventActionMessenger_h
#define Em5EventActionMessenger_h 1

#include "globals.hh"
#include "G4UImessenger.hh"

class Em5EventAction;
class G4UIcmdWithAString;
class G4UIcmdWithAnInteger;
class G4UIcmdWithADoubleAndUnit;

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo....

class Em5EventActionMessenger: public G4UImessenger
{
  public:
    Em5EventActionMessenger(Em5EventAction*);
   ~Em5EventActionMessenger();
    
    void SetNewValue(G4UIcommand*, G4String);
    
  private:
    Em5EventAction* eventAction;   
    G4UIcmdWithAnInteger* setVerboseCmd;
    G4UIcmdWithAString*   DrawCmd;
    G4UIcmdWithAnInteger* PrintCmd;
};

#endif