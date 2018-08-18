
#include "helloapp-config.h"
#include "helloapp-window.h"

struct _HelloappWindow
{
  GtkApplicationWindow  parent_instance;

  /* Template widgets */
  GtkHeaderBar        *header_bar;
  GtkLabel            *label;
};

G_DEFINE_TYPE (HelloappWindow, helloapp_window, GTK_TYPE_APPLICATION_WINDOW)

static void
helloapp_window_class_init (HelloappWindowClass *klass)
{
  GtkWidgetClass *widget_class = GTK_WIDGET_CLASS (klass);

  gtk_widget_class_set_template_from_resource (widget_class, "/org/gnome/Helloapp/helloapp-window.ui");
  gtk_widget_class_bind_template_child (widget_class, HelloappWindow, header_bar);
  gtk_widget_class_bind_template_child (widget_class, HelloappWindow, label);
}

static void
helloapp_window_init (HelloappWindow *self)
{
  gtk_widget_init_template (GTK_WIDGET (self));
}
