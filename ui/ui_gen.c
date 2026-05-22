/**
 * @file ui_gen.c
 */

/*********************
 *      INCLUDES
 *********************/

#include "ui_gen.h"

#if LV_USE_XML
#endif /* LV_USE_XML */

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *  STATIC VARIABLES
 **********************/

/*----------------
 * Translations
 *----------------*/

/**********************
 *  GLOBAL VARIABLES
 **********************/

/*--------------------
 *  Permanent screens
 *-------------------*/

lv_obj_t * RaceScreen = NULL;

/*----------------
 * Fonts
 *----------------*/

lv_font_t * large_font;

/*----------------
 * Images
 *----------------*/

const void * MonsterVRedbull_data;
extern const void * MonsterVRedbull_data_data;
const void * MonsterVRedbull_file;

/*----------------
 * Global styles
 *----------------*/

/*----------------
 * Subjects
 *----------------*/

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

void ui_init_gen(const char * asset_path)
{
    char buf[256];


    /*----------------
     * Fonts
     *----------------*/

    /* create tiny ttf font "large_font" from file */
    lv_snprintf(buf, 256, "%s%s", asset_path, "fonts/Montserrat_Medium.ttf");
    large_font = lv_tiny_ttf_create_file(buf, 36);


    /*----------------
     * Images
     *----------------*/
    MonsterVRedbull_data = &MonsterVRedbull_data_data;
    lv_snprintf(buf, 256, "%s%s", asset_path, "images/MonsterVRedbullScaled.png");
    MonsterVRedbull_file = lv_strdup(buf);

    /*----------------
     * Global styles
     *----------------*/

    /*----------------
     * Subjects
     *----------------*/
    /*----------------
     * Translations
     *----------------*/

#if LV_USE_XML
    /* Register widgets */

    /* Register fonts */
    lv_xml_register_font(NULL, "large_font", large_font);

    /* Register subjects */

    /* Register callbacks */
#endif

    /* Register all the global assets so that they won't be created again when globals.xml is parsed.
     * While running in the editor skip this step to update the preview when the XML changes */
#if LV_USE_XML && !defined(LV_EDITOR_PREVIEW)
    /* Register images */
    lv_xml_register_image(NULL, "MonsterVRedbull_data", MonsterVRedbull_data);
    lv_xml_register_image(NULL, "MonsterVRedbull_file", MonsterVRedbull_file);
#endif

#if LV_USE_XML == 0
    /*--------------------
     *  Permanent screens
     *-------------------*/
    /* If XML is enabled it's assumed that the permanent screens are created
     * manaully from XML using lv_xml_create() */
    /* To allow screens to reference each other, create them all before calling the sceen create functions */
    RaceScreen = lv_obj_create(NULL);

    RaceScreen_create();
#endif
}

/* Callbacks */

/**********************
 *   STATIC FUNCTIONS
 **********************/