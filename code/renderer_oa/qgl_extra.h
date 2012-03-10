/*
===========================================================================
Copyright (C) 1999-2005 Id Software, Inc.

This file is part of Quake III Arena source code.

Quake III Arena source code is free software; you can redistribute it
and/or modify it under the terms of the GNU General Public License as
published by the Free Software Foundation; either version 2 of the License,
or (at your option) any later version.

Quake III Arena source code is distributed in the hope that it will be
useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Quake III Arena source code; if not, write to the Free Software
Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
===========================================================================
*/
/*
** QGL.H
*/

#ifndef __QGL_EXTRA_H__
#define __QGL_EXTRA_H__

#ifdef USE_LOCAL_HEADERS
#	include "SDL_opengl.h"
#else
#	include <SDL_opengl.h>
#endif

// GL_ARB_shader_objects
extern GLvoid (APIENTRYP qglDeleteObjectARB) (GLhandleARB obj);
extern GLhandleARB (APIENTRYP qglGetHandleARB) (GLenum pname);
extern GLvoid (APIENTRYP qglDetachObjectARB) (GLhandleARB containerObj, GLhandleARB attachedObj);
extern GLhandleARB (APIENTRYP qglCreateShaderObjectARB) (GLenum shaderType);
extern GLvoid (APIENTRYP qglShaderSourceARB) (GLhandleARB shaderObj, GLsizei count, const GLcharARB **string,
					      const GLint *length);
