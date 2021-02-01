#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

#include "make_const_nonconst.h"
#include "levels/castle_grounds/header.h"

const LevelScript level_castle_grounds_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x07, _castle_grounds_segment_7SegmentRomStart, _castle_grounds_segment_7SegmentRomEnd), 
	LOAD_MIO0(0x0A, _bitfs_skybox_mio0SegmentRomStart, _bitfs_skybox_mio0SegmentRomEnd), 
	LOAD_MIO0_TEXTURE(0x09, _outside_mio0SegmentRomStart, _outside_mio0SegmentRomEnd), 
	LOAD_MIO0(0x05, _group10_mio0SegmentRomStart, _group10_mio0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group10_geoSegmentRomStart, _group10_geoSegmentRomEnd), 
	LOAD_MIO0(0x06, _group15_mio0SegmentRomStart, _group15_mio0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group15_geoSegmentRomStart, _group15_geoSegmentRomEnd), 
	LOAD_MIO0(0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0xb, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_11), 
	JUMP_LINK(script_func_global_16), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, castle_grounds_geo_0006F4), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, bubbly_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_WARP_PIPE, warp_pipe_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_CASTLE_DOOR, castle_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_METAL_DOOR, metal_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_VCUTM_GRILL, castle_grounds_geo_00070C), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_FLAG, castle_grounds_geo_000660), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_CANNON_GRILL, castle_grounds_geo_000724), 

	AREA(1, castle_grounds_area_1),
        WARP_NODE(/*id*/ 0xF1, /*destLevel*/ LEVEL_CASTLE_GROUNDS, /*destArea*/ 0x01, /*destNode*/ 0x03, /*flags*/ WARP_NO_CHECKPOINT),
		WARP_NODE(/*id*/ 0x00, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x01, /*destNode*/ 0x00, /*flags*/ WARP_NO_CHECKPOINT),
		WARP_NODE(/*id*/ 0x01, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x01, /*destNode*/ 0x01, /*flags*/ WARP_NO_CHECKPOINT),
		WARP_NODE(/*id*/ 0x02, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x03, /*destNode*/ 0x02, /*flags*/ WARP_NO_CHECKPOINT),
		OBJECT(/*model*/ MODEL_NONE, /*pos*/     0,   900, -1710, /*angle*/ 0, 180, 0, /*behParam*/ 0x00030000, /*beh*/ bhvDeathWarp),
		WARP_NODE(/*id*/ 0x03, /*destLevel*/ LEVEL_CASTLE_GROUNDS, /*destArea*/ 0x01, /*destNode*/ 0x03, /*flags*/ WARP_NO_CHECKPOINT),
		OBJECT(/*model*/ MODEL_NONE, /*pos*/ -1328,   260,  4664, /*angle*/ 0, 180, 0, /*behParam*/ 0x00040000, /*beh*/ bhvSpinAirborneCircleWarp),
		WARP_NODE(/*id*/ 0x04, /*destLevel*/ LEVEL_CASTLE_GROUNDS, /*destArea*/ 0x01, /*destNode*/ 0x04, /*flags*/ WARP_NO_CHECKPOINT),
		OBJECT(/*model*/ MODEL_NONE, /*pos*/ -3379,  -815, -2025, /*angle*/ 0,   0, 0, /*behParam*/ 0x3C050000, /*beh*/ bhvWarp),
		OBJECT(/*model*/ MODEL_NONE, /*pos*/ -3379,  -500, -2025, /*angle*/ 0, 180, 0, /*behParam*/ 0x00060000, /*beh*/ bhvLaunchDeathWarp),
		OBJECT(/*model*/ MODEL_NONE, /*pos*/ -3799, -1199, -5816, /*angle*/ 0,   0, 0, /*behParam*/ 0x00070000, /*beh*/ bhvSwimmingWarp),
		OBJECT(/*model*/ MODEL_NONE, /*pos*/ -3379,  -500, -2025, /*angle*/ 0, 180, 0, /*behParam*/ 0x00080000, /*beh*/ bhvLaunchStarCollectWarp),
		WARP_NODE(/*id*/ 0x05, /*destLevel*/ LEVEL_VCUTM, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
		WARP_NODE(/*id*/ 0x06, /*destLevel*/ LEVEL_CASTLE_GROUNDS, /*destArea*/ 0x01, /*destNode*/ 0x06, /*flags*/ WARP_NO_CHECKPOINT),
		WARP_NODE(/*id*/ 0x07, /*destLevel*/ LEVEL_CASTLE_GROUNDS, /*destArea*/ 0x01, /*destNode*/ 0x07, /*flags*/ WARP_NO_CHECKPOINT),
		WARP_NODE(/*id*/ 0x08, /*destLevel*/ LEVEL_CASTLE_GROUNDS, /*destArea*/ 0x01, /*destNode*/ 0x08, /*flags*/ WARP_NO_CHECKPOINT),
		OBJECT(/*model*/ MODEL_NONE, /*pos*/  5408,  4500,  3637, /*angle*/ 0, 225, 0, /*behParam*/ 0x000A0000, /*beh*/ bhvAirborneWarp),
		WARP_NODE(/*id*/ 0x0A, /*destLevel*/ LEVEL_CASTLE_GROUNDS, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
		OBJECT(/*model*/ MODEL_NONE, /*pos*/ -6901,  2376, -6509, /*angle*/ 0, 230, 0, /*behParam*/ 0x00140000, /*beh*/ bhvAirborneWarp),
		WARP_NODE(/*id*/ 0x14, /*destLevel*/ LEVEL_CASTLE_GROUNDS, /*destArea*/ 0x01, /*destNode*/ 0x14, /*flags*/ WARP_NO_CHECKPOINT),
		OBJECT(/*model*/ MODEL_NONE, /*pos*/  4997, -1250,  2258, /*angle*/ 0, 210, 0, /*behParam*/ 0x001E0000, /*beh*/ bhvSwimmingWarp),
		WARP_NODE(/*id*/ 0x1E, /*destLevel*/ LEVEL_CASTLE_GROUNDS, /*destArea*/ 0x01, /*destNode*/ 0x1E, /*flags*/ WARP_NO_CHECKPOINT),
		OBJECT(/*model*/ MODEL_NONE,                        /*pos*/ -5812,  100, -5937, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvWaterfallSoundLoop),
		OBJECT(/*model*/ MODEL_NONE,                        /*pos*/ -7430, 1500,   873, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBirdsSoundLoop),
		OBJECT(/*model*/ MODEL_NONE,                        /*pos*/   -80, 1500,  5004, /*angle*/ 0,   0, 0, /*behParam*/ 0x00010000, /*beh*/ bhvBirdsSoundLoop),
		OBJECT(/*model*/ MODEL_NONE,                        /*pos*/  7131, 1500, -2989, /*angle*/ 0,   0, 0, /*behParam*/ 0x00020000, /*beh*/ bhvBirdsSoundLoop),
		OBJECT(/*model*/ MODEL_NONE,                        /*pos*/ -7430, 1500, -5937, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvAmbientSounds),
		OBJECT(/*model*/ MODEL_CASTLE_GROUNDS_VCUTM_GRILL,  /*pos*/     0,    0,     0, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvMoatGrills),
		OBJECT(/*model*/ MODEL_NONE,                        /*pos*/     0,    0,     0, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvInvisibleObjectsUnderBridge),
		OBJECT(/*model*/ MODEL_MIST,                        /*pos*/ -4878, -787, -5690, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvWaterMist2),
		OBJECT(/*model*/ MODEL_MIST,                        /*pos*/ -4996, -787, -5548, /*angle*/ 0,   0, 0, /*behParam*/ 0x00010000, /*beh*/ bhvWaterMist2),
		OBJECT(/*model*/ MODEL_MIST,                        /*pos*/ -5114, -787, -5406, /*angle*/ 0,   0, 0, /*behParam*/ 0x00020000, /*beh*/ bhvWaterMist2),
		OBJECT(/*model*/ MODEL_MIST,                        /*pos*/ -5212, -787, -5219, /*angle*/ 0,   0, 0, /*behParam*/ 0x00030000, /*beh*/ bhvWaterMist2),
		OBJECT(/*model*/ MODEL_MIST,                        /*pos*/ -5311, -787, -5033, /*angle*/ 0,   0, 0, /*behParam*/ 0x00040000, /*beh*/ bhvWaterMist2),
		OBJECT(/*model*/ MODEL_MIST,                        /*pos*/ -5419, -787, -4895, /*angle*/ 0,   0, 0, /*behParam*/ 0x00050000, /*beh*/ bhvWaterMist2),
		OBJECT(/*model*/ MODEL_MIST,                        /*pos*/ -5527, -787, -4757, /*angle*/ 0,   0, 0, /*behParam*/ 0x00060000, /*beh*/ bhvWaterMist2),
		OBJECT(/*model*/ MODEL_MIST,                        /*pos*/ -5686, -787, -4733, /*angle*/ 0,   0, 0, /*behParam*/ 0x00070000, /*beh*/ bhvWaterMist2),
		OBJECT(/*model*/ MODEL_MIST,                        /*pos*/ -5845, -787, -4710, /*angle*/ 0,   0, 0, /*behParam*/ 0x00080000, /*beh*/ bhvWaterMist2),
		OBJECT(/*model*/ MODEL_NONE,                        /*pos*/  5223, -975,  1667, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvManyBlueFishSpawner),
		OBJECT(/*model*/ MODEL_CASTLE_GROUNDS_CANNON_GRILL, /*pos*/     0,    0,     0, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvHiddenAt120Stars),
			
			
		OBJECT(MODEL_RED_FLAME,      /*pos*/ -1333,  30+711,  1881, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
		OBJECT(MODEL_RED_FLAME,      /*pos*/ -6220,  30+468,  3458, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
		OBJECT(MODEL_RED_FLAME,      /*pos*/ -5069,  30+350,  3221, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
		OBJECT(MODEL_RED_FLAME,      /*pos*/ -2566,  30+438,  2626, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
		OBJECT(MODEL_RED_FLAME,      /*pos*/ -1900,  30+401,  2868, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
		OBJECT(MODEL_RED_FLAME,      /*pos*/  6399,  30+494, -1680, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
		OBJECT(MODEL_RED_FLAME,      /*pos*/   767,  30+498,  2598, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
		OBJECT(MODEL_RED_FLAME,      /*pos*/  1476,  30+189,  3280, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
		OBJECT(MODEL_RED_FLAME,      /*pos*/  3153,  30+206,   469, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
		OBJECT(MODEL_RED_FLAME,      /*pos*/  6178,  30+219,   167, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
		OBJECT(MODEL_RED_FLAME,      /*pos*/ -6510,  30+260,  1411, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
		OBJECT(MODEL_RED_FLAME,      /*pos*/  5457,  30+528, -3259, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
		OBJECT(MODEL_RED_FLAME,      /*pos*/  5868,  30+698, -4453, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
		OBJECT(MODEL_RED_FLAME,      /*pos*/  6408,  30+869, -5314, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
		OBJECT(MODEL_RED_FLAME,      /*pos*/ -4711,  30+342,   433, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
		OBJECT(MODEL_RED_FLAME,      /*pos*/  1132,  30+365,  1977, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
		OBJECT(MODEL_RED_FLAME,      /*pos*/ -5506,  30+364,  -661, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
		OBJECT(MODEL_RED_FLAME,      /*pos*/ -6269,  30+402, -2145, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
		OBJECT(MODEL_RED_FLAME,      /*pos*/ -5600,  30+440, -2627, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
		OBJECT(MODEL_RED_FLAME,      /*pos*/  1919,  30+268,  1157, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
		OBJECT(MODEL_RED_FLAME,      /*pos*/ -5957,  30+517, -3447, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
		OBJECT(MODEL_RED_FLAME,      /*pos*/ -2021,  30+633,  1468, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
		OBJECT(MODEL_RED_FLAME,      /*pos*/  -109,  30+613,  3008, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
		OBJECT(MODEL_RED_FLAME,      /*pos*/  5774,  30+413, -1114, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
		OBJECT(MODEL_RED_FLAME,      /*pos*/  5954,  30+526, -2846, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
		OBJECT(MODEL_RED_FLAME,      /*pos*/ -5204,  30+296,   811, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
		OBJECT(MODEL_CASTLE_METAL_DOOR,  /*pos*/  3292, -511, -2931, /*yaw*/ 0, 225, 0, /*behParam2*/ 0x00020000, bhvDoorWarp),
		OBJECT(MODEL_CASTLE_METAL_DOOR, /*pos*/   -76,  803, -3155, /*yaw*/   0, 0, 0, /*behParam2*/ 0, bhvDoorWarp),
		OBJECT(MODEL_CASTLE_METAL_DOOR, /*pos*/    77,  803, -3155, /*yaw*/ 0, 180, 0, /*behParam2*/ 0x00010000, bhvDoorWarp),
	
		OBJECT(MODEL_MIPS, /*pos*/    -4197,  -1214, -5816, /*yaw*/ 0, 0, 0, /*behParam2*/ 0, bhvMips),
		OBJECT(MODEL_TOAD, /*pos*/    -17,  3584, -2937, /*yaw*/ 0, 0, 0, /*behParam2*/ 0x53000000, bhvToadMessage),
		
		// OBJECT(MODEL_BOO, /*pos*/    -5565,  291, 2329, /*yaw*/ 0, 0, 0, /*behParam2*/ 0, bhvBoo),
		
		WARP_NODE(/*id*/ 0x72, /*destLevel*/ LEVEL_WF, /*destArea*/ 0x01, /*destNode*/ 0xa, /*flags*/ WARP_NO_CHECKPOINT),
		OBJECT(0, /*pos*/    -1328,  260, 4664, /*yaw*/ 0, 0, 0, /*behParam2*/ 0x00720000, bhvWarpPipe),
	
		TERRAIN(castle_grounds_area_1_collision),
		MACRO_OBJECTS(castle_grounds_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_GRASS),
		TERRAIN_TYPE(TERRAIN_STONE),
	END_AREA(),

	FREE_LEVEL_POOL(),
    MARIO_POS(/*area*/ 1, /*yaw*/ 180, /*pos*/ -1328, 260, 4664),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
