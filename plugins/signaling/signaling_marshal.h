
#ifndef __signaling_marshal_MARSHAL_H__
#define __signaling_marshal_MARSHAL_H__

#include	<glib-object.h>

G_BEGIN_DECLS

/* NONE:NONE (signaling-marshal.list:1) */
#define signaling_marshal_VOID__VOID	g_cclosure_marshal_VOID__VOID
#define signaling_marshal_NONE__NONE	signaling_marshal_VOID__VOID

/* NONE:STRING,UINT (signaling-marshal.list:2) */
extern void signaling_marshal_VOID__STRING_UINT (GClosure     *closure,
                                                 GValue       *return_value,
                                                 guint         n_param_values,
                                                 const GValue *param_values,
                                                 gpointer      invocation_hint,
                                                 gpointer      marshal_data);
#define signaling_marshal_NONE__STRING_UINT	signaling_marshal_VOID__STRING_UINT

/* VOID:OBJECT,POINTER (signaling-marshal.list:3) */
extern void signaling_marshal_VOID__OBJECT_POINTER (GClosure     *closure,
                                                    GValue       *return_value,
                                                    guint         n_param_values,
                                                    const GValue *param_values,
                                                    gpointer      invocation_hint,
                                                    gpointer      marshal_data);

/* NONE:OBJECT (signaling-marshal.list:4) */
#define signaling_marshal_VOID__OBJECT	g_cclosure_marshal_VOID__OBJECT
#define signaling_marshal_NONE__OBJECT	signaling_marshal_VOID__OBJECT

G_END_DECLS

#endif /* __signaling_marshal_MARSHAL_H__ */

