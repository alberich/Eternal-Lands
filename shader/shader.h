#ifndef	_SHADER_H_
#define	_SHADER_H_

#ifdef USE_SHADER

#include "../global.h"

typedef enum
{
	sst_no_shadow_receiver = 0,
	sst_shadow_receiver = 1
//	sst_soft_shadow_receiver = 2,
//	sst_shadow_caster = 3
} shader_shadow_type;

typedef enum
{
	st_water = 0,
	st_reflectiv_water = 1
} shader_type;

extern GLuint noise_tex;

void init_shaders();

GLhandleARB get_shader(shader_type type, shader_shadow_type shadow_type, Uint32 quality);

void free_shaders();

#endif /* USE_SHADER */

#endif	// _SHADER_H_