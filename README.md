# WinPager #

A dynamic window paging system for [X.Org](http://www.x.org/wiki).

## DESCRIPTION ##

This tool allows windows to have numbers assigned to them, which can then be used to switch to the desktop containing the assigned window and focus on it.

To make best use of this script, keyboard shortcuts should be assigned to the `winpager set` and `winpager get` for a range of numbers, as well as possibly ones for `winpager clear` and `winpager toggle`.

## REQUIREMENTS ##

* [wmctrl](http://tomas.styblo.name/wmctrl)
* [xprop](http://www.x.org/wiki)
* [xwininfo](http://www.x.org/wiki)
* [bash](http://www.gnu.org/software/bash)

### Optional ###

* [make](http://www.gnu.org/software/make) (facilitate install)

## INSTALL ##

The `DESTDIR` and `PREFIX` variables can optionally be set to configure the base install directory and prefix, and installing can be done by running: `make DESTDIR=/ PREFIX=/usr install`.

## USAGE ##

`winpager [COMMAND] [ARGS]`

### COMMANDS ###

* `--set    | set [NUM]`: assign a window to a pager **[NUM]**
* `--get    | winpager get [NUM]`: go to its desktop and focus **[NUM]**
* `--toggle | winpager toggle`: toggle focus between windows 1 and 2
* `--toggle | winpager toggle [NUM1] [NUM2]`: toggle between windows **[NUM1]** and **[NUM2]**
* `--unset  | winpager unset [NUM]`: unset the window from pager **[NUM]**
* `--clear  | winpager clear`: remove all assigned windows from the pager
* `--help   | winpager help`: show the help

## CREDITS ##

Written by Kevin MacMartin:

* [GitHub Projects](https://github.com/prurigro)
* [Arch Linux AUR Packages](https://aur.archlinux.org/packages/?SeB=m&K=prurigro)

## LICENSE ##

Licensed under the [MIT license](http://opensource.org/licenses/MIT).
