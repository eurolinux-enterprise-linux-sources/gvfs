
#ifndef __hal_marshal_MARSHAL_H__
#define __hal_marshal_MARSHAL_H__

#include	<glib-object.h>

G_BEGIN_DECLS

/* VOID:OBJECT,STRING (/home/oholy/gnome/gvfs/monitor/gphoto2/hal-marshal.list:1) */
extern void hal_marshal_VOID__OBJECT_STRING (GClosure     *closure,
                                             GValue       *return_value,
                                             guint         n_param_values,
                                             const GValue *param_values,
                                             gpointer      invocation_hint,
                                             gpointer      marshal_data);

/* VOID:OBJECT,STRING,STRING (/home/oholy/gnome/gvfs/monitor/gphoto2/hal-marshal.list:2) */
extern void hal_marshal_VOID__OBJECT_STRING_STRING (GClosure     *closure,
                                                    GValue       *return_value,
                                                    guint         n_param_values,
                                                    const GValue *param_values,
                                                    gpointer      invocation_hint,
                                                    gpointer      marshal_data);

/* VOID:STRING,STRING (/home/oholy/gnome/gvfs/monitor/gphoto2/hal-marshal.list:3) */
extern void hal_marshal_VOID__STRING_STRING (GClosure     *closure,
                                             GValue       *return_value,
                                             guint         n_param_values,
                                             const GValue *param_values,
                                             gpointer      invocation_hint,
                                             gpointer      marshal_data);

G_END_DECLS

#endif /* __hal_marshal_MARSHAL_H__ */

