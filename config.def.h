/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
static int centered = 0;                    /* -c option; centers dmenu on screen */
static int min_width = 500;                    /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Twemoji:size=9",
	"Iosevka:bold:size=9"
};

static const char col_fg[] = "#e1f3ff";
static const char col_bg[] = "#0e1418";
static const char col_primary[] = "#37b0ff";
static const char col_fgHigh[] = "#ffc978";

static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*		  fg         bg       */
	[SchemeNorm] = { col_fg, col_bg },
	[SchemeSel]  = { col_fg, col_primary },
	[SchemeSelHighlight] = { col_fgHigh, "#005577" },
	[SchemeNormHighlight] = { col_fgHigh, "#222222" },
	[SchemeOut]  = { "#000000", "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
static unsigned int lineheight = 28;         /* -h option; minimum height of a menu line     */

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/*
 * Use prefix matching by default; can be inverted with the -x flag.
 */
static int use_prefix = 1;
