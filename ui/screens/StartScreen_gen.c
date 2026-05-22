/**
 * @file StartScreen_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "StartScreen_gen.h"
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

lv_obj_t * StartScreen_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    if (StartScreen == NULL) StartScreen = lv_obj_create(NULL);
    lv_obj_t * lv_obj_0 = StartScreen;
    lv_obj_set_name_static(lv_obj_0, "StartScreen_#");
    lv_obj_set_style_bg_color(lv_obj_0, BACKGROUND_DEFAULT, 0);

    lv_obj_t * lv_button_0 = lv_button_create(lv_obj_0);
    lv_obj_set_style_bg_color(lv_button_0, RB_RED, 0);
    lv_obj_set_style_align(lv_button_0, LV_ALIGN_CENTER, 0);
    lv_obj_set_width(lv_button_0, lv_pct(28));
    lv_obj_set_height(lv_button_0, lv_pct(50));
    lv_obj_set_style_radius(lv_button_0, lv_pct(100), 0);
    lv_obj_set_style_border_color(lv_button_0, lv_color_hex3(0x000), 0);
    lv_obj_set_style_border_width(lv_button_0, 10, 0);
    lv_obj_set_style_layout(lv_button_0, LV_LAYOUT_FLEX, 0);
    lv_obj_set_flex_flow(lv_button_0, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_style_flex_main_place(lv_button_0, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_flex_cross_place(lv_button_0, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_pad_row(lv_button_0, 5, 0);
    lv_obj_set_style_pad_all(lv_button_0, 60, 0);
    lv_obj_t * lv_label_0 = lv_label_create(lv_button_0);
    lv_label_set_text(lv_label_0, "Start");
    lv_obj_set_style_bg_color(lv_label_0, BACKGROUND_DEFAULT, 0);
    lv_obj_set_style_text_color(lv_label_0, lv_color_hex3(0xFFF), 0);
    lv_obj_set_style_text_font(lv_label_0, large_font, 0);
    lv_obj_set_style_text_align(lv_label_0, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_align(lv_label_0, LV_ALIGN_CENTER, 0);
    
    lv_obj_t * lv_label_1 = lv_label_create(lv_button_0);
    lv_label_set_text(lv_label_1, "Engine");
    lv_obj_set_style_bg_color(lv_label_1, BACKGROUND_DEFAULT, 0);
    lv_obj_set_style_text_color(lv_label_1, lv_color_hex3(0xFFF), 0);
    lv_obj_set_style_text_font(lv_label_1, large_font, 0);
    lv_obj_set_style_text_align(lv_label_1, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_align(lv_label_1, LV_ALIGN_CENTER, 0);
    
    lv_obj_t * lv_label_2 = lv_label_create(lv_button_0);
    lv_label_set_text(lv_label_2, "Stop");
    lv_obj_set_style_bg_color(lv_label_2, BACKGROUND_DEFAULT, 0);
    lv_obj_set_style_text_color(lv_label_2, lv_color_hex3(0xFFF), 0);
    lv_obj_set_style_text_font(lv_label_2, large_font, 0);
    lv_obj_set_style_text_align(lv_label_2, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_align(lv_label_2, LV_ALIGN_RIGHT_MID, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

