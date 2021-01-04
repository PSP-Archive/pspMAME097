Machine translation of the original readme:

```
================================================
  PSP Development Kindergarten http://ameblo.jp/pspdevblog/ (Main Library) (Blog)
  PSP development kindergarten http://psp.nukenin.jp/ (annex) (HP)
================================================

namco 'system NA1' & namco 'system NA2' (namcoNA_A10)
taito Asuka & taito 'X system' (taitoAX_A05)
namco 'system 86' (namco86_A03)
irem 'm72' (irem_m72_A02)

... ... emulator from MAME.

This is an experiment. pspMAME097src061105.zip"(2006-11/05, 20:30 version)
This is an experiment. This is GPL2. The original author and I are not related.

Please do not contact the original author.
================================================
Development will be suspended for a while. Please try to improve it.
It would be great if you could give me feedback.
I won't update this site for at least 2006.
================================================
Execution
The binary is a separate file.
If you put a 480x272x24bpp file named menu.bmp (uncompressed BMP format. 383kBytes) 
in the same place as EBOOT.PBP, it will become your wallpaper.
If you put it in the same place as EBOOT.PBP, it will become a wallpaper.
================================================
How to exit
It should be possible to quit with [start]+[L]+[R] compatible with pmame04, but it is unstable.
While pausing with [R], select [End This Emulator] from the MAME menu with [L], and then press [R].
Then press [R] to end the game. However, I sometimes die even with this method.
I don't know why.
================================================
For sudden deaths, please use "long press of the power switch".
I mean, that's the level.

This "sudden death" is not a "memory violation" since the PSP doesn't seem to "crash".
It seems to be an "infinite loop". If it wasn't for this bug, it would be pretty good... orz

Note: Memory violation: If it is a memory violation, it should be a forced power off.
================================================
Instructions
The manual is in each binary file.
Readme_pmame04.txt (original manual. (Reference)
================================================
Development
If you compile it as is, namcoNA_A10 will be created.

The makefile is

#TARGET = namcoNA
#TARGET = taitoAX
#TARGET = m72
 TARGET = namcos86

#################↑This is where you change it.

If you compile it, you will get namcos86_A03.

Environment
GCC4.0.2(xorloser) Unofficial developmenting tools 
http://www.xorloser.com/ GCC4.0.2(xorloser)[PSPDev for Win32 / 2nd June 2006] for PSP.
Available from: 
================================================
```
