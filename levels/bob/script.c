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
#include "levels/bob/header.h"

const LevelScript level_bob_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x07, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd), 
	LOAD_MIO0_TEXTURE(0x09, _generic_mio0SegmentRomStart, _generic_mio0SegmentRomEnd), 
	LOAD_MIO0(0x0A, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd), 
	LOAD_MIO0(0x05, _group11_mio0SegmentRomStart, _group11_mio0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group11_geoSegmentRomStart, _group11_geoSegmentRomEnd), 
	LOAD_MIO0(0x06, _group14_mio0SegmentRomStart, _group14_mio0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	LOAD_MIO0(0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_12), 
	JUMP_LINK(script_func_global_15), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BUBBLY_TREE, bubbly_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_CHAIN_CHOMP_GATE, bob_geo_000440), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_SEESAW_PLATFORM, bob_geo_000458), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BARS_GRILLS, bob_geo_000470), 

	AREA(1, bob_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 0x01, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(241, LEVEL_CASTLE, 0x01, 100, WARP_NO_CHECKPOINT),
		WARP_NODE(6, LEVEL_LLL, 0x01, 13, WARP_NO_CHECKPOINT),
		WARP_NODE(4, LEVEL_JRB, 0x01, 1, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_AMP, -2700, 328, -1505, 0, 0, 0, 0x000a0000, bhvCirclingAmp),
		OBJECT(MODEL_AMP, -3000, 181, -743, 0, 0, 0, 0x000a0000, bhvCirclingAmp),
		OBJECT(MODEL_AMP, -1628, 181, -1660, 0, 0, 0, 0x000a0000, bhvCirclingAmp),
		OBJECT(MODEL_AMP, -1141, 181, -2639, 0, 0, 0, 0x000a0000, bhvCirclingAmp),
		OBJECT(MODEL_AMP, -1824, 181, -269, 0, 0, 0, 0x000a0000, bhvCirclingAmp),
		OBJECT(MODEL_BLUE_COIN, 2369, 2327, -3799, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 2489, 2327, -4729, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 3085, 2327, -3916, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 3459, 2327, -4959, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 3772, 2327, -4428, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN_SWITCH, 2945, 2207, -4374, 0, 0, 0, 0x0, bhvBlueCoinSwitch),
		OBJECT(MODEL_BOBOMB_BUDDY, 3493, 1259, 2452, 0, 0, 0, 0x0070, bhvBobombBuddy),
		OBJECT(MODEL_BOBOMB_BUDDY, 485, 1037, 964, 0, 0, 0, 0x008a, bhvBobombBuddy),
		OBJECT(0xca, -1312, 2487, 994, 0, 0, 0, 0x00000000, bhvCheckerboardPlatformSub),
		OBJECT(MODEL_CHECKERBOARD_PLATFORM, 2842, 1207, 2106, 0, -36, 0, 0x00000000, bhvCheckerboardPlatformSub),
		OBJECT(MODEL_CHECKERBOARD_PLATFORM, 5152, 1275, 528, 0, -71, 0, 0x00000000, bhvCheckerboardPlatformSub),
		OBJECT(MODEL_NONE, -657, 2024, -4084, 0, 55, 0, 0x0, bhvCoinFormation),
		OBJECT(MODEL_NONE, 1388, 809, -3926, 0, 55, 0, 0x00110000, bhvCoinFormation),
		OBJECT(MODEL_EXCLAMATION_BOX, -1355, 1986, -2076, 0, 0, 0, 0x00060000, bhvExclamationBox),
		OBJECT(MODEL_EXCLAMATION_BOX, -309, 1437, -5263, 0, 0, 0, 0x00060000, bhvExclamationBox),
		OBJECT(MODEL_EXCLAMATION_BOX, 4126, 1679, 2053, 0, 0, 0, 0x00060000, bhvExclamationBox),
		OBJECT(MODEL_EXCLAMATION_BOX, -2627, 2719, -4227, 0, 0, 0, 0x00020000, bhvExclamationBox),
		OBJECT(MODEL_NONE, 5276, -13, -3114, 0, 0, 0, 0x05000000, bhvFewBlueFishSpawner),
		OBJECT(MODEL_NONE, 6498, 1478, 552, 0, 90, 0, 0, bhvOpenableGrill),
		OBJECT(MODEL_NONE, -657, 1444, -6629, 0, 55, 0, 0x0, bhvGoombaTripletSpawner),
		OBJECT(MODEL_NONE, 645, 1167, -1280, 0, 55, 0, 0x0, bhvGoombaTripletSpawner),
		OBJECT(MODEL_ENEMY_LAKITU, 1037, 2477, 1381, 0, 55, 0, 0x0, bhvEnemyLakitu),
		OBJECT(MODEL_KOOPA_WITH_SHELL, 3480, 561, -3083, 0, 55, 0, 0x00000000, bhvKoopa),
		OBJECT(MODEL_NONE, -359, 902, -5808, 0, 0, 0, 0, bhvKoopaRaceEndpoint),
		OBJECT(MODEL_KOOPA_WITH_SHELL, 1350, 566, -5631, 0, 55, 0, 0x03020000, bhvKoopa),
		OBJECT(MODEL_RED_COIN, 4239, 652, -4672, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 2130, 1953, -3362, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -2245, 1242, -6144, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 3808, 1378, 2192, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -1009, 68, -4251, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 1446, 574, -2653, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 1274, 1318, 1110, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -1562, 351, 331, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(MODEL_NONE, -3000, 33, -743, 0, 0, 0, 0x000a0000, bhvHiddenStarTrigger),
		OBJECT(MODEL_NONE, -1628, 33, -1660, 0, 0, 0, 0x000a0000, bhvHiddenStarTrigger),
		OBJECT(MODEL_NONE, -1141, 33, -2639, 0, 0, 0, 0x000a0000, bhvHiddenStarTrigger),
		OBJECT(MODEL_NONE, -1824, 33, -269, 0, 0, 0, 0x000a0000, bhvHiddenStarTrigger),
		OBJECT(MODEL_NONE, -2700, 179, -1505, 0, 0, 0, 0x000a0000, bhvHiddenStarTrigger),
		OBJECT(MODEL_NONE, -416, 1383, 282, 0, 0, 0, 0, bhvHiddenStar),
		OBJECT(MODEL_STAR, -1362, 2937, 1029, 0, 0, 0, 0x01000000, bhvStar),
		OBJECT(MODEL_STAR, -3362, 1180, 107, 0, 0, 0, 0x02000000, bhvStar),
		OBJECT(MODEL_NONE, 341, 1501, 190, 0, 0, 0, 0x04000000, bhvHiddenRedCoinStar),
		OBJECT(MODEL_STAR, 6766, 1054, -2004, 0, 0, 0, 0x05000000, bhvStar),
		OBJECT(MODEL_NONE, 4961, 1781, -1093, 0, 0, 0, 0x0a040000, bhvInstantActiveWarp),
		OBJECT(MODEL_PURPLE_SWITCH, 5221, 1734, -1667, 0, 0, 0, 0x0a040000, bhvFloorSwitchGrills),
		OBJECT(MODEL_NONE, 6707, 1491, 546, 0, 0, 0, 0x00060000, bhvInstantActiveWarp),
		OBJECT(MODEL_NONE, 344, 1277, 211, 0, 0, 0, 0x000a0000, bhvInstantActiveWarp),
		TERRAIN(bob_area_1_collision),
		MACRO_OBJECTS(bob_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_GRASS),
		TERRAIN_TYPE(TERRAIN_GRASS),
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(1, 0, 0, 0, 0),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
