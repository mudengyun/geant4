#------------------------------------------------------------------------------
# Module : G4csg
# Package: Geant4.src.G4geometry.G4csg
#------------------------------------------------------------------------------

#
# Define the Geant4 Module.
#
geant4_define_module(NAME G4csg
  HEADERS
    G4Box.hh
    G4Box.icc
    G4CSGSolid.hh
    G4Cons.hh
    G4Cons.icc
    G4CutTubs.hh
    G4CutTubs.icc
    G4Orb.hh
    G4Orb.icc
    G4Para.hh
    G4Para.icc
    G4Sphere.hh
    G4Sphere.icc
    G4Torus.hh
    G4Torus.icc
    G4Trap.hh
    G4Trap.icc
    G4Trd.hh
    G4Trd.icc
    G4Tubs.hh
    G4Tubs.icc
    G4UBox.hh
    G4UCons.hh
    G4UCutTubs.hh
    G4UOrb.hh
    G4UPara.hh
    G4USphere.hh
    G4UTorus.hh
    G4UTrap.hh
    G4UTrd.hh
    G4UTubs.hh
  SOURCES
    G4Box.cc
    G4CSGSolid.cc
    G4Cons.cc
    G4CutTubs.cc
    G4Orb.cc
    G4Para.cc
    G4Sphere.cc
    G4Torus.cc
    G4Trap.cc
    G4Trd.cc
    G4Tubs.cc
    G4UBox.cc
    G4UCons.cc
    G4UCutTubs.cc
    G4UOrb.cc
    G4UPara.cc
    G4USphere.cc
    G4UTorus.cc
    G4UTrap.cc
    G4UTrd.cc
    G4UTubs.cc
  GRANULAR_DEPENDENCIES
    G4geometrymng
    G4globman
    G4graphics_reps
    G4hepnumerics
    G4intercoms
    G4volumes
  GLOBAL_DEPENDENCIES
    G4global
    G4graphics_reps
    G4intercoms
  LINK_LIBRARIES
    ${VECGEOM_LIBRARIES}
)

# List any source specific properties here
