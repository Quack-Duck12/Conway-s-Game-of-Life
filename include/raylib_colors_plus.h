
// raylib colors plus V0.5 - A small raylib addon made by Quack-Duck12 (Jevis)
// Licensed under MIT

/*
To use include after raylib
eg.
    #include "raylib.h"
    #include "raylib_colors_plus.h"
*/

#ifndef RAYLIB_H
#else

#ifndef RAYLIB_COLORS_PLUS_H
#define RAYLIB_COLORS_PLUS_H

// =============================================================================
// Extended colors – missing basics, pastels, neon-ish, useful alpha variants
// =============================================================================
#define CYAN           CLITERAL(Color){   0, 255, 255, 255 } // #00FFFFFF
#define TEAL           CLITERAL(Color){   0, 128, 128, 255 } // #008080FF
#define INDIGO         CLITERAL(Color){  75,   0, 130, 255 } // #4B0082FF
#define NAVY           CLITERAL(Color){   0,   0, 128, 255 } // #000080FF
#define OLIVE          CLITERAL(Color){ 128, 128,   0, 255 } // #808000FF
#define TURQUOISE      CLITERAL(Color){  64, 224, 208, 255 } // #40E0D0FF
#define CORAL          CLITERAL(Color){ 255, 127,  80, 255 } // #FF7F50FF
#define SALMON         CLITERAL(Color){ 250, 128, 114, 255 } // #FA8072FF
#define TOMATO         CLITERAL(Color){ 255,  99,  71, 255 } // #FF6347FF
#define CRIMSON        CLITERAL(Color){ 220,  20,  60, 255 } // #DC143CFF
#define TAN            CLITERAL(Color){ 210, 180, 140, 255 } // #D2B48CFF
#define SIENNA         CLITERAL(Color){ 160,  82,  45, 255 } // #A0522DFF
#define CHOCOLATE      CLITERAL(Color){ 210, 105,  30, 255 } // #D2691EFF
#define PERU           CLITERAL(Color){ 205, 133,  63, 255 } // #CD853FFF

#define PASTEL_PINK    CLITERAL(Color){ 255, 182, 193, 255 } // #FFB6C1FF
#define PASTEL_GREEN   CLITERAL(Color){ 152, 251, 152, 255 } // #98FB98FF
#define PASTEL_BLUE    CLITERAL(Color){ 173, 216, 230, 255 } // #ADD8E6FF
#define PASTEL_YELLOW  CLITERAL(Color){ 255, 255, 153, 255 } // #FFFF99FF
#define PASTEL_PURPLE  CLITERAL(Color){ 216, 191, 216, 255 } // #D8BFD8FF
#define PASTEL_ORANGE  CLITERAL(Color){ 255, 218, 185, 255 } // #FFDAB9FF

#define NEON_CYAN      CLITERAL(Color){   0, 255, 240, 255 } // #00FFF0FF
#define NEON_MAGENTA   CLITERAL(Color){ 255,   0, 255, 255 } // #FF00FFFF
#define NEON_GREEN     CLITERAL(Color){  57, 255,  20, 255 } // #39FF14FF
#define NEON_PURPLE    CLITERAL(Color){ 200,   0, 255, 255 } // #C800FFFF
#define ELECTRIC_BLUE  CLITERAL(Color){   0, 255, 255, 255 } // #00FFFFFF

#define WHITE_HALF     CLITERAL(Color){ 255, 255, 255, 128 } // #FFFFFF80
#define BLACK_HALF     CLITERAL(Color){   0,   0,   0, 128 } // #00000080
#define GRAY_HALF      CLITERAL(Color){ 130, 130, 130, 128 } // #82828280
#define RED_HALF       CLITERAL(Color){ 230,  41,  55, 128 } // #E6293780
#define GREEN_HALF     CLITERAL(Color){   0, 228,  48, 128 } // #00E43080
#define BLUE_HALF      CLITERAL(Color){   0, 121, 241, 128 } // #0079F180
#define BLACK_ALPHA_32 CLITERAL(Color){   0,   0,   0,  32 } // #00000020
#define WHITE_ALPHA_40 CLITERAL(Color){ 255, 255, 255,  40 } // #FFFFFF28

