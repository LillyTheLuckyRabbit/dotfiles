static const char norm_fg[] = "#ffffcb";
static const char norm_bg[] = "#2d3232";
static const char norm_border[] = "#515b5b";

static const char sel_fg[] = "#ffffcb";
static const char sel_bg[] = "#0b4371";
static const char sel_border[] = "#ffffcb";

static const char urg_fg[] = "#ffffcb";
static const char urg_bg[] = "#0a669f";
static const char urg_border[] = "#0a669f";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
