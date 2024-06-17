#include "custom_macros.h"

void js_arrow_function_macro(void) {
    SEND_STRING(
        "const aF = () => {\n" \
        SS_TAP(X_UP) \
        SS_TAP(X_RIGHT)SS_TAP(X_RIGHT)SS_TAP(X_RIGHT)SS_TAP(X_RIGHT) \
        SS_DOWN(X_LSFT)SS_TAP(X_RIGHT)SS_TAP(X_RIGHT)SS_UP(X_LSFT)
    );
}

void rxjs_pipe_subscribe_macro(void) {
    SEND_STRING(
        ".pipe(\n" \
        SS_TAP(X_DOWN)SS_TAP(X_END)
        ".subscribe()\n" \
        SS_TAP(X_UP)SS_TAP(X_UP)SS_TAP(X_TAB)
    );
}