#define INDIANRED          CLITERAL(Color){205,  92,  92, 255} // #CD5C5CFF
#define LIGHTCORAL         CLITERAL(Color){240, 128, 128, 255} // #F08080FF
#define DARKSALMON         CLITERAL(Color){233, 150, 122, 255} // #E9967AFF
#define LIGHTSALMON        CLITERAL(Color){255, 160, 122, 255} // #FFA07AFF
#define FIREBRICK          CLITERAL(Color){178,  34,  34, 255} // #B22222FF
#define DARKRED            CLITERAL(Color){139,   0,   0, 255} // #8B0000FF
#define LIGHTPINK          CLITERAL(Color){255, 182, 193, 255} // #FFB6C1FF
#define HOTPINK            CLITERAL(Color){255, 105, 180, 255} // #FF69B4FF
#define DEEPPINK           CLITERAL(Color){255,  20, 147, 255} // #FF1493FF
#define MEDIUMVIOLETRED    CLITERAL(Color){199,  21, 133, 255} // #C71585FF
#define PALEVIOLETRED      CLITERAL(Color){219, 112, 147, 255} // #DB7093FF

#define ORANGERED          CLITERAL(Color){255,  69,   0, 255} // #FF4500FF
#define DARKORANGE         CLITERAL(Color){255, 140,   0, 255} // #FF8C00FF

#define LIGHTYELLOW        CLITERAL(Color){255, 255, 224, 255} // #FFFFE0FF
#define LEMONCHIFFON       CLITERAL(Color){255, 250, 205, 255} // #FFFACDFF
#define LIGHTGOLDENRODYELLOW CLITERAL(Color){250, 250, 210, 255} // #FAFAD2FF
#define PAPAYAWHIP         CLITERAL(Color){255, 239, 213, 255} // #FFEFD5FF
#define MOCCASIN           CLITERAL(Color){255, 228, 181, 255} // #FFE4B5FF
#define PEACHPUFF          CLITERAL(Color){255, 218, 185, 255} // #FFDAB9FF
#define PALEGOLDENROD      CLITERAL(Color){238, 232, 170, 255} // #EEE8AAFF
#define KHAKI              CLITERAL(Color){240, 230, 140, 255} // #F0E68CFF
#define DARKKHAKI          CLITERAL(Color){189, 183, 107, 255} // #BDB76BFF

#define CORNSILK           CLITERAL(Color){255, 248, 220, 255} // #FFF8DCFF
#define BLANCHEDALMOND     CLITERAL(Color){255, 235, 205, 255} // #FFEBCDFF
#define BISQUE             CLITERAL(Color){255, 228, 196, 255} // #FFE4C4FF
#define NAVAJOWHITE        CLITERAL(Color){255, 222, 173, 255} // #FFDEADFF
#define WHEAT              CLITERAL(Color){245, 222, 179, 255} // #F5DEB3FF
#define BURLYWOOD          CLITERAL(Color){222, 184, 135, 255} // #DEB887FF
#define ROSYBROWN          CLITERAL(Color){188, 143, 143, 255} // #BC8F8FFF
#define SANDYBROWN         CLITERAL(Color){244, 164,  96, 255} // #F4A460FF
#define GOLDENROD          CLITERAL(Color){218, 165,  32, 255} // #DAA520FF
#define DARKGOLDENROD      CLITERAL(Color){184, 134,  11, 255} // #B8860BFF
#define SADDLEBROWN        CLITERAL(Color){139,  69,  19, 255} // #8B4513FF

