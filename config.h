/* See LICENSE file for copyright and license details. */

/* appearance */
static int pad = 10;
static const char *font_name = "monospace:size=12:dpi=96";
static uint32_t scheme[2] = {
	[ColFg] = 0xebdbb2ff,
	[ColBg] = 0x181716aa,
};

static int32_t width = 0;
static int32_t height = 0;
static int x = 20;
static int y = 50;

/* behavior */
static int period = 0;

/*
 * Delimeter string, encountered as a separate line in subcommand output,
 * signaling rendering buffered text and continuing with next frame.
 */
static const char delimeter[] = "\4";
