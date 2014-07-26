# winpager #

A dynamic window paging system for [X.Org](http://www.x.org/wiki).

## Description ##

This tool allows windows to have numbers assigned to them, which can then be used to switch to the desktop containing the assigned window and focus on it.

To make best use of this script, keyboard shortcuts should be assigned to the `winpager set` and `winpager get` for a range of numbers, as well as possibly ones for `winpager clear` and `winpager toggle`.

## Requirements ##

* [wmctrl](http://tomas.styblo.name/wmctrl)
* [xwininfo](http://www.x.org/wiki)
* [GNU Bash](http://www.gnu.org/software/bash)
* [GNU Make](http://www.gnu.org/software/make)
* [GCC](https://gcc.gnu.org)
* [libx11](http://www.x.org/wiki) (X11/Xlib.h)

## Build and Install ##

1. To build the binary, ensure all the dependencies are installed and run: `make`.
2. The `DESTDIR` and `PREFIX` variables can optionally be set to configure the base install directory and prefix, and installing can be done by running: `make DESTDIR=/ PREFIX=/usr install`.

## Usage ##

`winpager [command] {num(s)}`

### Commands ###

* `winpager set {num}`:	assign a window to a pager {num}
* `winpager get {num}`: go to its desktop and focus {num}
* `winpager toggle`: toggle focus between {num} 1 and 2
* `winpager toggle {num} {num}`: toggle {num} and {num}
* `winpager unset {num}`: unassign the window from pager {num}
* `winpager clear`: remove all pager assignments
* `winpager help`: show this help output

## CREDITS ##

Written by Kevin MacMartin:

* [GitHub Projects](https://github.com/prurigro)
* [Arch Linux AUR Packages](https://aur.archlinux.org/packages/?SeB=m&K=prurigro)

## LICENSE ##

Licensed under the [MIT license](http://opensource.org/licenses/MIT).
