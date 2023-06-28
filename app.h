#pragma once

namespace InputViewer {
	struct BoxInput {
		float j_x, j_y; // Main Joystick
		float c_x, c_y; // C-Stick inputs
		float a, b, x, y; // Face buttons
		float l, r, z; // Shoulder buttons
	};
	void render();
}
