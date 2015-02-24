# WinPager #

A dynamic window paging system for [X.Org](http://www.x.org/wiki).

## Description ##

This tool allows windows to have numbers assigned to them, which can then be used to switch to the desktop containing the assigned window and focus on it.

To make best use of this script, keyboard shortcuts should be assigned to the `winpager set` and `winpager get` for a range of numbers, as well as possibly ones for `winpager clear` and `winpager toggle`.

## Requirements ##

* [wmctrl](http://tomas.styblo.name/wmctrl)
* [xprop](http://www.x.org/wiki)
* [xwininfo](http://www.x.org/wiki)
* [bash](http://www.gnu.org/software/bash)

### Optional ###

* [make](http://www.gnu.org/software/make) (facilitate install)

## Install ##

The `DESTDIR` and `PREFIX` variables can optionally be set to configure the base install directory and prefix, and installing can be done by running: `make DESTDIR=/ PREFIX=/usr install`.

## Usage ##

`winpager [COMMAND] [ARGS]`

### Commands ###

* `winpager --set [NUM]`,  `winpager set [NUM]`: assign a window to a pager **[NUM]**
* `winpager --get [NUM]`, `winpager get [NUM]`: go to its desktop and focus **[NUM]**
* `winpager --toggle`, `winpager toggle`: toggle focus between windows 1 and 2
* `winpager --toggle [NUM1] [NUM2]`, `winpager toggle [NUM] [NUM]`: toggle between windows **[NUM1]** and **[NUM2]**
* `winpager --unset [NUM]`, `winpager unset [NUM]`: unset the window from pager **[NUM]**
* `winpager --clear`, `winpager clear`: remove all assigned windows from the pager
* `winpager --help`, `winpager help`: show the help

## CREDITS ##

Written by Kevin MacMartin:

* [GitHub Projects](https://github.com/prurigro)
* [Arch Linux AUR Packages](https://aur.archlinux.org/packages/?SeB=m&K=prurigro)

## LICENSE ##

Licensed under the [MIT license](http://opensource.org/licenses/MIT).
