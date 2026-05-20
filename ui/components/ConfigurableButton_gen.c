/**
 * @file ConfigurableButton_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "ConfigurableButton_gen.h"
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

lv_obj_t * ConfigurableButton_create(lv_obj_t * parent, int32_t x, int32_t y, const char * text, lv_color_t text_colour, lv_color_t bg_colour)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_base;
    static lv_style_t style_pressed;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&style_base);
        lv_style_set_bg_opa(&style_base, (255 * 100 / 100));
        lv_style_set_bg_color(&style_base, bg_colour);
        lv_style_set_width(&style_base, LV_SIZE_CONTENT);
        lv_style_set_height(&style_base, LV_SIZE_CONTENT);
        lv_style_set_radius(&style_base, 5);
        lv_style_set_pad_hor(&style_base, 0);
        lv_style_set_pad_ver(&style_base, 0);
        lv_style_set_text_color(&style_base, text_colour);

        lv_style_init(&style_pressed);
        lv_style_set_recolor(&style_pressed, text_colour);
        lv_style_set_recolor_opa(&style_pressed, (255 * 20 / 100));

        style_inited = true;
    }

    lv_obj_t * lv_button_0 = lv_button_create(parent);
    lv_obj_set_name_static(lv_button_0, "ConfigurableButton_#");
    lv_obj_set_style_bg_color(lv_button_0, bg_colour, 0);

    lv_obj_add_style(lv_button_0, &style_base, 0);
    lv_obj_add_style(lv_button_0, &style_pressed, LV_STATE_PRESSED);
    lv_obj_t * lv_label_0 = lv_label_create(lv_button_0);
    lv_label_set_text(lv_label_0, text);
    lv_obj_set_align(lv_label_0, LV_ALIGN_CENTER);
    lv_obj_set_style_text_color(lv_label_0, text_colour, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_button_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

