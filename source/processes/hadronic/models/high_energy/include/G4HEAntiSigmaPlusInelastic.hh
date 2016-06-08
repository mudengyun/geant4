// This code implementation is the intellectual property of
// the GEANT4 collaboration.
//
// By copying, distributing or modifying the Program (or any work
// based on the Program) you indicate your acceptance of this statement,
// and all its terms.
//
// $Id: G4HEAntiSigmaPlusInelastic.hh,v 1.2.8.1 1999/12/07 20:52:02 gunter Exp $
// GEANT4 tag $Name: geant4-01-00 $
//
//
// G4 Gheisha High Energy model class -- header file
// H. Fesefeldt, RWTH Aachen 23-October-1996
// Last modified: 10-December-1996

// A prototype of the Gheisha High Energy collision model.

#ifndef G4HEAntiSigmaPlusInelastic_h
#define G4HEAntiSigmaPlusInelastic_h 1

#include "G4HEInelastic.hh"

class G4HEAntiSigmaPlusInelastic : public G4HEInelastic  
{
 public: 
        G4HEAntiSigmaPlusInelastic() : G4HEInelastic()
           {
             G4int    vecLen       = 0;
           }

        ~G4HEAntiSigmaPlusInelastic(){ };
         
        G4int vecLength;
        
        G4VParticleChange * ApplyYourself( const G4Track &aTrack, G4Nucleus &targetNucleus );

        G4int  GetNumberOfSecondaries()
               { return vecLength; }         

 private:

        void   FirstIntInCasAntiSigmaPlus(G4bool &inElastic, const G4double availableEnergy,
                                          G4HEVector pv[],
                                          G4int &vecLen, 
                                          G4HEVector incidentParticle,
                                          G4HEVector targetParticle,
                                          const G4double atomicWeight);
};
#endif                     
                                         
