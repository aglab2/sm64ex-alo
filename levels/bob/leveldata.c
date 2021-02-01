#include <ultra64.h>
#include "sm64.h"
#include "surface_terrains.h"
#include "moving_texture_macros.h"
#include "level_misc_macros.h"
#include "macro_preset_names.h"
#include "special_preset_names.h"
#include "textures.h"
#include "dialog_ids.h"

#include "make_const_nonconst.h"
#include "levels/bob/texture.inc.c"
#include "levels/bob/areas/1/1/model.inc.c"
#include "levels/bob/areas/1/2/model.inc.c"
#include "levels/bob/areas/1/3/model.inc.c"
#include "levels/bob/areas/1/4/model.inc.c"
#include "levels/bob/areas/1/5/model.inc.c"
#include "levels/bob/areas/1/6/model.inc.c"
#include "levels/bob/chain_chomp_gate/model.inc.c"
#include "levels/bob/seesaw_platform/model.inc.c"
#include "levels/bob/grate_door/model.inc.c"
#include "levels/bob/areas/1/collision.inc.c"
#include "levels/bob/areas/1/macro.inc.c"
#include "levels/bob/chain_chomp_gate/collision.inc.c"
#include "levels/bob/seesaw_platform/collision.inc.c"
#include "levels/bob/grate_door/collision.inc.c"
#include "levels/bob/areas/1/trajectory.inc.c"
#include "levels/bob/leveldata.inc.c"

static Movtex bob_movtex_water[] = {
    MOV_TEX_INIT_LOAD(    1),
    MOV_TEX_ROT_SPEED(   20),
    MOV_TEX_ROT_SCALE(   2),
    MOV_TEX_4_BOX_TRIS(3688, -4995),
    MOV_TEX_4_BOX_TRIS(3688,   -1113),
    MOV_TEX_4_BOX_TRIS(6918,   -1113),
    MOV_TEX_4_BOX_TRIS(6918, -4995),
    MOV_TEX_ROT(     ROTATE_COUNTER_CLOCKWISE),
    MOV_TEX_ALPHA(    0x96),
    MOV_TEX_DEFINE(  TEXTURE_WATER),
    MOV_TEX_END(),
};

const struct MovtexQuadCollection bob_movtex_water_data[] = {
    {0, bob_movtex_water},
    {-1, NULL},
};
