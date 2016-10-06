#ifndef _GST_widevine_DECRYPT_H_
#define _GST_widevine_DECRYPT_H_
#include <gst/base/gstbasetransform.h>
G_BEGIN_DECLS
#define GST_TYPE_widevine_DECRYPT (gst_widevine_decrypt_get_type())
#define GST_widevine_DECRYPT(obj) (G_TYPE_CHECK_INSTANCE_CAST((obj),GST_TYPE_widevine_DECRYPT,GstwidevineDecrypt))
#define GST_widevine_DECRYPT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST((klass),GST_TYPE_widevine_DECRYPT,GstwidevineDecryptClass))
#define GST_IS_widevine_DECRYPT(obj) (G_TYPE_CHECK_INSTANCE_TYPE((obj),GST_TYPE_widevine_DECRYPT))
#define GST_IS_widevine_DECRYPT_CLASS(obj) (G_TYPE_CHECK_CLASS_TYPE((klass),GST_TYPE_widevine_DECRYPT))
typedef struct _GstwidevineDecrypt GstwidevineDecrypt;
typedef struct _GstwidevineDecryptClass GstwidevineDecryptClass;
GType gst_widevine_decrypt_get_type (void);
G_END_DECLS
#endif
