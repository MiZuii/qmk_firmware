
RGB_MATRIX_EFFECT(c_static_effect)

#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS

static bool c_static_effect(effect_params_t* params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);
    for( uint8_t i = led_min; i < led_max; i++)
    {
        rgb_matrix_set_color(i, 0xff, 0xff, i);
    }
    return rgb_matrix_check_finished_leds(led_max);
}

#endif
