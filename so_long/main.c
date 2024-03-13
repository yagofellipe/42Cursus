#include <stdlib.h>
#include "../minilibx-linux/mlx.h"

# define KEY_ESCAPE 65307
# define KEY_LEFT   65361
# define KEY_UP     65362
# define KEY_RIGHT  65363
# define KEY_DOWN   65364

typedef struct s_image {
    void    *img;
    int     width;
    int     height;
} t_image;

typedef struct s_data {
    void    *mlx;
    void    *mlx_win;
    t_image background;
    t_image mouse;
    t_image fresta;
    t_image caixote; 
    int     mouse_x;
    int     mouse_y;
    int     screen_width;
    int     screen_height;
} t_data;


int is_mouse_on_fresta(t_data *data) {
    int fresta_x = data->screen_width - data->fresta.width;
    int fresta_y = data->screen_height - data->fresta.height;

    return (data->mouse_x >= fresta_x && data->mouse_x <= fresta_x + data->fresta.width &&
            data->mouse_y >= fresta_y && data->mouse_y <= fresta_y + data->fresta.height);
}

void draw_background(t_data *data) {
    int x = 0, y = 0;
    while (y <= data->screen_height) {
        mlx_put_image_to_window(data->mlx, data->mlx_win, data->background.img, x, y);
        x += data->background.width;

        if (x >= data->screen_width) {
            x = 0;
            y += data->background.height;
        }
    }

    // Desenhe o caixote.xpm em torno da extremidade da janela
    x = 0;
    while (x < data->screen_width) {
        mlx_put_image_to_window(data->mlx, data->mlx_win, data->caixote.img, x, 0);
        mlx_put_image_to_window(data->mlx, data->mlx_win, data->caixote.img, x, data->screen_height - data->caixote.height);
        x += data->caixote.width;
    }

    y = data->caixote.height;
    while (y < data->screen_height - data->caixote.height) {
        mlx_put_image_to_window(data->mlx, data->mlx_win, data->caixote.img, 0, y);
        mlx_put_image_to_window(data->mlx, data->mlx_win, data->caixote.img, data->screen_width - data->caixote.width, y);
        y += data->caixote.height;
    }

    mlx_put_image_to_window(data->mlx, data->mlx_win, data->fresta.img, data->screen_width - data->fresta.width, data->screen_height - data->fresta.height);
}

int handle_key_press(int keycode, t_data *data) {
    int move_distance = 70; 

    if (keycode == KEY_ESCAPE) {
        mlx_destroy_window(data->mlx, data->mlx_win);
        exit(0);
    } else if (keycode == KEY_LEFT && data->mouse_x - move_distance >= 0) {
        data->mouse_x -= move_distance;
    } else if (keycode == KEY_UP && data->mouse_y - move_distance >= 0) {
        data->mouse_y -= move_distance;
    } else if (keycode == KEY_RIGHT && data->mouse_x + move_distance <= data->screen_width - data->mouse.width) {
        data->mouse_x += move_distance;
    } else if (keycode == KEY_DOWN && data->mouse_y + move_distance <= data->screen_height - data->mouse.height) {
        data->mouse_y += move_distance;
    }

    mlx_clear_window(data->mlx, data->mlx_win);
    draw_background(data);
    mlx_put_image_to_window(data->mlx, data->mlx_win, data->mouse.img, data->mouse_x, data->mouse_y);

 
    if (is_mouse_on_fresta(data)) {
        mlx_destroy_window(data->mlx, data->mlx_win);
        exit(0);
    }

    return (0);
}

int handle_window_close(t_data *data) {
    mlx_destroy_window(data->mlx, data->mlx_win);
    exit(0);
    return (0);
}

int main(void) {
    t_data  data;

    data.mlx = mlx_init();
    data.screen_width = 350;
    data.screen_height = 350;

    data.mlx_win = mlx_new_window(data.mlx, data.screen_width, data.screen_height, "Hello world!");

    data.background.img = mlx_xpm_file_to_image(data.mlx, "./xpm/piso.xpm", &(data.background.width), &(data.background.height));
    data.mouse.img = mlx_xpm_file_to_image(data.mlx, "./xpm/rato.xpm", &(data.mouse.width), &(data.mouse.height));
    data.fresta.img = mlx_xpm_file_to_image(data.mlx, "./xpm/fresta.xpm", &(data.fresta.width), &(data.fresta.height)); // Carregar a nova imagem
    data.caixote.img = mlx_xpm_file_to_image(data.mlx, "./xpm/caixote.xpm", &(data.caixote.width), &(data.caixote.height)); // Carregar a imagem do caixote
    data.mouse_x = 70;
    data.mouse_y = 70;

    draw_background(&data);
    mlx_put_image_to_window(data.mlx, data.mlx_win, data.mouse.img, data.mouse_x, data.mouse_y);

    mlx_hook(data.mlx_win, 2, 1L << 0, &handle_key_press, &data);  // Use 2 for key press events
    mlx_hook(data.mlx_win, 17, 1L << 17, &handle_window_close, &data);  // Use 17 for window close events

    mlx_loop(data.mlx);

    return (0);
}
