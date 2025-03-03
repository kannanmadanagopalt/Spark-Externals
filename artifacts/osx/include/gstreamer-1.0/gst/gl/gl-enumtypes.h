


#ifndef __GST_GL_ENUM_TYPES_H__
#define __GST_GL_ENUM_TYPES_H__

#include <gst/gst.h>
#include <gst/gl/gl-prelude.h>
G_BEGIN_DECLS

/* enumerations from "gstglwindow.h" */
GST_GL_API
GType gst_gl_window_error_get_type (void);
#define GST_TYPE_GL_WINDOW_ERROR (gst_gl_window_error_get_type())

/* enumerations from "gstgldisplay.h" */
GST_GL_API
GType gst_gl_display_type_get_type (void);
#define GST_TYPE_GL_DISPLAY_TYPE (gst_gl_display_type_get_type())

/* enumerations from "gstglcontext.h" */
GST_GL_API
GType gst_gl_context_error_get_type (void);
#define GST_TYPE_GL_CONTEXT_ERROR (gst_gl_context_error_get_type())

/* enumerations from "gstglbasememory.h" */
GST_GL_API
GType gst_gl_base_memory_error_get_type (void);
#define GST_TYPE_GL_BASE_MEMORY_ERROR (gst_gl_base_memory_error_get_type())
GST_GL_API
GType gst_gl_base_memory_transfer_get_type (void);
#define GST_TYPE_GL_BASE_MEMORY_TRANSFER (gst_gl_base_memory_transfer_get_type())

/* enumerations from "gstglformat.h" */
GST_GL_API
GType gst_gl_format_get_type (void);
#define GST_TYPE_GL_FORMAT (gst_gl_format_get_type())

/* enumerations from "gstglsl.h" */
GST_GL_API
GType gst_glsl_error_get_type (void);
#define GST_TYPE_GLSL_ERROR (gst_glsl_error_get_type())
GST_GL_API
GType gst_glsl_version_get_type (void);
#define GST_TYPE_GLSL_VERSION (gst_glsl_version_get_type())
GST_GL_API
GType gst_glsl_profile_get_type (void);
#define GST_TYPE_GLSL_PROFILE (gst_glsl_profile_get_type())

/* enumerations from "gstglupload.h" */
GST_GL_API
GType gst_gl_upload_return_get_type (void);
#define GST_TYPE_GL_UPLOAD_RETURN (gst_gl_upload_return_get_type())

/* enumerations from "gstglapi.h" */
GST_GL_API
GType gst_gl_api_get_type (void);
#define GST_TYPE_GL_API (gst_gl_api_get_type())
GST_GL_API
GType gst_gl_platform_get_type (void);
#define GST_TYPE_GL_PLATFORM (gst_gl_platform_get_type())

/* enumerations from "gstglviewconvert.h" */
GST_GL_API
GType gst_gl_stereo_downmix_get_type (void);
#define GST_TYPE_GL_STEREO_DOWNMIX (gst_gl_stereo_downmix_get_type())

/* enumerations from "gstglquery.h" */
GST_GL_API
GType gst_gl_query_type_get_type (void);
#define GST_TYPE_GL_QUERY_TYPE (gst_gl_query_type_get_type())

/* enumerations from "gstgl_enums.h" */
GST_GL_API
GType gst_gl_texture_target_get_type (void);
#define GST_TYPE_GL_TEXTURE_TARGET (gst_gl_texture_target_get_type())
G_END_DECLS

#endif /* __GST_GL_ENUM_TYPES_H__ */



