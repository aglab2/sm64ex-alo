#include "src/game/envfx_snow.h"

const GeoLayout bob_area_1_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, bob_dl_1_001_mesh),
		GEO_CULLING_MARIO_POS(-15000, 1500, -15000, 15000, -15000, -2550),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_1_002_mesh),
		GEO_CLOSE_NODE(),
		GEO_CULLING_MARIO_POS(-15000, 3000, -15000, 15000, -15000, 15000),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_1_003_mesh),
		GEO_CLOSE_NODE(),
		GEO_CULLING_MARIO_POS(-15000, 3000, -15000, 15000, -15000, 15000),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_1_004_mesh),
		GEO_CLOSE_NODE(),
		GEO_CULLING_MARIO_POS(-15000, 1500, -15000, 15000, -15000, -2550),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_1_005_mesh),
		GEO_CLOSE_NODE(),
		GEO_CULLING_MARIO_POS(255, 15000, -15000, 15000, -15000, 15000),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_1_007_mesh),
		GEO_CLOSE_NODE(),
		GEO_CULLING_MARIO_POS(255, 15000, -15000, 15000, -15000, 15000),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, bob_dl_1_008_mesh),
		GEO_CLOSE_NODE(),
		GEO_CULLING_MARIO_POS(255, 15000, -15000, 15000, -15000, 15000),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, bob_dl_1_009_mesh),
		GEO_CLOSE_NODE(),
		GEO_CULLING_MARIO_POS(-15000, 15000, -15000, 15000, -3000, 15000),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_1_010_mesh),
		GEO_CLOSE_NODE(),
		GEO_CULLING_MARIO_POS(255, 15000, -15000, 15000, -15000, 15000),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_1_011_mesh),
		GEO_CLOSE_NODE(),
		GEO_CULLING_MARIO_POS(525, 15000, -15000, 15000, -15000, 0),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_1_012_mesh),
		GEO_CLOSE_NODE(),
		GEO_CULLING_MARIO_POS(525, 15000, -15000, 15000, -15000, 0),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_1_013_mesh),
		GEO_CLOSE_NODE(),
		GEO_CULLING_MARIO_POS(-15000, 2100, -15000, 15000, -15000, -1950),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_1_014_mesh),
		GEO_CLOSE_NODE(),
		GEO_CULLING_MARIO_POS(0, 15000, -15000, 15000, -15000, 15000),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_ALPHA, bob_dl_1_015_mesh),
		GEO_CLOSE_NODE(),
		GEO_CULLING_MARIO_POS(-15000, 600, -15000, 15000, -4500, 15000),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_1_016_mesh),
		GEO_CLOSE_NODE(),
		GEO_CULLING_MARIO_POS(-15000, 2100, -15000, 15000, -3750, 15000),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_1_017_mesh),
		GEO_CLOSE_NODE(),
		GEO_CULLING_MARIO_POS(255, 15000, -15000, 15000, -15000, 15000),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_1_018_mesh),
		GEO_CLOSE_NODE(),
		GEO_CULLING_MARIO_POS(-15000, 1500, -15000, 15000, -15000, -1200),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE_DECAL, bob_dl_1_019_mesh),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_1_020_mesh),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_1_021_mesh),
		GEO_CULLING_MARIO_POS(-15000, 1500, -15000, 15000, -15000, -1500),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_1_022_mesh),
		GEO_CLOSE_NODE(),
		GEO_CULLING_MARIO_POS(-15000, 1500, -15000, 15000, -15000, -2550),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_1_023_mesh),
		GEO_CLOSE_NODE(),
		GEO_CULLING_MARIO_POS(-15000, 1500, -15000, 15000, -15000, -2550),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_1_024_mesh),
		GEO_CLOSE_NODE(),
		GEO_CULLING_MARIO_POS(255, 15000, -15000, 15000, -15000, 0),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_1_025_mesh),
		GEO_CLOSE_NODE(),
		GEO_CULLING_MARIO_POS(525, 15000, -15000, 15000, -15000, 0),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_1_026_mesh),
		GEO_CLOSE_NODE(),
		GEO_CULLING_MARIO_POS(-15000, 15000, -15000, 15000, -900, 15000),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_1_027_mesh),
		GEO_CLOSE_NODE(),
		GEO_CULLING_MARIO_POS(-15000, 2100, -15000, 15000, -15000, 15000),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_1_028_mesh),
		GEO_CLOSE_NODE(),
		GEO_CULLING_MARIO_POS(-15000, 2100, -15000, 15000, -3750, 15000),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_1_029_mesh),
		GEO_CLOSE_NODE(),
		GEO_CULLING_MARIO_POS(255, 15000, -15000, 15000, -15000, 15000),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_1_030_mesh),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_1_031_mesh),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_1_032_mesh),
		GEO_CULLING_MARIO_POS(255, 15000, -15000, 15000, -15000, 15000),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, bob_dl_1_033_mesh),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, bob_dl_1_034_mesh),
		GEO_CULLING_MARIO_POS(255, 15000, -15000, 15000, -15000, 15000),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, bob_dl_1_035_mesh),
		GEO_CLOSE_NODE(),
		GEO_CULLING_MARIO_POS(255, 15000, -15000, 15000, -15000, 15000),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_1_036_mesh),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_1_037_mesh),
		GEO_CULLING_MARIO_POS(-15000, 3000, -15000, 15000, -15000, 15000),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_1_038_mesh),
		GEO_CLOSE_NODE(),
		GEO_CULLING_MARIO_POS(255, 15000, -15000, 15000, -1110, 15000),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_1_039_mesh),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout bob_area_1[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(0),
		GEO_OPEN_NODE(),
			GEO_NODE_ORTHO(100.0000),
			GEO_OPEN_NODE(),
				GEO_BACKGROUND(BACKGROUND_OCEAN_SKY, geo_skybox_main),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 100, 30000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(CAMERA_MODE_8_DIRECTIONS, 0, 0, 0, 0, -15, 0, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, bob_area_1_geo),
					GEO_RENDER_OBJ(),
               		GEO_ASM(0x4001, geo_movtex_draw_water_regions),
					GEO_ASM(ENVFX_MODE_NONE, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_OPAQUE_DECAL, bob_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_ALPHA, bob_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, bob_dl_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
