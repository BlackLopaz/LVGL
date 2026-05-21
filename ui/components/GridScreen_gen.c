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
        lv_style_set_layout(&style_grid, LV_LAYOUT_GRID);
        static const int32_t style_grid_grid_column_dsc_array_8[] = {LV_GRID_FR(1), LV_GRID_FR(1), LV_GRID_TEMPLATE_LAST};
        lv_style_set_grid_column_dsc_array(&style_grid, style_grid_grid_column_dsc_array_8);
        static const int32_t style_grid_grid_row_dsc_array_9[] = {LV_GRID_FR(1), LV_GRID_FR(2), LV_GRID_FR(1), LV_GRID_TEMPLATE_LAST};
        lv_style_set_grid_row_dsc_array(&style_grid, style_grid_grid_row_dsc_array_9);
        lv_style_set_width(&style_grid, lv_pct(100));
        lv_style_set_height(&style_grid, lv_pct(100));
        lv_style_set_pad_all(&style_grid, 0);
        lv_style_set_pad_column(&style_grid, 0);
        lv_style_set_pad_row(&style_grid, 0);
        lv_style_set_bg_color(&style_grid, lv_color_hex3(0x000));

        lv_style_init(&cell_0_0);
        lv_style_set_grid_cell_column_pos(&cell_0_0, 0);
        lv_style_set_grid_cell_row_pos(&cell_0_0, 0);
        lv_style_set_grid_cell_x_align(&cell_0_0, LV_GRID_ALIGN_STRETCH);
        lv_style_set_grid_cell_y_align(&cell_0_0, LV_GRID_ALIGN_STRETCH);

        lv_style_init(&cell_1_0);
        lv_style_set_grid_cell_column_pos(&cell_1_0, 1);
        lv_style_set_grid_cell_row_pos(&cell_1_0, 0);
        lv_style_set_grid_cell_x_align(&cell_1_0, LV_GRID_ALIGN_STRETCH);
        lv_style_set_grid_cell_y_align(&cell_1_0, LV_GRID_ALIGN_STRETCH);

        lv_style_init(&cell_0_1);
        lv_style_set_grid_cell_column_pos(&cell_0_1, 0);
        lv_style_set_grid_cell_row_pos(&cell_0_1, 1);
        lv_style_set_grid_cell_x_align(&cell_0_1, LV_GRID_ALIGN_STRETCH);
        lv_style_set_grid_cell_y_align(&cell_0_1, LV_GRID_ALIGN_STRETCH);

        lv_style_init(&cell_1_1);
        lv_style_set_grid_cell_column_pos(&cell_1_1, 1);
        lv_style_set_grid_cell_row_pos(&cell_1_1, 1);
        lv_style_set_grid_cell_x_align(&cell_1_1, LV_GRID_ALIGN_STRETCH);
        lv_style_set_grid_cell_y_align(&cell_1_1, LV_GRID_ALIGN_STRETCH);

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
    lv_obj_set_width(lv_obj_0, 1024);
    lv_obj_set_height(lv_obj_0, 600);

    lv_obj_add_style(lv_obj_0, &style_grid, LV_PART_MAIN);
    lv_obj_t * Tile_0 = Tile_create(lv_obj_0, "0:55:23", "CURRENT", lv_font_montserrat_20, lv_font_montserrat_8);
    lv_obj_set_style_grid_cell_column_pos(Tile_0, 0, 0);
    lv_obj_set_style_grid_cell_row_pos(Tile_0, 0, 0);
    lv_obj_set_style_grid_cell_x_align(Tile_0, LV_GRID_ALIGN_STRETCH, 0);
    lv_obj_set_style_grid_cell_y_align(Tile_0, LV_GRID_ALIGN_STRETCH, 0);
    
    lv_obj_t * Tile_1 = Tile_create(lv_obj_0, "1", "RED BULL", lv_font_montserrat_20, lv_font_montserrat_8);
    lv_obj_set_style_grid_cell_column_pos(Tile_1, 0, 0);
    lv_obj_set_style_grid_cell_row_pos(Tile_1, 1, 0);
    lv_obj_set_style_grid_cell_x_align(Tile_1, LV_GRID_ALIGN_STRETCH, 0);
    lv_obj_set_style_grid_cell_y_align(Tile_1, LV_GRID_ALIGN_STRETCH, 0);
    
    lv_obj_t * lv_obj_1 = lv_obj_create(lv_obj_0);
    lv_obj_set_style_grid_cell_column_pos(lv_obj_1, 1, 0);
    lv_obj_set_style_grid_cell_row_pos(lv_obj_1, 0, 0);
    lv_obj_set_style_grid_cell_x_align(lv_obj_1, LV_GRID_ALIGN_STRETCH, 0);
    lv_obj_set_style_grid_cell_y_align(lv_obj_1, LV_GRID_ALIGN_STRETCH, 0);
    lv_obj_set_style_bg_color(lv_obj_1, lv_color_hex3(0x000), 0);
    lv_obj_set_style_border_width(lv_obj_1, 5, 0);
    lv_obj_set_style_border_color(lv_obj_1, lv_color_hex3(0x000), 0);
    lv_obj_t * lv_obj_2 = lv_obj_create(lv_obj_1);
    lv_obj_set_style_layout(lv_obj_2, LV_LAYOUT_GRID, 0);
    static const int32_t lv_obj_2_style_grid_column_dsc_array_0[] = {LV_GRID_FR(1), LV_GRID_FR(1), LV_GRID_TEMPLATE_LAST};
    lv_obj_set_style_grid_column_dsc_array(lv_obj_2, lv_obj_2_style_grid_column_dsc_array_0, 0);
    static const int32_t lv_obj_2_style_grid_row_dsc_array_1[] = {LV_GRID_FR(1), LV_GRID_TEMPLATE_LAST};
    lv_obj_set_style_grid_row_dsc_array(lv_obj_2, lv_obj_2_style_grid_row_dsc_array_1, 0);
    lv_obj_set_width(lv_obj_2, lv_pct(100));
    lv_obj_set_height(lv_obj_2, lv_pct(100));
    lv_obj_set_style_bg_color(lv_obj_2, lv_color_hex3(0x000), 0);
    lv_obj_set_style_border_color(lv_obj_2, lv_color_hex3(0x000), 0);
    lv_obj_t * lv_button_0 = lv_button_create(lv_obj_2);
    lv_obj_set_style_bg_color(lv_button_0, RB_RED, 0);
    lv_obj_set_style_grid_cell_column_pos(lv_button_0, 0, 0);
    lv_obj_set_style_grid_cell_row_pos(lv_button_0, 0, 0);
    lv_obj_set_style_grid_cell_x_align(lv_button_0, LV_GRID_ALIGN_CENTER, 0);
    lv_obj_set_style_grid_cell_y_align(lv_button_0, LV_GRID_ALIGN_CENTER, 0);
    lv_obj_t * lv_label_0 = lv_label_create(lv_button_0);
    lv_label_set_text(lv_label_0, "Activate DRS");
    lv_obj_set_style_bg_color(lv_label_0, lv_color_hex3(0x000), 0);
    lv_obj_set_style_text_color(lv_label_0, lv_color_hex3(0xFFF), 0);
    
    lv_obj_t * lv_image_0 = lv_image_create(lv_obj_2);
    lv_obj_set_style_grid_cell_column_pos(lv_image_0, 1, 0);
    lv_obj_set_style_grid_cell_row_pos(lv_image_0, 0, 0);
    lv_obj_set_style_grid_cell_x_align(lv_image_0, LV_GRID_ALIGN_STRETCH, 0);
    lv_obj_set_style_grid_cell_y_align(lv_image_0, LV_GRID_ALIGN_STRETCH, 0);
    lv_image_set_scale_x(lv_image_0, 85);
    lv_image_set_scale_y(lv_image_0, 85);
    lv_image_set_src(lv_image_0, MonsterVRedbull_file);
    
    lv_obj_t * lv_obj_3 = lv_obj_create(lv_obj_0);
    lv_obj_set_style_grid_cell_column_pos(lv_obj_3, 1, 0);
    lv_obj_set_style_grid_cell_row_pos(lv_obj_3, 1, 0);
    lv_obj_set_style_grid_cell_x_align(lv_obj_3, LV_GRID_ALIGN_STRETCH, 0);
    lv_obj_set_style_grid_cell_y_align(lv_obj_3, LV_GRID_ALIGN_STRETCH, 0);
    lv_obj_set_style_bg_color(lv_obj_3, lv_color_hex3(0x000), 0);
    lv_obj_set_style_border_color(lv_obj_3, lv_color_hex3(0x000), 0);
    lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_3);
    lv_obj_set_style_layout(lv_obj_4, LV_LAYOUT_GRID, 0);
    static const int32_t lv_obj_4_style_grid_column_dsc_array_2[] = {LV_GRID_FR(1), LV_GRID_TEMPLATE_LAST};
    lv_obj_set_style_grid_column_dsc_array(lv_obj_4, lv_obj_4_style_grid_column_dsc_array_2, 0);
    static const int32_t lv_obj_4_style_grid_row_dsc_array_3[] = {LV_GRID_FR(1), LV_GRID_FR(1), LV_GRID_TEMPLATE_LAST};
    lv_obj_set_style_grid_row_dsc_array(lv_obj_4, lv_obj_4_style_grid_row_dsc_array_3, 0);
    lv_obj_set_width(lv_obj_4, lv_pct(100));
    lv_obj_set_height(lv_obj_4, lv_pct(100));
    lv_obj_set_style_bg_color(lv_obj_4, lv_color_hex3(0x000), 0);
    lv_obj_set_style_border_color(lv_obj_4, lv_color_hex3(0x000), 0);
    lv_obj_t * Tile_2 = Tile_create(lv_obj_4, "1:36:43", "BEST LAP", lv_font_montserrat_20, lv_font_montserrat_8);
    lv_obj_set_style_grid_cell_column_pos(Tile_2, 0, 0);
    lv_obj_set_style_grid_cell_row_pos(Tile_2, 0, 0);
    lv_obj_set_style_grid_cell_x_align(Tile_2, LV_GRID_ALIGN_STRETCH, 0);
    lv_obj_set_style_grid_cell_y_align(Tile_2, LV_GRID_ALIGN_STRETCH, 0);
    
    lv_obj_t * Tile_3 = Tile_create(lv_obj_4, "9888", "RPM", lv_font_montserrat_20, lv_font_montserrat_8);
    lv_obj_set_style_grid_cell_column_pos(Tile_3, 0, 0);
    lv_obj_set_style_grid_cell_row_pos(Tile_3, 1, 0);
    lv_obj_set_style_grid_cell_x_align(Tile_3, LV_GRID_ALIGN_STRETCH, 0);
    lv_obj_set_style_grid_cell_y_align(Tile_3, LV_GRID_ALIGN_STRETCH, 0);
    
    lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_0);
    lv_obj_set_style_grid_cell_column_pos(lv_obj_5, 0, 0);
    lv_obj_set_style_grid_cell_row_pos(lv_obj_5, 2, 0);
    lv_obj_set_style_grid_cell_x_align(lv_obj_5, LV_GRID_ALIGN_STRETCH, 0);
    lv_obj_set_style_grid_cell_y_align(lv_obj_5, LV_GRID_ALIGN_STRETCH, 0);
    lv_obj_set_style_bg_color(lv_obj_5, lv_color_hex3(0x000), 0);
    lv_obj_set_style_border_color(lv_obj_5, lv_color_hex3(0x000), 0);
    lv_obj_t * lv_obj_6 = lv_obj_create(lv_obj_5);
    lv_obj_set_style_layout(lv_obj_6, LV_LAYOUT_GRID, 0);
    static const int32_t lv_obj_6_style_grid_column_dsc_array_4[] = {LV_GRID_FR(1), LV_GRID_FR(1), LV_GRID_TEMPLATE_LAST};
    lv_obj_set_style_grid_column_dsc_array(lv_obj_6, lv_obj_6_style_grid_column_dsc_array_4, 0);
    static const int32_t lv_obj_6_style_grid_row_dsc_array_5[] = {LV_GRID_FR(1), LV_GRID_TEMPLATE_LAST};
    lv_obj_set_style_grid_row_dsc_array(lv_obj_6, lv_obj_6_style_grid_row_dsc_array_5, 0);
    lv_obj_set_width(lv_obj_6, lv_pct(100));
    lv_obj_set_height(lv_obj_6, lv_pct(100));
    lv_obj_set_style_bg_color(lv_obj_6, lv_color_hex3(0x000), 0);
    lv_obj_set_style_border_color(lv_obj_6, lv_color_hex3(0x000), 0);
    lv_obj_t * Tile_4 = Tile_create(lv_obj_6, "77", "SPEED", lv_font_montserrat_20, lv_font_montserrat_8);
    lv_obj_set_style_grid_cell_column_pos(Tile_4, 0, 0);
    lv_obj_set_style_grid_cell_row_pos(Tile_4, 0, 0);
    lv_obj_set_style_grid_cell_x_align(Tile_4, LV_GRID_ALIGN_STRETCH, 0);
    lv_obj_set_style_grid_cell_y_align(Tile_4, LV_GRID_ALIGN_STRETCH, 0);
    
    lv_obj_t * Tile_5 = Tile_create(lv_obj_6, "48.1", "FUEL", lv_font_montserrat_20, lv_font_montserrat_8);
    lv_obj_set_style_grid_cell_column_pos(Tile_5, 1, 0);
    lv_obj_set_style_grid_cell_row_pos(Tile_5, 0, 0);
    lv_obj_set_style_grid_cell_x_align(Tile_5, LV_GRID_ALIGN_STRETCH, 0);
    lv_obj_set_style_grid_cell_y_align(Tile_5, LV_GRID_ALIGN_STRETCH, 0);
    
    lv_obj_t * lv_obj_7 = lv_obj_create(lv_obj_0);
    lv_obj_set_style_grid_cell_column_pos(lv_obj_7, 1, 0);
    lv_obj_set_style_grid_cell_row_pos(lv_obj_7, 2, 0);
    lv_obj_set_style_grid_cell_x_align(lv_obj_7, LV_GRID_ALIGN_STRETCH, 0);
    lv_obj_set_style_grid_cell_y_align(lv_obj_7, LV_GRID_ALIGN_STRETCH, 0);
    lv_obj_set_style_bg_color(lv_obj_7, lv_color_hex3(0x000), 0);
    lv_obj_set_style_border_color(lv_obj_7, lv_color_hex3(0x000), 0);
    lv_obj_t * lv_obj_8 = lv_obj_create(lv_obj_7);
    lv_obj_set_style_layout(lv_obj_8, LV_LAYOUT_GRID, 0);
    static const int32_t lv_obj_8_style_grid_column_dsc_array_6[] = {LV_GRID_FR(1), LV_GRID_FR(1), LV_GRID_TEMPLATE_LAST};
    lv_obj_set_style_grid_column_dsc_array(lv_obj_8, lv_obj_8_style_grid_column_dsc_array_6, 0);
    static const int32_t lv_obj_8_style_grid_row_dsc_array_7[] = {LV_GRID_FR(1), LV_GRID_TEMPLATE_LAST};
    lv_obj_set_style_grid_row_dsc_array(lv_obj_8, lv_obj_8_style_grid_row_dsc_array_7, 0);
    lv_obj_set_width(lv_obj_8, lv_pct(100));
    lv_obj_set_height(lv_obj_8, lv_pct(100));
    lv_obj_set_style_bg_color(lv_obj_8, lv_color_hex3(0x000), 0);
    lv_obj_set_style_border_color(lv_obj_8, lv_color_hex3(0x000), 0);
    lv_obj_t * Tile_6 = Tile_create(lv_obj_8, "1", "POS", lv_font_montserrat_20, lv_font_montserrat_8);
    lv_obj_set_style_grid_cell_column_pos(Tile_6, 0, 0);
    lv_obj_set_style_grid_cell_row_pos(Tile_6, 0, 0);
    lv_obj_set_style_grid_cell_x_align(Tile_6, LV_GRID_ALIGN_STRETCH, 0);
    lv_obj_set_style_grid_cell_y_align(Tile_6, LV_GRID_ALIGN_STRETCH, 0);
    
    lv_obj_t * Tile_7 = Tile_create(lv_obj_8, "56", "LAP", lv_font_montserrat_20, lv_font_montserrat_8);
    lv_obj_set_style_grid_cell_column_pos(Tile_7, 1, 0);
    lv_obj_set_style_grid_cell_row_pos(Tile_7, 0, 0);
    lv_obj_set_style_grid_cell_x_align(Tile_7, LV_GRID_ALIGN_STRETCH, 0);
    lv_obj_set_style_grid_cell_y_align(Tile_7, LV_GRID_ALIGN_STRETCH, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

