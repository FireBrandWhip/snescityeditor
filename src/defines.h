#ifndef DEFINES_H
#define DEFINES_H

#ifdef SCE_EXPMODE
#define CITYWIDTH 96
#define CITYHEIGHT 80
#else
#define CITYWIDTH 120
#define CITYHEIGHT 100
#endif

#define CITYAREA (CITYWIDTH * CITYHEIGHT)

#define STRINGIFY(x) _STRINGIFY(x)
#define _STRINGIFY(x) #x

#endif
