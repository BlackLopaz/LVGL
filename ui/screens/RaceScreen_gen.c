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

    static lv_style_t style_overall_grid;
    static lv_style_t style_left_grid;
    static lv_style_t style_tile;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&style_overall_grid);
        lv_style_set_layout(&style_overall_grid, LV_LAYOUT_GRID);
        static const int32_t style_overall_grid_grid_column_dsc_array_0[] = {LV_GRID_FR(1), LV_GRID_FR(2), LV_GRID_TEMPLATE_LAST};
        lv_style_set_grid_column_dsc_array(&style_overall_grid, style_overall_grid_grid_column_dsc_array_0);
        static const int32_t style_overall_grid_grid_row_dsc_array_1[] = {LV_GRID_FR(1), LV_GRID_TEMPLATE_LAST};
        lv_style_set_grid_row_dsc_array(&style_overall_grid, style_overall_grid_grid_row_dsc_array_1);
        lv_style_set_width(&style_overall_grid, lv_pct(100));
        lv_style_set_height(&style_overall_grid, lv_pct(100));
        lv_style_set_pad_all(&style_overall_grid, 0);
        lv_style_set_pad_column(&style_overall_grid, 0);
        lv_style_set_pad_row(&style_overall_grid, 0);
        lv_style_set_bg_color(&style_overall_grid, BACKGROUND_DEFAULT);

        lv_style_init(&style_left_grid);
        lv_style_set_layout(&style_left_grid, LV_LAYOUT_GRID);
        static const int32_t style_left_grid_grid_column_dsc_array_2[] = {LV_GRID_FR(1), LV_GRID_TEMPLATE_LAST};
        lv_style_set_grid_column_dsc_array(&style_left_grid, style_left_grid_grid_column_dsc_array_2);
        static const int32_t style_left_grid_grid_row_dsc_array_3[] = {LV_GRID_FR(1), LV_GRID_FR(4), LV_GRID_TEMPLATE_LAST};
        lv_style_set_grid_row_dsc_array(&style_left_grid, style_left_grid_grid_row_dsc_array_3);
        lv_style_set_width(&style_left_grid, lv_pct(100));
        lv_style_set_height(&style_left_grid, lv_pct(100));
        lv_style_set_pad_all(&style_left_grid, 0);
        lv_style_set_pad_column(&style_left_grid, 0);
        lv_style_set_pad_row(&style_left_grid, 0);
        lv_style_set_bg_color(&style_left_grid, BACKGROUND_DEFAULT);

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

        style_inited = true;
    }

    if (RaceScreen == NULL) RaceScreen = lv_obj_create(NULL);
    lv_obj_t * lv_obj_0 = RaceScreen;
    lv_obj_set_name_static(lv_obj_0, "RaceScreen_#");

    lv_obj_add_style(lv_obj_0, &style_overall_grid, 0);
    lv_obj_t * GridScreen_0 = GridScreen_create(lv_obj_0);
    lv_obj_set_style_grid_cell_column_pos(GridScreen_0, 1, 0);
    lv_obj_set_style_grid_cell_row_pos(GridScreen_0, 0, 0);
    lv_obj_set_style_grid_cell_x_align(GridScreen_0, LV_GRID_ALIGN_STRETCH, 0);
    lv_obj_set_style_grid_cell_y_align(GridScreen_0, LV_GRID_ALIGN_STRETCH, 0);
    lv_obj_set_style_border_color(GridScreen_0, BACKGROUND_DEFAULT, 0);
    
    lv_obj_t * lv_obj_1 = lv_obj_create(lv_obj_0);
    lv_obj_set_style_grid_cell_column_pos(lv_obj_1, 0, 0);
    lv_obj_set_style_grid_cell_row_pos(lv_obj_1, 0, 0);
    lv_obj_set_style_grid_cell_x_align(lv_obj_1, LV_GRID_ALIGN_STRETCH, 0);
    lv_obj_set_style_grid_cell_y_align(lv_obj_1, LV_GRID_ALIGN_STRETCH, 0);
    lv_obj_set_style_bg_color(lv_obj_1, BACKGROUND_DEFAULT, 0);
    lv_obj_set_style_border_color(lv_obj_1, BACKGROUND_DEFAULT, 0);
    lv_obj_add_style(lv_obj_1, &style_left_grid, 0);
    lv_obj_t * lv_button_0 = lv_button_create(lv_obj_1);
    lv_obj_set_style_bg_color(lv_button_0, RB_RED, 0);
    lv_obj_set_style_grid_cell_column_pos(lv_button_0, 0, 0);
    lv_obj_set_style_grid_cell_row_pos(lv_button_0, 0, 0);
    lv_obj_set_style_grid_cell_x_align(lv_button_0, LV_GRID_ALIGN_CENTER, 0);
    lv_obj_set_style_grid_cell_y_align(lv_button_0, LV_GRID_ALIGN_CENTER, 0);
    lv_obj_t * lv_label_0 = lv_label_create(lv_button_0);
    lv_label_set_text(lv_label_0, "Activate DJ");
    lv_obj_set_style_bg_color(lv_label_0, BACKGROUND_DEFAULT, 0);
    lv_obj_set_style_text_color(lv_label_0, lv_color_hex3(0xFFF), 0);
    
    lv_obj_t * lv_obj_2 = lv_obj_create(lv_obj_1);
    lv_obj_set_style_grid_cell_column_pos(lv_obj_2, 0, 0);
    lv_obj_set_style_grid_cell_row_pos(lv_obj_2, 1, 0);
    lv_obj_set_style_grid_cell_x_align(lv_obj_2, LV_GRID_ALIGN_STRETCH, 0);
    lv_obj_set_style_grid_cell_y_align(lv_obj_2, LV_GRID_ALIGN_STRETCH, 0);
    lv_obj_add_style(lv_obj_2, &style_tile, 0);
    lv_obj_t * lv_label_1 = lv_label_create(lv_obj_2);
    lv_label_set_text(lv_label_1, "9899");
    lv_obj_set_width(lv_label_1, lv_pct(100));
    lv_obj_set_style_text_font(lv_label_1, large_font, 0);
    lv_obj_set_style_text_color(lv_label_1, lv_color_hex3(0xfff), 0);
    lv_obj_set_style_text_align(lv_label_1, LV_TEXT_ALIGN_CENTER, 0);
    
    lv_obj_t * lv_label_2 = lv_label_create(lv_obj_2);
    lv_label_set_text(lv_label_2, "RPM");
    lv_obj_set_width(lv_label_2, lv_pct(100));
    lv_obj_set_style_text_font(lv_label_2, large_font, 0);
    lv_obj_set_style_text_color(lv_label_2, RB_RED, 0);
    lv_obj_set_style_text_align(lv_label_2, LV_TEXT_ALIGN_CENTER, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

