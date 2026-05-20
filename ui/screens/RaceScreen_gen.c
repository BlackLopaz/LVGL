/**
 * @file RaceScreen_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "RaceScreen_gen.h"
#include "../ui.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/***********************
 *  STATIC VARIABLES
 **********************/

/***********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

lv_obj_t * RaceScreen_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    if (RaceScreen == NULL) RaceScreen = lv_obj_create(NULL);
    lv_obj_t * lv_obj_0 = RaceScreen;
    lv_obj_set_name_static(lv_obj_0, "RaceScreen_#");

    lv_obj_t * ConfigurableButton_0 = ConfigurableButton_create(lv_obj_0, 12, 10, "Activate DRS", lv_color_hex3(0xfff), RB_RED);
    lv_obj_set_align(ConfigurableButton_0, LV_ALIGN_TOP_MID);
    
    lv_obj_t * Tile_0 = Tile_create(lv_obj_0, 40, "Speed (Km/h)");
    lv_obj_set_width(Tile_0, 100);
    lv_obj_set_height(Tile_0, 100);
    
    GridScreen_create(lv_obj_0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

