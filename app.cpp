#include "app.h"

#include "imgui.h"

namespace InputViewer {
	void render() {
		ImGui::Begin("Coordinate Values");
		ImGui::Text("Hello world!");
		ImGui::End();

		ImGui::Begin("Face Buttons");

		ImGui::End();

		ImGui::Begin("Joystick Visualization");

		ImGui::End();

		ImGui::Begin("Configuration Settings");
		if(ImGui::Button("Select configuration file"))
			ImGui::OpenPopup("file_select_popup");
        if (ImGui::BeginPopup("file_select_popup", ImGuiWindowFlags_MenuBar))
        {
			if(ImGui::MenuItem("File X")) {}
            ImGui::EndPopup();
        }
		if(ImGui::Button("Save current configuration")) {

		}
		ImGui::End();

		ImGui::Begin("Threshold Settings");
		
		ImGui::End();
	}
}
