#include "VBO.h"

//Constructor
VBO::VBO(std::vector<Vertex>& vertices) {
	glGenBuffers(1, &ID);
	glBindBuffer(GL_ARRAY_BUFFER, ID);
	glBufferData(GL_ARRAY_BUFFER, vertices.size() * sizeof(Vertex), vertices.data(), GL_STATIC_DRAW);
}

//Binds vertex buffer
void VBO::Bind() {
	glBindBuffer(GL_ARRAY_BUFFER, ID);
}

//Unbinds vertex buffer
void VBO::Unbind() {
	glBindBuffer(GL_ARRAY_BUFFER, 0);
}

//Deletes vertex buffer
void VBO::Delete() {
	glDeleteBuffers(1, &ID);
}