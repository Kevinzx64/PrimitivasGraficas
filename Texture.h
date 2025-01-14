#ifndef TEXTURE_CLASS_H 
#define TEXTURE_CLASS_H 
#include<glad/glad.h> 
#include<stb/stb_image.h> 
#include"shaderClass.h" 
class Texture
{
public:
	GLuint ID;
	GLenum type;
	Texture(const char* image, GLenum texType, GLenum slot, GLenum format, GLenum
		pixelType);
	// Assigns a texture unit to a texture || Asigna una unidad de textura a una textura
	void texUnit(Shader& shader, const char* uniform, GLuint unit);
	// Binds a texture || Une una textura
	void Bind();
	// Unbinds a texture || Desenlaza una textura
	void Unbind();
	// Deletes a texture  || Elimina una textura
	void Delete();
};
#endif
