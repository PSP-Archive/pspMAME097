/*********************************************************************

  usrintrf.h

  Functions used to handle MAME's crude user interface.

*********************************************************************/

#ifndef USRINTRF_H
#define USRINTRF_H

struct MEMCARDinterface
{
	int (*create)(int);
	int (*load)(int);
	void (*save)(void);
	void (*eject)(void);
};
extern struct MEMCARDinterface memcard_intf;

extern int	mcd_action;
extern int	mcd_number;
extern int	memcard_status;
extern int	memcard_number;
extern int	memcard_manager;

#define init_memcard() memset(&memcard_intf, 0, sizeof(struct MEMCARDinterface))

struct DisplayText
{
	const char *text;	/* 0 marks the end of the array */
	int color;	/* see #defines below */
	int x;
	int y;
};

#define UI_COLOR_NORMAL 0	/* white on black text */
#define UI_COLOR_INVERSE 1	/* black on white text */

#define SEL_BITS 12		/* main menu selection mask */
#define SEL_BITS2 4		/* submenu selection masks */
#define SEL_MASK ((1<<SEL_BITS)-1)
#define SEL_MASK2 ((1<<SEL_BITS2)-1)

extern UINT8 ui_dirty;

struct GfxElement *builduifont(void);
void pick_uifont_colors(void);
void displaytext(const struct DisplayText *dt);

void ui_drawchar(int ch, int color, int sx, int sy);
void ui_text(const char *buf,int x,int y);
void ui_drawbox(int leftx,int topy,int width,int height);
void ui_displaymessagewindow(const char *text);
void ui_displaymenu(const char **items,const char **subitems,char *flag,int selected,int arrowize_subitem);
void ui_display_fps(void);
int showcopyright(void);
int showgamewarnings(void);
int showgameinfo(void);
void set_ui_visarea (int xmin, int ymin, int xmax, int ymax);

void init_user_interface(void);
int handle_user_interface(void/*struct mame_bitmap *bitmap*/);

void ui_show_fps_temp(double seconds);
void ui_show_fps_set(int show);
int ui_show_fps_get(void);

void ui_show_profiler_set(int show);
int ui_show_profiler_get(void);

int onscrd_active(void);
int setup_active(void);

#if defined(__sgi) && ! defined(MESS)
int is_game_paused(void);
#endif

void switch_ui_orientation(void);
void switch_debugger_orientation(void);
void switch_true_orientation(void);

#ifdef __GNUC__
void CLIB_DECL usrintf_showmessage(const char *text,...)
      __attribute__ ((format (printf, 1, 2)));

void CLIB_DECL usrintf_showmessage_secs(int seconds, const char *text,...)
      __attribute__ ((format (printf, 2, 3)));
#else
void CLIB_DECL usrintf_showmessage(const char *text,...);
void CLIB_DECL usrintf_showmessage_secs(int seconds, const char *text,...);
#endif

#endif
