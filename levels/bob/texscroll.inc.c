void scroll_bob_dl_1_mesh_vtx_20() {
	int i = 0;
	int count = 12;
	int width = 32 * 0x20;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(bob_dl_1_mesh_vtx_20);

	deltaY = (int)(-0.9799997806549072 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;

}
void scroll_bob() {
	scroll_bob_dl_1_mesh_vtx_20();
}
