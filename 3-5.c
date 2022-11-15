#include <ncurses.h>

int main()
{
    initscr();
    start_color();
    init_pair(1,COLOR_BLACK,COLOR_RED);
    init_pair(2,COLOR_YELLOW,COLOR_BLACK);
    attrset(COLOR_PAIR(1));     /* black on red */
    addstr("I am Mr. Black!\n");
    attrset(COLOR_PAIR(2));     /* yellow on black */
    move(5, 0);
    addstr("I am Mr. Yellow!\n");
    move(15, 0);
    attrset(COLOR_PAIR(1) | A_BOLD);    /* +bold */
    addstr("I'm feeling bold!\n");
    move(20, 0);
    attrset(COLOR_PAIR(2) | A_BOLD);;   /* +bold */
    addstr("Me too!");
    refresh();
    getch();

    endwin();
    return(0);
}
