
#pragma once

#include <gtk/gtk.h>

G_BEGIN_DECLS

#define HELLOAPP_TYPE_WINDOW (helloapp_window_get_type())

G_DECLARE_FINAL_TYPE (HelloappWindow, helloapp_window, HELLOAPP, WINDOW, GtkApplicationWindow)

G_END_DECLS
