#pragma once

#include "Running/Renderer/Shader.h"

namespace Running
{
	class OpenGlShader : public Shader
	{
	public:
		OpenGlShader(const std::string& vertexSrc, const std::string& fragmentSrc);
		virtual ~OpenGlShader();

		virtual void Bind() const override;
		virtual void Unbind() const override;

	private:
		// uniquely identifies the object inside OpenGL
		uint32_t _rendererId;
	};
}