#define DARKOLIVEGREEN     CLITERAL(Color){ 85, 107,  47, 255} // #556B2FFF
#define OLIVEDRAB          CLITERAL(Color){107, 142,  35, 255} // #6B8E23FF
#define YELLOWGREEN        CLITERAL(Color){154, 205,  50, 255} // #9ACD32FF
#define DARKSEAGREEN       CLITERAL(Color){143, 188, 143, 255} // #8FBC8FFF
#define MEDIUMSEAGREEN     CLITERAL(Color){ 60, 179, 113, 255} // #3CB371FF
#define SEAGREEN           CLITERAL(Color){ 46, 139,  87, 255} // #2E8B57FF
#define LIGHTSEAGREEN      CLITERAL(Color){ 32, 178, 170, 255} // #20B2AAFF
#define LAWNGREEN          CLITERAL(Color){124, 252,   0, 255} // #7CFC00FF
#define CHARTREUSE         CLITERAL(Color){127, 255,   0, 255} // #7FFF00FF
#define GREENYELLOW        CLITERAL(Color){173, 255,  47, 255} // #ADFF2FFF
#define MEDIUMSPRINGGREEN  CLITERAL(Color){  0, 250, 154, 255} // #00FA9AFF
#define SPRINGGREEN        CLITERAL(Color){  0, 255, 127, 255} // #00FF7FFF
#define PALEGREEN          CLITERAL(Color){152, 251, 152, 255} // #98FB98FF
#define LIGHTGREEN         CLITERAL(Color){144, 238, 144, 255} // #90EE90FF
#define MEDIUMAQUAMARINE   CLITERAL(Color){102, 205, 170, 255} // #66CDAAFF

#define AQUA               CLITERAL(Color){  0, 255, 255, 255} // #00FFFFFF
#define LIGHTCYAN          CLITERAL(Color){224, 255, 255, 255} // #E0FFFFFF
#define PALETURQUOISE      CLITERAL(Color){175, 238, 238, 255} // #AFEEEEFF
#define AQUAMARINE         CLITERAL(Color){127, 255, 212, 255} // #7FFFD4FF
#define MEDIUMTURQUOISE    CLITERAL(Color){ 72, 209, 204, 255} // #48D1CCFF
#define DARKTURQUOISE      CLITERAL(Color){  0, 206, 209, 255} // #00CED1FF
#define CADETBLUE          CLITERAL(Color){ 95, 158, 160, 255} // #5F9EA0FF
#define STEELBLUE          CLITERAL(Color){ 70, 130, 180, 255} // #4682B4FF
#define LIGHTSTEELBLUE     CLITERAL(Color){176, 196, 222, 255} // #B0C4DEFF
#define POWDERBLUE         CLITERAL(Color){176, 224, 230, 255} // #B0E0E6FF
#define LIGHTBLUE          CLITERAL(Color){173, 216, 230, 255} // #ADD8E6FF
#define DEEPSKYBLUE        CLITERAL(Color){  0, 191, 255, 255} // #00BFFFFF
#define DODGERBLUE         CLITERAL(Color){ 30, 144, 255, 255} // #1E90FFFF
#define CORNFLOWERBLUE     CLITERAL(Color){100, 149, 237, 255} // #6495EDFF
#define MEDIUMSLATEBLUE    CLITERAL(Color){123, 104, 238, 255} // #7B68EEFF
#define ROYALBLUE          CLITERAL(Color){ 65, 105, 225, 255} // #4169E1FF
#define MEDIUMBLUE         CLITERAL(Color){  0,   0, 205, 255} // #0000CDFF
#define MIDNIGHTBLUE       CLITERAL(Color){ 25,  25, 112, 255} // #191970FF

