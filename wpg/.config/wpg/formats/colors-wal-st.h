const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#2d3232", /* black   */
  [1] = "#0a669f", /* red     */
  [2] = "#0b4371", /* green   */
  [3] = "#e4a130", /* yellow  */
  [4] = "#e95365", /* blue    */
  [5] = "#6d9516", /* magenta */
  [6] = "#a63226", /* cyan    */
  [7] = "#d1d099", /* white   */

  /* 8 bright colors */
  [8]  = "#515b5b",  /* black   */
  [9]  = "#0187d9",  /* red     */
  [10] = "#06579b", /* green   */
  [11] = "#ffd52c", /* yellow  */
  [12] = "#ff5773", /* blue    */
  [13] = "#91cc11", /* magenta */
  [14] = "#e53624", /* cyan    */
  [15] = "#ffffcb", /* white   */

  /* special colors */
  [256] = "#2d3232", /* background */
  [257] = "#ffffcb", /* foreground */
  [258] = "#ffffcb",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
