/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_GENERAL_REF_BUILDING_TRIGGERTARGETST_H
#define DF_GENERAL_REF_BUILDING_TRIGGERTARGETST_H
#ifndef DF_GENERAL_REF_BUILDING_H
#include "general_ref_building.h"
#endif
namespace df {
  struct DFHACK_EXPORT general_ref_building_triggertargetst : general_ref_building {
    static virtual_identity _identity;
  protected:
    general_ref_building_triggertargetst(virtual_identity *_id = &general_ref_building_triggertargetst::_identity);
    friend void *df::allocator_fn<general_ref_building_triggertargetst>(void*,const void*);
  };
}
#endif
