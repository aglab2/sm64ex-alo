void scroll_castle_grounds_dl_ow1_mesh_vtx_17() {
	int i = 0;
	int count = 57;
	int width = 32 * 0x20;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(castle_grounds_dl_ow1_mesh_vtx_17);

	deltaY = (int)(-0.25999999046325684 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;

}
void scroll_castle_grounds() {
	scroll_castle_grounds_dl_ow1_mesh_vtx_17();
}
