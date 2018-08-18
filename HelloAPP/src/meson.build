helloapp_sources = [
  'main.c',
  'helloapp-window.c',
]

helloapp_deps = [
  dependency('gio-2.0', version: '>= 2.50'),
  dependency('gtk+-3.0', version: '>= 3.22'),
]

gnome = import('gnome')

helloapp_sources += gnome.compile_resources('helloapp-resources',
  'helloapp.gresource.xml',
  c_name: 'helloapp'
)

executable('helloapp', helloapp_sources,
  dependencies: helloapp_deps,
  install: true,
)
