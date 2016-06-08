// This code implementation is the intellectual property of
// the GEANT4 collaboration.
//
// By copying, distributing or modifying the Program (or any work
// based on the Program) you indicate your acceptance of this statement,
// and all its terms.
//
// Hadronic Process: Nuclear De-excitations
// by V. Lara (Oct 1998) writen from G4Evaporation.cc (May 1998)
//


#include "G4VEvaporation.hh"


G4VEvaporation::G4VEvaporation(const G4VEvaporation &right)
{
 G4Exception("G4VEvaporation::copy_constructor meant to not be accessable");
}




const G4VEvaporation & G4VEvaporation::operator=(const G4VEvaporation &right)
{
  G4Exception("G4VEvaporation::operator= meant to not be accessable");
  return *this;
}


G4bool G4VEvaporation::operator==(const G4VEvaporation &right) const
{
  return false;
}

G4bool G4VEvaporation::operator!=(const G4VEvaporation &right) const
{
  return true;
}