#define LAVENDER           CLITERAL(Color){230, 230, 250, 255} // #E6E6FAFF
#define THISTLE            CLITERAL(Color){216, 191, 216, 255} // #D8BFD8FF
#define PLUM               CLITERAL(Color){221, 160, 221, 255} // #DDA0DDFF
#define ORCHID             CLITERAL(Color){218, 112, 214, 255} // #DA70D6FF
#define FUCHSIA            CLITERAL(Color){255,   0, 255, 255} // #FF00FFFF
#define MEDIUMORCHID       CLITERAL(Color){186,  85, 211, 255} // #BA55D3FF
#define MEDIUMPURPLE       CLITERAL(Color){147, 112, 219, 255} // #9370DBFF
#define REBECCAPURPLE      CLITERAL(Color){102,  51, 153, 255} // #663399FF
#define BLUEVIOLET         CLITERAL(Color){138,  43, 226, 255} // #8A2BE2FF
#define DARKVIOLET         CLITERAL(Color){148,   0, 211, 255} // #9400D3FF
#define DARKORCHID         CLITERAL(Color){153,  50, 204, 255} // #9932CCFF
#define DARKMAGENTA        CLITERAL(Color){139,   0, 139, 255} // #8B008BFF
#define DARKSLATEBLUE      CLITERAL(Color){ 72,  61, 139, 255} // #483D8BFF
#define SLATEBLUE          CLITERAL(Color){106,  90, 205, 255} // #6A5ACDFF

#define GAINSBORO          CLITERAL(Color){220, 220, 220, 255} // #DCDCDCFF
#define SILVER             CLITERAL(Color){192, 192, 192, 255} // #C0C0C0FF
#define DIMGRAY            CLITERAL(Color){105, 105, 105, 255} // #696969FF
#define LIGHTSLATEGRAY     CLITERAL(Color){119, 136, 153, 255} // #778899FF
#define SLATEGRAY          CLITERAL(Color){112, 128, 144, 255} // #708090FF
#define DARKSLATEGRAY      CLITERAL(Color){ 47,  79,  79, 255} // #2F4F4FFF

#define WHITESMOKE         CLITERAL(Color){245, 245, 245, 255} // #F5F5F5FF
#define FLORALWHITE        CLITERAL(Color){255, 250, 240, 255} // #FFFAF0FF
#define IVORY              CLITERAL(Color){255, 255, 240, 255} // #FFFFF0FF
#define MINTCREAM          CLITERAL(Color){245, 255, 250, 255} // #F5FFFAFF
#define AZURE              CLITERAL(Color){240, 255, 255, 255} // #F0FFFFFF
#define HONEYDEW           CLITERAL(Color){240, 255, 240, 255} // #F0FFF0FF
#define ALICEBLUE          CLITERAL(Color){240, 248, 255, 255} // #F0F8FFFF
#define GHOSTWHITE         CLITERAL(Color){248, 248, 255, 255} // #F8F8FFFF
#define SNOW               CLITERAL(Color){255, 250, 250, 255} // #FFFAFAFF
#define SEASHELL           CLITERAL(Color){255, 245, 238, 255} // #FFF5EEFF
#define OLDLACE            CLITERAL(Color){253, 245, 230, 255} // #FDF5E6FF
#define LINEN              CLITERAL(Color){250, 240, 230, 255} // #FAF0E6FF
#define LAVENDERBLUSH      CLITERAL(Color){255, 240, 245, 255} // #FFF0F5FF
#define MISTYROSE          CLITERAL(Color){255, 228, 225, 255} // #FFE4E1FF

#define OFFWHITE                CLITERAL(Color){ 250, 249, 246, 255 } // #FAF9F6FF
#define WARM_OFFWHITE           CLITERAL(Color){ 255, 251, 240, 255 } // #FFFBF0FF
#define CREAM                   CLITERAL(Color){ 255, 253, 208, 255 } // #FFFDD0FF
#define LIGHT_CREAM             CLITERAL(Color){ 254, 255, 237, 255 } // #FEFFEDFF
#define SOFT_BEIGE              CLITERAL(Color){ 250, 240, 230, 255 } // #FAF0E6FF
#define ANTIQUEWHITE            CLITERAL(Color){ 250, 235, 215, 255 } // #FAEBD7FF
#define OLD_LACE                CLITERAL(Color){ 253, 245, 230, 255 } // #FDF5E6FF
#define PEARL                   CLITERAL(Color){ 240, 248, 255, 255 } // #F0F8FFFF

