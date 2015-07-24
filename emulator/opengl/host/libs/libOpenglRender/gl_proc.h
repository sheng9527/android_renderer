/*
* Copyright (C) 2011 The Android Open Source Project
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/
#ifndef _GLES_PROC_H
#define _GLES_PROC_H

#include <GLES/gl.h>
#define GL_GLEXT_PROTOTYPES
#include <GLES/glext.h>

#if DEFINE_GLCHAR
typedef char GLchar;
#endif

typedef void (GL_APIENTRY *glAlphaFunc_t) (GLenum, GLclampf);
typedef void (GL_APIENTRY *glClearColor_t) (GLclampf, GLclampf, GLclampf, GLclampf);
typedef void (GL_APIENTRY *glClearDepthf_t) (GLclampf);
typedef void (GL_APIENTRY *glClipPlanef_t) (GLenum, const GLfloat*);
typedef void (GL_APIENTRY *glColor4f_t) (GLfloat, GLfloat, GLfloat, GLfloat);
typedef void (GL_APIENTRY *glDepthRangef_t) (GLclampf, GLclampf);
typedef void (GL_APIENTRY *glFogf_t) (GLenum, GLfloat);
typedef void (GL_APIENTRY *glFogfv_t) (GLenum, const GLfloat*);
typedef void (GL_APIENTRY *glFrustumf_t) (GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat);
typedef void (GL_APIENTRY *glGetClipPlanef_t) (GLenum, GLfloat);
typedef void (GL_APIENTRY *glGetFloatv_t) (GLenum, GLfloat*);
typedef void (GL_APIENTRY *glGetLightfv_t) (GLenum, GLenum, GLfloat*);
typedef void (GL_APIENTRY *glGetMaterialfv_t) (GLenum, GLenum, GLfloat*);
typedef void (GL_APIENTRY *glGetTexEnvfv_t) (GLenum, GLenum, GLfloat*);
typedef void (GL_APIENTRY *glGetTexParameterfv_t) (GLenum, GLenum, GLfloat*);
typedef void (GL_APIENTRY *glLightModelf_t) (GLenum, GLfloat);
typedef void (GL_APIENTRY *glLightModelfv_t) (GLenum, const GLfloat*);
typedef void (GL_APIENTRY *glLightf_t) (GLenum, GLenum, GLfloat);
typedef void (GL_APIENTRY *glLightfv_t) (GLenum, GLenum, const GLfloat*);
typedef void (GL_APIENTRY *glLineWidth_t) (GLfloat);
typedef void (GL_APIENTRY *glLoadMatrixf_t) (const GLfloat*);
typedef void (GL_APIENTRY *glMaterialf_t) (GLenum, GLenum, GLfloat);
typedef void (GL_APIENTRY *glMaterialfv_t) (GLenum, GLenum, const GLfloat*);
typedef void (GL_APIENTRY *glMultMatrixf_t) (const GLfloat*);
typedef void (GL_APIENTRY *glMultiTexCoord4f_t) (GLenum, GLfloat, GLfloat, GLfloat, GLfloat);
typedef void (GL_APIENTRY *glNormal3f_t) (GLfloat, GLfloat, GLfloat);
typedef void (GL_APIENTRY *glOrthof_t) (GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat);
typedef void (GL_APIENTRY *glPointParameterf_t) (GLenum, GLfloat);
typedef void (GL_APIENTRY *glPointParameterfv_t) (GLenum, const GLfloat*);
typedef void (GL_APIENTRY *glPointSize_t) (GLfloat);
typedef void (GL_APIENTRY *glPolygonOffset_t) (GLfloat, GLfloat);
typedef void (GL_APIENTRY *glRotatef_t) (GLfloat, GLfloat, GLfloat, GLfloat);
typedef void (GL_APIENTRY *glScalef_t) (GLfloat, GLfloat, GLfloat);
typedef void (GL_APIENTRY *glTexEnvf_t) (GLenum, GLenum, GLfloat);
typedef void (GL_APIENTRY *glTexEnvfv_t) (GLenum, GLenum, const GLfloat*);
typedef void (GL_APIENTRY *glTexParameterf_t) (GLenum, GLenum, GLfloat);
typedef void (GL_APIENTRY *glTexParameterfv_t) (GLenum, GLenum, const GLfloat*);
typedef void (GL_APIENTRY *glTranslatef_t) (GLfloat, GLfloat, GLfloat);
typedef void (GL_APIENTRY *glActiveTexture_t) (GLenum);
typedef void (GL_APIENTRY *glAlphaFuncx_t) (GLenum, GLclampx);
typedef void (GL_APIENTRY *glBindBuffer_t) (GLenum, GLuint);
typedef void (GL_APIENTRY *glBindTexture_t) (GLenum, GLuint);
typedef void (GL_APIENTRY *glBlendFunc_t) (GLenum, GLenum);
typedef void (GL_APIENTRY *glBufferData_t) (GLenum, GLsizeiptr, const GLvoid*, GLenum);
typedef void (GL_APIENTRY *glBufferSubData_t) (GLenum, GLintptr, GLsizeiptr, const GLvoid*);
typedef void (GL_APIENTRY *glClear_t) (GLbitfield);
typedef void (GL_APIENTRY *glClearColorx_t) (GLclampx, GLclampx, GLclampx, GLclampx);
typedef void (GL_APIENTRY *glClearDepthx_t) (GLclampx);
typedef void (GL_APIENTRY *glClearStencil_t) (GLint);
typedef void (GL_APIENTRY *glClientActiveTexture_t) (GLenum);
typedef void (GL_APIENTRY *glClipPlanex_t) (GLenum, const GLfixed*);
typedef void (GL_APIENTRY *glColor4ub_t) (GLubyte, GLubyte, GLubyte, GLubyte);
typedef void (GL_APIENTRY *glColor4x_t) (GLfixed, GLfixed, GLfixed, GLfixed);
typedef void (GL_APIENTRY *glColorMask_t) (GLboolean, GLboolean, GLboolean, GLboolean);
typedef void (GL_APIENTRY *glColorPointer_t) (GLint, GLenum, GLsizei, const GLvoid*);
typedef void (GL_APIENTRY *glCompressedTexImage2D_t) (GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const GLvoid*);
typedef void (GL_APIENTRY *glCompressedTexSubImage2D_t) (GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid*);
typedef void (GL_APIENTRY *glCopyTexImage2D_t) (GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint);
typedef void (GL_APIENTRY *glCopyTexSubImage2D_t) (GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei);
typedef void (GL_APIENTRY *glCullFace_t) (GLenum);
typedef void (GL_APIENTRY *glDeleteBuffers_t) (GLsizei, const GLuint*);
typedef void (GL_APIENTRY *glDeleteTextures_t) (GLsizei, const GLuint*);
typedef void (GL_APIENTRY *glDepthFunc_t) (GLenum);
typedef void (GL_APIENTRY *glDepthMask_t) (GLboolean);
typedef void (GL_APIENTRY *glDepthRangex_t) (GLclampx, GLclampx);
typedef void (GL_APIENTRY *glDisable_t) (GLenum);
typedef void (GL_APIENTRY *glDisableClientState_t) (GLenum);
typedef void (GL_APIENTRY *glDrawArrays_t) (GLenum, GLint, GLsizei);
typedef void (GL_APIENTRY *glDrawElements_t) (GLenum, GLsizei, GLenum, const GLvoid*);
typedef void (GL_APIENTRY *glEnable_t) (GLenum);
typedef void (GL_APIENTRY *glEnableClientState_t) (GLenum);
typedef void (GL_APIENTRY *glFinish_t) ();
typedef void (GL_APIENTRY *glFlush_t) ();
typedef void (GL_APIENTRY *glFogx_t) (GLenum, GLfixed);
typedef void (GL_APIENTRY *glFogxv_t) (GLenum, const GLfixed*);
typedef void (GL_APIENTRY *glFrontFace_t) (GLenum);
typedef void (GL_APIENTRY *glFrustumx_t) (GLfixed, GLfixed, GLfixed, GLfixed, GLfixed, GLfixed);
typedef void (GL_APIENTRY *glGetBooleanv_t) (GLenum, GLboolean*);
typedef void (GL_APIENTRY *glGetBufferParameteriv_t) (GLenum, GLenum, GLint*);
typedef void (GL_APIENTRY *glGetClipPlanex_t) (GLenum, GLfixed);
typedef void (GL_APIENTRY *glGenBuffers_t) (GLsizei, GLuint*);
typedef void (GL_APIENTRY *glGenTextures_t) (GLsizei, GLuint*);
typedef GLenum (GL_APIENTRY *glGetError_t) ();
typedef void (GL_APIENTRY *glGetFixedv_t) (GLenum, GLfixed*);
typedef void (GL_APIENTRY *glGetIntegerv_t) (GLenum, GLint*);
typedef void (GL_APIENTRY *glGetLightxv_t) (GLenum, GLenum, GLfixed*);
typedef void (GL_APIENTRY *glGetMaterialxv_t) (GLenum, GLenum, GLfixed*);
typedef void (GL_APIENTRY *glGetPointerv_t) (GLenum, GLvoid*);
typedef const GLubyte* (GL_APIENTRY *glGetString_t) (GLenum);
typedef void (GL_APIENTRY *glGetTexEnviv_t) (GLenum, GLenum, GLint*);
typedef void (GL_APIENTRY *glGetTexEnvxv_t) (GLenum, GLenum, GLfixed*);
typedef void (GL_APIENTRY *glGetTexParameteriv_t) (GLenum, GLenum, GLint*);
typedef void (GL_APIENTRY *glGetTexParameterxv_t) (GLenum, GLenum, GLfixed*);
typedef void (GL_APIENTRY *glHint_t) (GLenum, GLenum);
typedef GLboolean (GL_APIENTRY *glIsBuffer_t) (GLuint);
typedef GLboolean (GL_APIENTRY *glIsEnabled_t) (GLenum);
typedef GLboolean (GL_APIENTRY *glIsTexture_t) (GLuint);
typedef void (GL_APIENTRY *glLightModelx_t) (GLenum, GLfixed);
typedef void (GL_APIENTRY *glLightModelxv_t) (GLenum, const GLfixed*);
typedef void (GL_APIENTRY *glLightx_t) (GLenum, GLenum, GLfixed);
typedef void (GL_APIENTRY *glLightxv_t) (GLenum, GLenum, const GLfixed*);
typedef void (GL_APIENTRY *glLineWidthx_t) (GLfixed);
typedef void (GL_APIENTRY *glLoadIdentity_t) ();
typedef void (GL_APIENTRY *glLoadMatrixx_t) (const GLfixed*);
typedef void (GL_APIENTRY *glLogicOp_t) (GLenum);
typedef void (GL_APIENTRY *glMaterialx_t) (GLenum, GLenum, GLfixed);
typedef void (GL_APIENTRY *glMaterialxv_t) (GLenum, GLenum, const GLfixed*);
typedef void (GL_APIENTRY *glMatrixMode_t) (GLenum);
typedef void (GL_APIENTRY *glMultMatrixx_t) (const GLfixed*);
typedef void (GL_APIENTRY *glMultiTexCoord4x_t) (GLenum, GLfixed, GLfixed, GLfixed, GLfixed);
typedef void (GL_APIENTRY *glNormal3x_t) (GLfixed, GLfixed, GLfixed);
typedef void (GL_APIENTRY *glNormalPointer_t) (GLenum, GLsizei, const GLvoid*);
typedef void (GL_APIENTRY *glOrthox_t) (GLfixed, GLfixed, GLfixed, GLfixed, GLfixed, GLfixed);
typedef void (GL_APIENTRY *glPixelStorei_t) (GLenum, GLint);
typedef void (GL_APIENTRY *glPointParameterx_t) (GLenum, GLfixed);
typedef void (GL_APIENTRY *glPointParameterxv_t) (GLenum, const GLfixed*);
typedef void (GL_APIENTRY *glPointSizex_t) (GLfixed);
typedef void (GL_APIENTRY *glPolygonOffsetx_t) (GLfixed, GLfixed);
typedef void (GL_APIENTRY *glPopMatrix_t) ();
typedef void (GL_APIENTRY *glPushMatrix_t) ();
typedef void (GL_APIENTRY *glReadPixels_t) (GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, GLvoid*);
typedef void (GL_APIENTRY *glRotatex_t) (GLfixed, GLfixed, GLfixed, GLfixed);
typedef void (GL_APIENTRY *glSampleCoverage_t) (GLclampf, GLboolean);
typedef void (GL_APIENTRY *glSampleCoveragex_t) (GLclampx, GLboolean);
typedef void (GL_APIENTRY *glScalex_t) (GLfixed, GLfixed, GLfixed);
typedef void (GL_APIENTRY *glScissor_t) (GLint, GLint, GLsizei, GLsizei);
typedef void (GL_APIENTRY *glShadeModel_t) (GLenum);
typedef void (GL_APIENTRY *glStencilFunc_t) (GLenum, GLint, GLuint);
typedef void (GL_APIENTRY *glStencilMask_t) (GLuint);
typedef void (GL_APIENTRY *glStencilOp_t) (GLenum, GLenum, GLenum);
typedef void (GL_APIENTRY *glTexCoordPointer_t) (GLint, GLenum, GLsizei, const GLvoid*);
typedef void (GL_APIENTRY *glTexEnvi_t) (GLenum, GLenum, GLint);
typedef void (GL_APIENTRY *glTexEnvx_t) (GLenum, GLenum, GLfixed);
typedef void (GL_APIENTRY *glTexEnviv_t) (GLenum, GLenum, const GLint*);
typedef void (GL_APIENTRY *glTexEnvxv_t) (GLenum, GLenum, const GLfixed*);
typedef void (GL_APIENTRY *glTexImage2D_t) (GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid*);
typedef void (GL_APIENTRY *glTexParameteri_t) (GLenum, GLenum, GLint);
typedef void (GL_APIENTRY *glTexParameterx_t) (GLenum, GLenum, GLfixed);
typedef void (GL_APIENTRY *glTexParameteriv_t) (GLenum, GLenum, const GLint*);
typedef void (GL_APIENTRY *glTexParameterxv_t) (GLenum, GLenum, const GLfixed*);
typedef void (GL_APIENTRY *glTexSubImage2D_t) (GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const GLvoid*);
typedef void (GL_APIENTRY *glTranslatex_t) (GLfixed, GLfixed, GLfixed);
typedef void (GL_APIENTRY *glVertexPointer_t) (GLint, GLenum, GLsizei, const GLvoid*);
typedef void (GL_APIENTRY *glViewport_t) (GLint, GLint, GLsizei, GLsizei);
typedef void (GL_APIENTRY *glPointSizePointerOES_t) (GLenum, GLsizei, const GLvoid*);
typedef void (GL_APIENTRY *glBlendEquationSeparateOES_t) (GLenum, GLenum);
typedef void (GL_APIENTRY *glBlendFuncSeparateOES_t) (GLenum, GLenum, GLenum, GLenum);
typedef void (GL_APIENTRY *glBlendEquationOES_t) (GLenum);
typedef void (GL_APIENTRY *glDrawTexsOES_t) (GLshort, GLshort, GLshort, GLshort, GLshort);
typedef void (GL_APIENTRY *glDrawTexiOES_t) (GLint, GLint, GLint, GLint, GLint);
typedef void (GL_APIENTRY *glDrawTexxOES_t) (GLfixed, GLfixed, GLfixed, GLfixed, GLfixed);
typedef void (GL_APIENTRY *glDrawTexsvOES_t) (const GLshort*);
typedef void (GL_APIENTRY *glDrawTexivOES_t) (const GLint*);
typedef void (GL_APIENTRY *glDrawTexxvOES_t) (const GLfixed*);
typedef void (GL_APIENTRY *glDrawTexfOES_t) (GLfloat, GLfloat, GLfloat, GLfloat, GLfloat);
typedef void (GL_APIENTRY *glDrawTexfvOES_t) (const GLfloat*);
typedef void (GL_APIENTRY *glEGLImageTargetTexture2DOES_t) (GLenum, GLeglImageOES);
typedef void (GL_APIENTRY *glEGLImageTargetRenderbufferStorageOES_t) (GLenum, GLeglImageOES);
typedef void (GL_APIENTRY *glAlphaFuncxOES_t) (GLenum, GLclampx);
typedef void (GL_APIENTRY *glClearColorxOES_t) (GLclampx, GLclampx, GLclampx, GLclampx);
typedef void (GL_APIENTRY *glClearDepthxOES_t) (GLclampx);
typedef void (GL_APIENTRY *glClipPlanexOES_t) (GLenum, const GLfixed*);
typedef void (GL_APIENTRY *glColor4xOES_t) (GLfixed, GLfixed, GLfixed, GLfixed);
typedef void (GL_APIENTRY *glDepthRangexOES_t) (GLclampx, GLclampx);
typedef void (GL_APIENTRY *glFogxOES_t) (GLenum, GLfixed);
typedef void (GL_APIENTRY *glFogxvOES_t) (GLenum, const GLfixed*);
typedef void (GL_APIENTRY *glFrustumxOES_t) (GLfixed, GLfixed, GLfixed, GLfixed, GLfixed, GLfixed);
typedef void (GL_APIENTRY *glGetClipPlanexOES_t) (GLenum, GLfixed);
typedef void (GL_APIENTRY *glGetFixedvOES_t) (GLenum, GLfixed*);
typedef void (GL_APIENTRY *glGetLightxvOES_t) (GLenum, GLenum, GLfixed*);
typedef void (GL_APIENTRY *glGetMaterialxvOES_t) (GLenum, GLenum, GLfixed*);
typedef void (GL_APIENTRY *glGetTexEnvxvOES_t) (GLenum, GLenum, GLfixed*);
typedef void (GL_APIENTRY *glGetTexParameterxvOES_t) (GLenum, GLenum, GLfixed*);
typedef void (GL_APIENTRY *glLightModelxOES_t) (GLenum, GLfixed);
typedef void (GL_APIENTRY *glLightModelxvOES_t) (GLenum, const GLfixed*);
typedef void (GL_APIENTRY *glLightxOES_t) (GLenum, GLenum, GLfixed);
typedef void (GL_APIENTRY *glLightxvOES_t) (GLenum, GLenum, const GLfixed*);
typedef void (GL_APIENTRY *glLineWidthxOES_t) (GLfixed);
typedef void (GL_APIENTRY *glLoadMatrixxOES_t) (const GLfixed*);
typedef void (GL_APIENTRY *glMaterialxOES_t) (GLenum, GLenum, GLfixed);
typedef void (GL_APIENTRY *glMaterialxvOES_t) (GLenum, GLenum, const GLfixed*);
typedef void (GL_APIENTRY *glMultMatrixxOES_t) (const GLfixed*);
typedef void (GL_APIENTRY *glMultiTexCoord4xOES_t) (GLenum, GLfixed, GLfixed, GLfixed, GLfixed);
typedef void (GL_APIENTRY *glNormal3xOES_t) (GLfixed, GLfixed, GLfixed);
typedef void (GL_APIENTRY *glOrthoxOES_t) (GLfixed, GLfixed, GLfixed, GLfixed, GLfixed, GLfixed);
typedef void (GL_APIENTRY *glPointParameterxOES_t) (GLenum, GLfixed);
typedef void (GL_APIENTRY *glPointParameterxvOES_t) (GLenum, const GLfixed*);
typedef void (GL_APIENTRY *glPointSizexOES_t) (GLfixed);
typedef void (GL_APIENTRY *glPolygonOffsetxOES_t) (GLfixed, GLfixed);
typedef void (GL_APIENTRY *glRotatexOES_t) (GLfixed, GLfixed, GLfixed, GLfixed);
typedef void (GL_APIENTRY *glSampleCoveragexOES_t) (GLclampx, GLboolean);
typedef void (GL_APIENTRY *glScalexOES_t) (GLfixed, GLfixed, GLfixed);
typedef void (GL_APIENTRY *glTexEnvxOES_t) (GLenum, GLenum, GLfixed);
typedef void (GL_APIENTRY *glTexEnvxvOES_t) (GLenum, GLenum, const GLfixed*);
typedef void (GL_APIENTRY *glTexParameterxOES_t) (GLenum, GLenum, GLfixed);
typedef void (GL_APIENTRY *glTexParameterxvOES_t) (GLenum, GLenum, const GLfixed*);
typedef void (GL_APIENTRY *glTranslatexOES_t) (GLfixed, GLfixed, GLfixed);
typedef GLboolean (GL_APIENTRY *glIsRenderbufferOES_t) (GLuint);
typedef void (GL_APIENTRY *glBindRenderbufferOES_t) (GLenum, GLuint);
typedef void (GL_APIENTRY *glDeleteRenderbuffersOES_t) (GLsizei, const GLuint*);
typedef void (GL_APIENTRY *glGenRenderbuffersOES_t) (GLsizei, GLuint*);
typedef void (GL_APIENTRY *glRenderbufferStorageOES_t) (GLenum, GLenum, GLsizei, GLsizei);
typedef void (GL_APIENTRY *glGetRenderbufferParameterivOES_t) (GLenum, GLenum, GLint*);
typedef GLboolean (GL_APIENTRY *glIsFramebufferOES_t) (GLuint);
typedef void (GL_APIENTRY *glBindFramebufferOES_t) (GLenum, GLuint);
typedef void (GL_APIENTRY *glDeleteFramebuffersOES_t) (GLsizei, const GLuint*);
typedef void (GL_APIENTRY *glGenFramebuffersOES_t) (GLsizei, GLuint*);
typedef GLenum (GL_APIENTRY *glCheckFramebufferStatusOES_t) (GLenum);
typedef void (GL_APIENTRY *glFramebufferRenderbufferOES_t) (GLenum, GLenum, GLenum, GLuint);
typedef void (GL_APIENTRY *glFramebufferTexture2DOES_t) (GLenum, GLenum, GLenum, GLuint, GLint);
typedef void (GL_APIENTRY *glGetFramebufferAttachmentParameterivOES_t) (GLenum, GLenum, GLenum, GLint*);
typedef void (GL_APIENTRY *glGenerateMipmapOES_t) (GLenum);
typedef void* (GL_APIENTRY *glMapBufferOES_t) (GLenum, GLenum);
typedef GLboolean (GL_APIENTRY *glUnmapBufferOES_t) (GLenum);
typedef void (GL_APIENTRY *glGetBufferPointervOES_t) (GLenum, GLenum, GLvoid*);
typedef void (GL_APIENTRY *glCurrentPaletteMatrixOES_t) (GLuint);
typedef void (GL_APIENTRY *glLoadPaletteFromModelViewMatrixOES_t) ();
typedef void (GL_APIENTRY *glMatrixIndexPointerOES_t) (GLint, GLenum, GLsizei, const GLvoid*);
typedef void (GL_APIENTRY *glWeightPointerOES_t) (GLint, GLenum, GLsizei, const GLvoid*);
typedef GLbitfield (GL_APIENTRY *glQueryMatrixxOES_t) (GLfixed, GLint);
typedef void (GL_APIENTRY *glDepthRangefOES_t) (GLclampf, GLclampf);
typedef void (GL_APIENTRY *glFrustumfOES_t) (GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat);
typedef void (GL_APIENTRY *glOrthofOES_t) (GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat);
typedef void (GL_APIENTRY *glClipPlanefOES_t) (GLenum, const GLfloat*);
typedef void (GL_APIENTRY *glGetClipPlanefOES_t) (GLenum, GLfloat);
typedef void (GL_APIENTRY *glClearDepthfOES_t) (GLclampf);
typedef void (GL_APIENTRY *glTexGenfOES_t) (GLenum, GLenum, GLfloat);
typedef void (GL_APIENTRY *glTexGenfvOES_t) (GLenum, GLenum, const GLfloat*);
typedef void (GL_APIENTRY *glTexGeniOES_t) (GLenum, GLenum, GLint);
typedef void (GL_APIENTRY *glTexGenivOES_t) (GLenum, GLenum, const GLint*);
typedef void (GL_APIENTRY *glTexGenxOES_t) (GLenum, GLenum, GLfixed);
typedef void (GL_APIENTRY *glTexGenxvOES_t) (GLenum, GLenum, const GLfixed*);
typedef void (GL_APIENTRY *glGetTexGenfvOES_t) (GLenum, GLenum, GLfloat*);
typedef void (GL_APIENTRY *glGetTexGenivOES_t) (GLenum, GLenum, GLint*);
typedef void (GL_APIENTRY *glGetTexGenxvOES_t) (GLenum, GLenum, GLfixed*);
typedef void (GL_APIENTRY *glBindVertexArrayOES_t) (GLuint);
typedef void (GL_APIENTRY *glDeleteVertexArraysOES_t) (GLsizei, const GLuint*);
typedef void (GL_APIENTRY *glGenVertexArraysOES_t) (GLsizei, GLuint*);
typedef GLboolean (GL_APIENTRY *glIsVertexArrayOES_t) (GLuint);
typedef void (GL_APIENTRY *glDiscardFramebufferEXT_t) (GLenum, GLsizei, const GLenum*);
typedef void (GL_APIENTRY *glMultiDrawArraysEXT_t) (GLenum, GLint*, GLsizei*, GLsizei);
typedef void (GL_APIENTRY *glMultiDrawElementsEXT_t) (GLenum, const GLsizei*, GLenum, const GLvoid**, GLsizei);
typedef void (GL_APIENTRY *glClipPlanefIMG_t) (GLenum, const GLfloat*);
typedef void (GL_APIENTRY *glClipPlanexIMG_t) (GLenum, const GLfixed*);
typedef void (GL_APIENTRY *glRenderbufferStorageMultisampleIMG_t) (GLenum, GLsizei, GLenum, GLsizei, GLsizei);
typedef void (GL_APIENTRY *glFramebufferTexture2DMultisampleIMG_t) (GLenum, GLenum, GLenum, GLuint, GLint, GLsizei);
typedef void (GL_APIENTRY *glDeleteFencesNV_t) (GLsizei, const GLuint*);
typedef void (GL_APIENTRY *glGenFencesNV_t) (GLsizei, GLuint*);
typedef GLboolean (GL_APIENTRY *glIsFenceNV_t) (GLuint);
typedef GLboolean (GL_APIENTRY *glTestFenceNV_t) (GLuint);
typedef void (GL_APIENTRY *glGetFenceivNV_t) (GLuint, GLenum, GLint*);
typedef void (GL_APIENTRY *glFinishFenceNV_t) (GLuint);
typedef void (GL_APIENTRY *glSetFenceNV_t) (GLuint, GLenum);
typedef void (GL_APIENTRY *glGetDriverControlsQCOM_t) (GLint*, GLsizei, GLuint*);
typedef void (GL_APIENTRY *glGetDriverControlStringQCOM_t) (GLuint, GLsizei, GLsizei*, GLchar*);
typedef void (GL_APIENTRY *glEnableDriverControlQCOM_t) (GLuint);
typedef void (GL_APIENTRY *glDisableDriverControlQCOM_t) (GLuint);
typedef void (GL_APIENTRY *glExtGetTexturesQCOM_t) (GLuint*, GLint, GLint*);
typedef void (GL_APIENTRY *glExtGetBuffersQCOM_t) (GLuint*, GLint, GLint*);
typedef void (GL_APIENTRY *glExtGetRenderbuffersQCOM_t) (GLuint*, GLint, GLint*);
typedef void (GL_APIENTRY *glExtGetFramebuffersQCOM_t) (GLuint*, GLint, GLint*);
typedef void (GL_APIENTRY *glExtGetTexLevelParameterivQCOM_t) (GLuint, GLenum, GLint, GLenum, GLint*);
typedef void (GL_APIENTRY *glExtTexObjectStateOverrideiQCOM_t) (GLenum, GLenum, GLint);
typedef void (GL_APIENTRY *glExtGetTexSubImageQCOM_t) (GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, GLvoid*);
typedef void (GL_APIENTRY *glExtGetBufferPointervQCOM_t) (GLenum, GLvoid*);
typedef void (GL_APIENTRY *glExtGetShadersQCOM_t) (GLuint*, GLint, GLint*);
typedef void (GL_APIENTRY *glExtGetProgramsQCOM_t) (GLuint*, GLint, GLint*);
typedef GLboolean (GL_APIENTRY *glExtIsProgramBinaryQCOM_t) (GLuint);
typedef void (GL_APIENTRY *glExtGetProgramBinarySourceQCOM_t) (GLuint, GLenum, GLchar*, GLint*);
typedef void (GL_APIENTRY *glStartTilingQCOM_t) (GLuint, GLuint, GLuint, GLuint, GLbitfield);
typedef void (GL_APIENTRY *glEndTilingQCOM_t) (GLbitfield);


#endif
