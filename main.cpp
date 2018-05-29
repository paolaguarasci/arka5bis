#include <stdio.h>
#include <allegro5/allegro.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>


int main(int argc, char **argv){ // vuole per forza i parametri
    ALLEGRO_DISPLAY *display = NULL;
    if(!al_init()) {
        fprintf(stderr, "failed to initialize allegro!\n");
        return -1;
    }
    display = al_create_display(640, 480);
    if(!display) {
        fprintf(stderr, "failed to create display!\n");
        return -1;
    }

    

    // al_clear_to_color(al_map_rgb(255,0,0));
    // al_flip_display();

    al_init_font_addon();
    al_init_ttf_addon();

    ALLEGRO_FONT *font24 = al_load_font("arial.tft", 24, 0);
    ALLEGRO_FONT *font36 = al_load_font("arial.tft", 36, 0);
    ALLEGRO_FONT *font12 = al_load_font("arial.tft", 12, 0);

    al_clear_to_color(al_map_rgb(255,255,255));
    // ALLEGRO_COLOR fontColor = al_map_rgb_f(200, 230, 0);

    al_draw_text(font24, al_map_rgb(0,255,255) , 50, 50, 0, "Hello world, Allegro!");

    al_rest(10.0);
    al_destroy_display(display);
    return 0;
}
