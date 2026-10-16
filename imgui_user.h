// AETHER-specific extensions to Dear ImGui, included at the end of imgui.h
// via IMGUI_INCLUDE_IMGUI_USER_H (see imconfig.h)
#pragma once

// Forward declarations
namespace PHX
{
	struct TextureHandle;
}

namespace ImGui
{
	// Extension to display a PHX texture using the same, usual ImGui::Image() API
	IMGUI_API void Image(PHX::TextureHandle texture, float width, float height);

	// Same as above, but sized as a scale factor applied to the texture's
	// native resolution
	IMGUI_API void Image(PHX::TextureHandle texture, float scale = 1.0f);
}