#define OFFWHITE_HALF           CLITERAL(Color){ 250, 249, 246, 128 } // #FAF9F680
#define OFFWHITE_ALPHA_64       CLITERAL(Color){ 250, 249, 246,  64 } // #FAF9F640
#define OFFWHITE_ALPHA_32       CLITERAL(Color){ 250, 249, 246,  32 } // #FAF9F620
#define CREAM_HALF              CLITERAL(Color){ 255, 253, 208, 128 } // #FFFDD080
#define BEIGE_HALF              CLITERAL(Color){ 245, 245, 220, 128 } // #F5F5DC80
#define BEIGE_ALPHA_64          CLITERAL(Color){ 245, 245, 220,  64 } // #F5F5DC40
#define ANTIQUEWHITE_HALF       CLITERAL(Color){ 250, 235, 215, 128 } // #FAEBD780
#define LINEN_HALF              CLITERAL(Color){ 250, 240, 230, 128 } // #FAF0E680

#define SOFT_GRAY               CLITERAL(Color){ 220, 220, 230, 255 } // #DCDCE6FF
#define WARM_GRAY               CLITERAL(Color){ 230, 220, 210, 255 } // #E6DCD2FF
#define COOL_GRAY               CLITERAL(Color){ 210, 215, 220, 255 } // #D2D7DCFF
#define SHADOW_BLACK            CLITERAL(Color){  20,  20,  30, 255 } // #14141EFF
#define DEEP_CHARCOAL           CLITERAL(Color){  40,  40,  45, 255 } // #28282DFF
#define MINT_LIGHT              CLITERAL(Color){ 220, 255, 240, 255 } // #DCFFF0FF
#define LAVENDER_TINT           CLITERAL(Color){ 240, 230, 255, 255 } // #F0E6FFFF
#define PEACH_TINT              CLITERAL(Color){ 255, 240, 230, 255 } // #FFF0E6FF

#define GRAY_LIGHT_HALF         CLITERAL(Color){ 220, 220, 220, 128 } // #DCDCDC80
#define GRAY_MEDIUM_HALF        CLITERAL(Color){ 160, 160, 160, 128 } // #A0A0A080
#define GRAY_DARK_HALF          CLITERAL(Color){  80,  80,  80, 128 } // #50505080
#define SOFT_GRAY_HALF          CLITERAL(Color){ 220, 220, 230, 128 } // #DCDCE680
#define PURPLE_TINT_HALF        CLITERAL(Color){ 200, 180, 255, 128 } // #C8B4FF80
#define PEACH_TINT_HALF         CLITERAL(Color){ 255, 230, 220, 128 } // #FFE6DC80
#define MINT_TINT_HALF          CLITERAL(Color){ 200, 255, 230, 128 } // #C8FFE680

#define WHITE_HALF_ALPHA   CLITERAL(Color){255, 255, 255, 128} // #FFFFFF80
#define BLACK_HALF_ALPHA   CLITERAL(Color){  0,   0,   0, 128} // #00000080
#define RED_HALF_ALPHA     CLITERAL(Color){255,   0,   0, 128} // #FF000080
#define GREEN_HALF_ALPHA   CLITERAL(Color){  0, 128,   0, 128} // #00800080
#define BLUE_HALF_ALPHA    CLITERAL(Color){  0,   0, 255, 128} // #0000FF80
#define YELLOW_HALF_ALPHA  CLITERAL(Color){255, 255,   0, 128} // #FFFF0080
#define CYAN_HALF_ALPHA    CLITERAL(Color){  0, 255, 255, 128} // #00FFFF80

#endif
#endif /* RAYLIB_COLORS_PLUS_H */
