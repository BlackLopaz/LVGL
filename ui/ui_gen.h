/**
 * @file ui_gen.h
 */

#ifndef UI_GEN_H
#define UI_GEN_H

#ifndef UI_SUBJECT_STRING_LENGTH
#define UI_SUBJECT_STRING_LENGTH 256
#endif

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
    #include "lvgl.h"
    #include "lvgl_private.h"
#else
    #include "lvgl/lvgl.h"
    #include "lvgl/lvgl_private.h"
#endif

#ifdef LV_USE_XML
    #include "lv_xml/lv_xml.h"
#endif



/*********************
 *      DEFINES
 *********************/

#define RB_RED lv_color_hex(0xE30118)

#define BACKGROUND_DEFAULT lv_color_hex3(0x000)

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL VARIABLES
 **********************/

/*-------------------
 * Permanent screens
 *------------------*/

extern lv_obj_t * RaceScreen;

/*----------------
 * Global styles
 *----------------*/

/*----------------
 * Fonts
 *----------------*/

/*----------------
 * Images
 *----------------*/

extern const void * MonsterVRedbull_data;
extern const void * MonsterVRedbull_file;

/*----------------
 * Subjects
 *----------------*/

/**********************
 * GLOBAL PROTOTYPES
 **********************/

/*----------------
 * Event Callbacks
 *----------------*/

/**
 * Initialize the component library
 */

void ui_init_gen(const char * asset_path);

/**********************
 *      MACROS
 **********************/

/**********************
 *   POST INCLUDES
 **********************/

/*Include all the widgets, components and screens of this library*/
#include "components/ConfigurableButton_gen.h"
#include "components/GridScreen_gen.h"
#include "components/Tile_gen.h"
#include "screens/RaceScreen_gen.h"

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*UI_GEN_H*/