extern GLvoid (APIENTRYP qglCompileShaderARB) (GLhandleARB shaderObj);
extern GLhandleARB (APIENTRYP qglCreateProgramObjectARB) (void);
extern GLvoid (APIENTRYP qglAttachObjectARB) (GLhandleARB containerObj, GLhandleARB obj);
extern GLvoid (APIENTRYP qglLinkProgramARB) (GLhandleARB programObj);
extern GLvoid (APIENTRYP qglUseProgramObjectARB) (GLhandleARB programObj);
extern GLvoid (APIENTRYP qglValidateProgramARB) (GLhandleARB programObj);
extern GLvoid (APIENTRYP qglUniform1fARB) (GLint location, GLfloat v0);
extern GLvoid (APIENTRYP qglUniform2fARB) (GLint location, GLfloat v0, GLfloat v1);
extern GLvoid (APIENTRYP qglUniform3fARB) (GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
extern GLvoid (APIENTRYP qglUniform4fARB) (GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
extern GLvoid (APIENTRYP qglUniform1iARB) (GLint location, GLint v0);
extern GLvoid (APIENTRYP qglUniform2iARB) (GLint location, GLint v0, GLint v1);
extern GLvoid (APIENTRYP qglUniform3iARB) (GLint location, GLint v0, GLint v1, GLint v2);
extern GLvoid (APIENTRYP qglUniform4iARB) (GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
extern GLvoid (APIENTRYP qglUniform1fvARB) (GLint location, GLsizei count, const GLfloat *value);
extern GLvoid (APIENTRYP qglUniform2fvARB) (GLint location, GLsizei count, const GLfloat *value);
extern GLvoid (APIENTRYP qglUniform3fvARB) (GLint location, GLsizei count, const GLfloat *value);
extern GLvoid (APIENTRYP qglUniform4fvARB) (GLint location, GLsizei count, const GLfloat *value);
extern GLvoid (APIENTRYP qglUniform1ivARB) (GLint location, GLsizei count, const GLint *value);
extern GLvoid (APIENTRYP qglUniform2ivARB) (GLint location, GLsizei count, const GLint *value);
extern GLvoid (APIENTRYP qglUniform3ivARB) (GLint location, GLsizei count, const GLint *value);
extern GLvoid (APIENTRYP qglUniform4ivARB) (GLint location, GLsizei count, const GLint *value);
extern GLvoid (APIENTRYP qglUniformMatrix2fvARB) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern GLvoid (APIENTRYP qglUniformMatrix3fvARB) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern GLvoid (APIENTRYP qglUniformMatrix4fvARB) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern GLvoid (APIENTRYP qglGetObjectParameterfvARB) (GLhandleARB obj, GLenum pname, GLfloat *params);
extern GLvoid (APIENTRYP qglGetObjectParameterivARB) (GLhandleARB obj, GLenum pname, GLint *params);
extern GLvoid (APIENTRYP qglGetInfoLogARB) (GLhandleARB obj, GLsizei maxLength, GLsizei *length, GLcharARB *infoLog);
extern GLvoid (APIENTRYP qglGetAttachedObjectsARB) (GLhandleARB containerObj, GLsizei maxCount, GLsizei *count,
						    GLhandleARB *obj);
extern GLint (APIENTRYP qglGetUniformLocationARB) (GLhandleARB programObj, const GLcharARB *name);
extern GLvoid (APIENTRYP qglGetActiveUniformARB) (GLhandleARB programObj, GLuint index, GLsizei maxLength,
						  GLsizei *length, GLint *size, GLenum *type, GLcharARB *name);
extern GLvoid (APIENTRYP qglGetUniformfvARB) (GLhandleARB programObj, GLint location, GLfloat *params);
extern GLvoid (APIENTRYP qglGetUniformivARB) (GLhandleARB programObj, GLint location, GLint *params);
extern GLvoid (APIENTRYP qglGetShaderSourceARB) (GLhandleARB obj, GLsizei maxLength, GLsizei *length,
						 GLcharARB *source);
extern GLvoid (APIENTRYP qglVertexAttrib1fARB) (GLuint index, GLfloat v0);
extern GLvoid (APIENTRYP qglVertexAttrib1sARB) (GLuint index, GLshort v0);
extern GLvoid (APIENTRYP qglVertexAttrib1dARB) (GLuint index, GLdouble v0);
extern GLvoid (APIENTRYP qglVertexAttrib2fARB) (GLuint index, GLfloat v0, GLfloat v1);
extern GLvoid (APIENTRYP qglVertexAttrib2sARB) (GLuint index, GLshort v0, GLshort v1);
extern GLvoid (APIENTRYP qglVertexAttrib2dARB) (GLuint index, GLdouble v0, GLdouble v1);
extern GLvoid (APIENTRYP qglVertexAttrib3fARB) (GLuint index, GLfloat v0, GLfloat v1, GLfloat v2);
extern GLvoid (APIENTRYP qglVertexAttrib3sARB) (GLuint index, GLshort v0, GLshort v1, GLshort v2);
extern GLvoid (APIENTRYP qglVertexAttrib3dARB) (GLuint index, GLdouble v0, GLdouble v1, GLdouble v2);
extern GLvoid (APIENTRYP qglVertexAttrib4fARB) (GLuint index, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
extern GLvoid (APIENTRYP qglVertexAttrib4sARB) (GLuint index, GLshort v0, GLshort v1, GLshort v2, GLshort v3);
extern GLvoid (APIENTRYP qglVertexAttrib4dARB) (GLuint index, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3);
extern GLvoid (APIENTRYP qglVertexAttrib4NubARB) (GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w);
extern GLvoid (APIENTRYP qglVertexAttrib1fvARB) (GLuint index, GLfloat *v);
extern GLvoid (APIENTRYP qglVertexAttrib1svARB) (GLuint index, GLshort *v);
extern GLvoid (APIENTRYP qglVertexAttrib1dvARB) (GLuint index, GLdouble *v);
extern GLvoid (APIENTRYP qglVertexAttrib2fvARB) (GLuint index, GLfloat *v);
extern GLvoid (APIENTRYP qglVertexAttrib2svARB) (GLuint index, GLshort *v);
extern GLvoid (APIENTRYP qglVertexAttrib2dvARB) (GLuint index, GLdouble *v);
extern GLvoid (APIENTRYP qglVertexAttrib3fvARB) (GLuint index, GLfloat *v);
extern GLvoid (APIENTRYP qglVertexAttrib3svARB) (GLuint index, GLshort *v);
extern GLvoid (APIENTRYP qglVertexAttrib3dvARB) (GLuint index, GLdouble *v);
extern GLvoid (APIENTRYP qglVertexAttrib4fvARB) (GLuint index, GLfloat *v);
extern GLvoid (APIENTRYP qglVertexAttrib4svARB) (GLuint index, GLshort *v);
extern GLvoid (APIENTRYP qglVertexAttrib4dvARB) (GLuint index, GLdouble *v);
extern GLvoid (APIENTRYP qglVertexAttrib4ivARB) (GLuint index, GLint *v);
extern GLvoid (APIENTRYP qglVertexAttrib4bvARB) (GLuint index, GLbyte *v);
extern GLvoid (APIENTRYP qglVertexAttrib4ubvARB) (GLuint index, GLubyte *v);
extern GLvoid (APIENTRYP qglVertexAttrib4usvARB) (GLuint index, GLushort *v);
extern GLvoid (APIENTRYP qglVertexAttrib4uivARB) (GLuint index, GLuint *v);
extern GLvoid (APIENTRYP qglVertexAttrib4NbvARB) (GLuint index, const GLbyte *v);
extern GLvoid (APIENTRYP qglVertexAttrib4NsvARB) (GLuint index, const GLshort *v);
extern GLvoid (APIENTRYP qglVertexAttrib4NivARB) (GLuint index, const GLint *v);
extern GLvoid (APIENTRYP qglVertexAttrib4NubvARB) (GLuint index, const GLubyte *v);
extern GLvoid (APIENTRYP qglVertexAttrib4NusvARB) (GLuint index, const GLushort *v);
extern GLvoid (APIENTRYP qglVertexAttrib4NuivARB) (GLuint index, const GLuint *v);
extern GLvoid (APIENTRYP qglVertexAttribPointerARB) (GLuint index, GLint size, GLenum type, GLboolean normalized,
						     GLsizei stride, const GLvoid *pointer);
extern GLvoid (APIENTRYP qglEnableVertexAttribArrayARB) (GLuint index);
extern GLvoid (APIENTRYP qglDisableVertexAttribArrayARB) (GLuint index);
extern GLvoid (APIENTRYP qglBindAttribLocationARB) (GLhandleARB programObj, GLuint index, const GLcharARB *name);
extern GLvoid (APIENTRYP qglGetActiveAttribARB) (GLhandleARB programObj, GLuint index, GLsizei maxLength,
						 GLsizei *length, GLint *size, GLenum *type, GLcharARB *name);
extern GLint (APIENTRYP qglGetAttribLocationARB) (GLhandleARB programObj, const GLcharARB *name);
extern GLvoid (APIENTRYP qglGetVertexAttribdvARB) (GLuint index, GLenum pname, GLdouble *params);
extern GLvoid (APIENTRYP qglGetVertexAttribfvARB) (GLuint index, GLenum pname, GLfloat *params);
extern GLvoid (APIENTRYP qglGetVertexAttribivARB) (GLuint index, GLenum pname, GLint *params);
extern GLvoid (APIENTRYP qglGetVertexAttribPointervARB) (GLuint index, GLenum pname, GLvoid **pointer);

#endif
