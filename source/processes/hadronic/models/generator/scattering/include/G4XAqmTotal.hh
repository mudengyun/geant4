//
// ********************************************************************
// * DISCLAIMER                                                       *
// *                                                                  *
// * The following disclaimer summarizes all the specific disclaimers *
// * of contributors to this software. The specific disclaimers,which *
// * govern, are listed with their locations in:                      *
// *   http://cern.ch/geant4/license                                  *
// *                                                                  *
// * Neither the authors of this software system, nor their employing *
// * institutes,nor the agencies providing financial support for this *
// * work  make  any representation or  warranty, express or implied, *
// * regarding  this  software system or assume any liability for its *
// * use.                                                             *
// *                                                                  *
// * This  code  implementation is the  intellectual property  of the *
// * GEANT4 collaboration.                                            *
// * By copying,  distributing  or modifying the Program (or any work *
// * based  on  the Program)  you indicate  your  acceptance of  this *
// * statement, and all its terms.                                    *
// ********************************************************************
//
//

#ifndef G4XAqmTotal_hh
#define G4XAqmTotal_hh

#include "globals.hh"
#include "G4VCrossSectionSource.hh"
#include "G4CrossSectionVector.hh"

class G4KineticTrack;

class G4XAqmTotal : public G4VCrossSectionSource
{

public:

  G4XAqmTotal();

  virtual ~G4XAqmTotal();

  G4bool operator==(const G4XAqmTotal &right) const;
  G4bool operator!=(const G4XAqmTotal &right) const;

  virtual G4double CrossSection(const G4KineticTrack& trk1, const G4KineticTrack& trk2) const;
 
  virtual const G4CrossSectionVector* GetComponents() const { return 0; }

  virtual G4bool IsValid(G4double e) const;

  virtual G4String Name() const;


protected:


private:  

  G4XAqmTotal(const G4XAqmTotal &right);
  const G4XAqmTotal& operator=(const G4XAqmTotal &right);
  
  static const G4double _lowLimit;
  static const G4double _highLimit;
  
};

#endif

















