/**
 * @file Tile_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "Tile_gen.h"
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

lv_obj_t * Tile_create(lv_obj_t * parent, const char * number_text, const char * text, lv_color_t text_color, lv_font_t * number_font, lv_font_t * text_font)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_tile;
    static lv_style_t style_number;
    static lv_style_t style_text;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&style_tile);
        lv_style_set_bg_opa(&style_tile, (255 * 100 / 100));
        lv_style_set_bg_color(&style_tile, BACKGROUND_DEFAULT);
        lv_style_set_radius(&style_tile, 6);
        lv_style_set_pad_all(&style_tile, 6);
        lv_style_set_layout(&style_tile, LV_LAYOUT_FLEX);
        lv_style_set_flex_flow(&style_tile, LV_FLEX_FLOW_COLUMN);
        lv_style_set_flex_main_place(&style_tile, LV_FLEX_ALIGN_CENTER);
        lv_style_set_flex_cross_place(&style_tile, LV_FLEX_ALIGN_CENTER);
        lv_style_set_border_width(&style_tile, 5);
        lv_style_set_border_color(&style_tile, RB_RED);
        lv_style_set_pad_row(&style_tile, 2);

        lv_style_init(&style_number);
        lv_style_set_text_font(&style_number, number_font);
        lv_style_set_text_color(&style_number, lv_color_hex3(0xfff));
        lv_style_set_text_align(&style_number, LV_TEXT_ALIGN_CENTER);

        lv_style_init(&style_text);
        lv_style_set_text_font(&style_text, text_font);
        lv_style_set_text_color(&style_text, lv_color_hex3(0xfff));
        lv_style_set_text_align(&style_text, LV_TEXT_ALIGN_CENTER);

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(parent);
    lv_obj_set_name_static(lv_obj_0, "Tile_#");

    lv_obj_add_style(lv_obj_0, &style_tile, 0);
    lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
    lv_label_set_text(lv_label_0, number_text);
    lv_obj_set_width(lv_label_0, lv_pct(100));
    lv_obj_set_style_text_align(lv_label_0, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_add_style(lv_label_0, &style_number, 0);
    
    lv_obj_t * lv_label_1 = lv_label_create(lv_obj_0);
    lv_label_set_text(lv_label_1, text);
    lv_obj_set_width(lv_label_1, lv_pct(100));
    lv_obj_set_style_text_align(lv_label_1, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_add_style(lv_label_1, &style_text, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

