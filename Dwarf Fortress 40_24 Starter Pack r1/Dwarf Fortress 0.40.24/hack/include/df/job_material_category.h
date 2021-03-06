/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_JOB_MATERIAL_CATEGORY_H
#define DF_JOB_MATERIAL_CATEGORY_H
namespace df {
  union job_material_category {
    uint32_t whole;
    struct {
      uint32_t plant : 1;
      uint32_t wood : 1; /*!< wood log */
      uint32_t cloth : 1;
      uint32_t silk : 1;
      uint32_t leather : 1;
      uint32_t bone : 1;
      uint32_t shell : 1;
      uint32_t wood2 : 1; /*!< wood material */
      uint32_t soap : 1;
      uint32_t tooth : 1;
      uint32_t horn : 1;
      uint32_t pearl : 1;
      uint32_t yarn : 1;
    } bits;
    enum Shift {
      shift_plant = 0,
      shift_wood = 1,
      shift_cloth = 2,
      shift_silk = 3,
      shift_leather = 4,
      shift_bone = 5,
      shift_shell = 6,
      shift_wood2 = 7,
      shift_soap = 8,
      shift_tooth = 9,
      shift_horn = 10,
      shift_pearl = 11,
      shift_yarn = 12
    };
    enum Mask : uint32_t {
      mask_plant = 0x1U,
      mask_wood = 0x2U,
      mask_cloth = 0x4U,
      mask_silk = 0x8U,
      mask_leather = 0x10U,
      mask_bone = 0x20U,
      mask_shell = 0x40U,
      mask_wood2 = 0x80U,
      mask_soap = 0x100U,
      mask_tooth = 0x200U,
      mask_horn = 0x400U,
      mask_pearl = 0x800U,
      mask_yarn = 0x1000U
    };
    job_material_category(uint32_t whole_ = 0) : whole(whole_) {};
  };
  template<> struct DFHACK_EXPORT bitfield_traits<job_material_category> {
    typedef uint32_t base_type;
    typedef job_material_category bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<job_material_category> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
