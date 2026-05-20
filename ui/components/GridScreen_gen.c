/**
 * @file GridScreen_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "GridScreen_gen.h"
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

lv_obj_t * GridScreen_create(lv_obj_t * parent)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_grid;
    static lv_style_t cell_0_0;
    static lv_style_t cell_1_0;
    static lv_style_t cell_0_1;
    static lv_style_t cell_1_1;
    static lv_style_t debug_red;
    static lv_style_t debug_green;
    static lv_style_t debug_blue;
    static lv_style_t debug_yellow;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&style_grid);
        lv_style_set_layout(&style_grid, LV_LAYOUT_FLEX);
        lv_style_set_flex_flow(&style_grid, LV_FLEX_FLOW_ROW_WRAP);

        lv_style_init(&cell_0_0);
        lv_style_set_grid_cell_column_pos(&cell_0_0, 0);
        lv_style_set_grid_cell_row_pos(&cell_0_0, 0);

        lv_style_init(&cell_1_0);
        lv_style_set_grid_cell_column_pos(&cell_1_0, 1);
        lv_style_set_grid_cell_row_pos(&cell_1_0, 0);

        lv_style_init(&cell_0_1);
        lv_style_set_grid_cell_column_pos(&cell_0_1, 0);
        lv_style_set_grid_cell_row_pos(&cell_0_1, 1);

        lv_style_init(&cell_1_1);
        lv_style_set_grid_cell_column_pos(&cell_1_1, 1);
        lv_style_set_grid_cell_row_pos(&cell_1_1, 1);

        lv_style_init(&debug_red);
        lv_style_set_bg_color(&debug_red, lv_color_hex(0xFF0000));

        lv_style_init(&debug_green);
        lv_style_set_bg_color(&debug_green, lv_color_hex(0x00FF00));

        lv_style_init(&debug_blue);
        lv_style_set_bg_color(&debug_blue, lv_color_hex(0x0000FF));

        lv_style_init(&debug_yellow);
        lv_style_set_bg_color(&debug_yellow, lv_color_hex(0xFFFF00));

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(parent);
    lv_obj_set_name_static(lv_obj_0, "GridScreen_#");

    lv_obj_t * lv_obj_1 = lv_obj_create(lv_obj_0);
    lv_obj_set_width(lv_obj_1, 240);
    lv_obj_set_height(lv_obj_1, 320);
    lv_obj_add_style(lv_obj_1, &style_grid, 0);
    lv_obj_t * lv_obj_2 = lv_obj_create(lv_obj_1);
    lv_obj_set_width(lv_obj_2, lv_pct(100));
    lv_obj_set_height(lv_obj_2, lv_pct(100));
    Tile_create(lv_obj_2, 10, "Temp");
    
    lv_obj_add_style(lv_obj_2, &debug_red, 0);
    
    lv_obj_t * lv_obj_3 = lv_obj_create(lv_obj_1);
    lv_obj_set_width(lv_obj_3, lv_pct(100));
    lv_obj_set_height(lv_obj_3, lv_pct(100));
    Tile_create(lv_obj_3, 20, "Speed");
    
    lv_obj_add_style(lv_obj_3, &debug_green, 0);
    
    lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_1);
    lv_obj_set_width(lv_obj_4, lv_pct(100));
    lv_obj_set_height(lv_obj_4, lv_pct(100));
    Tile_create(lv_obj_4, 30, "RPM");
    
    lv_obj_add_style(lv_obj_4, &debug_blue, 0);
    
    lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_1);
    lv_obj_set_width(lv_obj_5, lv_pct(100));
    lv_obj_set_height(lv_obj_5, lv_pct(100));
    Tile_create(lv_obj_5, 40, "Voltage");
    
    lv_obj_add_style(lv_obj_5, &debug_yellow, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

