/* MEP IDP registers

THIS FILE IS MACHINE GENERATED WITH CGEN.

Copyright 1996-2010 Free Software Foundation, Inc.

This file is part of the GNU Binutils and/or GDB, the GNU debugger.

   This file is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3, or (at your option)
   any later version.

   It is distributed in the hope that it will be useful, but WITHOUT
   ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
   or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public
   License for more details.

   You should have received a copy of the GNU General Public License along
   with this program; if not, write to the Free Software Foundation, Inc.,
   51 Franklin Street - Fifth Floor, Boston, MA 02110-1301, USA.

*/

/* This file is only to be included by whoever defines LPH! */

static const char *const RegNames[] =
{
  "h-pc", 
  "$0", 
  "$1", 
  "$2", 
  "$3", 
  "$4", 
  "$5", 
  "$6", 
  "$7", 
  "$8", 
  "$9", 
  "$10", 
  "$11", 
  "$12", 
  "$tp", 
  "$gp", 
  "$sp", 
  "$pc", 
  "$lp", 
  "$sar", 
  "$h-csr-3", 
  "$rpb", 
  "$rpe", 
  "$rpc", 
  "$hi", 
  "$lo", 
  "$h-csr-9", 
  "$h-csr-10", 
  "$h-csr-11", 
  "$mb0", 
  "$me0", 
  "$mb1", 
  "$me1", 
  "$psw", 
  "$id", 
  "$tmp", 
  "$epc", 
  "$exc", 
  "$cfg", 
  "$vid", 
  "$npc", 
  "$dbg", 
  "$depc", 
  "$opt", 
  "$rcfg", 
  "$ccfg", 
  "$h-csr-29", 
  "$h-csr-30", 
  "$h-csr-31", 
  "$c0", 
  "$c1", 
  "$c2", 
  "$c3", 
  "$c4", 
  "$c5", 
  "$c6", 
  "$c7", 
  "$c8", 
  "$c9", 
  "$c10", 
  "$c11", 
  "$c12", 
  "$c13", 
  "$c14", 
  "$c15", 
  "$c16", 
  "$c17", 
  "$c18", 
  "$c19", 
  "$c20", 
  "$c21", 
  "$c22", 
  "$c23", 
  "$c24", 
  "$c25", 
  "$c26", 
  "$c27", 
  "$c28", 
  "$c29", 
  "$c30", 
  "$c31", 
  "h-cr64-w-0", 
  "h-cr64-w-1", 
  "h-cr64-w-2", 
  "h-cr64-w-3", 
  "h-cr64-w-4", 
  "h-cr64-w-5", 
  "h-cr64-w-6", 
  "h-cr64-w-7", 
  "h-cr64-w-8", 
  "h-cr64-w-9", 
  "h-cr64-w-10", 
  "h-cr64-w-11", 
  "h-cr64-w-12", 
  "h-cr64-w-13", 
  "h-cr64-w-14", 
  "h-cr64-w-15", 
  "h-cr64-w-16", 
  "h-cr64-w-17", 
  "h-cr64-w-18", 
  "h-cr64-w-19", 
  "h-cr64-w-20", 
  "h-cr64-w-21", 
  "h-cr64-w-22", 
  "h-cr64-w-23", 
  "h-cr64-w-24", 
  "h-cr64-w-25", 
  "h-cr64-w-26", 
  "h-cr64-w-27", 
  "h-cr64-w-28", 
  "h-cr64-w-29", 
  "h-cr64-w-30", 
  "h-cr64-w-31", 
  "$c0", 
  "$c1", 
  "$c2", 
  "$c3", 
  "$c4", 
  "$c5", 
  "$c6", 
  "$c7", 
  "$c8", 
  "$c9", 
  "$c10", 
  "$c11", 
  "$c12", 
  "$c13", 
  "$c14", 
  "$c15", 
  "$c16", 
  "$c17", 
  "$c18", 
  "$c19", 
  "$c20", 
  "$c21", 
  "$c22", 
  "$c23", 
  "$c24", 
  "$c25", 
  "$c26", 
  "$c27", 
  "$c28", 
  "$c29", 
  "$c30", 
  "$c31", 
  "$ccr0", 
  "$ccr1", 
  "$ccr2", 
  "$ccr3", 
  "$ccr4", 
  "$ccr5", 
  "$ccr6", 
  "$ccr7", 
  "$ccr8", 
  "$ccr9", 
  "$ccr10", 
  "$ccr11", 
  "$ccr12", 
  "$ccr13", 
  "$ccr14", 
  "$ccr15", 
  "$ccr16", 
  "$ccr17", 
  "$ccr18", 
  "$ccr19", 
  "$ccr20", 
  "$ccr21", 
  "$ccr22", 
  "$ccr23", 
  "$ccr24", 
  "$ccr25", 
  "$ccr26", 
  "$ccr27", 
  "$ccr28", 
  "$ccr29", 
  "$ccr30", 
  "$ccr31", 
  "$ccr32", 
  "$ccr33", 
  "$ccr34", 
  "$ccr35", 
  "$ccr36", 
  "$ccr37", 
  "$ccr38", 
  "$ccr39", 
  "$ccr40", 
  "$ccr41", 
  "$ccr42", 
  "$ccr43", 
  "$ccr44", 
  "$ccr45", 
  "$ccr46", 
  "$ccr47", 
  "$ccr48", 
  "$ccr49", 
  "$ccr50", 
  "$ccr51", 
  "$ccr52", 
  "$ccr53", 
  "$ccr54", 
  "$ccr55", 
  "$ccr56", 
  "$ccr57", 
  "$ccr58", 
  "$ccr59", 
  "$ccr60", 
  "$ccr61", 
  "$ccr62", 
  "$ccr63", 
  "h-ccr-w-0", 
  "h-ccr-w-1", 
  "h-ccr-w-2", 
  "h-ccr-w-3", 
  "h-ccr-w-4", 
  "h-ccr-w-5", 
  "h-ccr-w-6", 
  "h-ccr-w-7", 
  "h-ccr-w-8", 
  "h-ccr-w-9", 
  "h-ccr-w-10", 
  "h-ccr-w-11", 
  "h-ccr-w-12", 
  "h-ccr-w-13", 
  "h-ccr-w-14", 
  "h-ccr-w-15", 
  "h-ccr-w-16", 
  "h-ccr-w-17", 
  "h-ccr-w-18", 
  "h-ccr-w-19", 
  "h-ccr-w-20", 
  "h-ccr-w-21", 
  "h-ccr-w-22", 
  "h-ccr-w-23", 
  "h-ccr-w-24", 
  "h-ccr-w-25", 
  "h-ccr-w-26", 
  "h-ccr-w-27", 
  "h-ccr-w-28", 
  "h-ccr-w-29", 
  "h-ccr-w-30", 
  "h-ccr-w-31", 
  "h-ccr-w-32", 
  "h-ccr-w-33", 
  "h-ccr-w-34", 
  "h-ccr-w-35", 
  "h-ccr-w-36", 
  "h-ccr-w-37", 
  "h-ccr-w-38", 
  "h-ccr-w-39", 
  "h-ccr-w-40", 
  "h-ccr-w-41", 
  "h-ccr-w-42", 
  "h-ccr-w-43", 
  "h-ccr-w-44", 
  "h-ccr-w-45", 
  "h-ccr-w-46", 
  "h-ccr-w-47", 
  "h-ccr-w-48", 
  "h-ccr-w-49", 
  "h-ccr-w-50", 
  "h-ccr-w-51", 
  "h-ccr-w-52", 
  "h-ccr-w-53", 
  "h-ccr-w-54", 
  "h-ccr-w-55", 
  "h-ccr-w-56", 
  "h-ccr-w-57", 
  "h-ccr-w-58", 
  "h-ccr-w-59", 
  "h-ccr-w-60", 
  "h-ccr-w-61", 
  "h-ccr-w-62", 
  "h-ccr-w-63", 
  "$c0", 
  "$c1", 
  "$c2", 
  "$c3", 
  "$c4", 
  "$c5", 
  "$c6", 
  "$c7", 
  "$ch-cr-ivc2-8", 
  "$ch-cr-ivc2-9", 
  "$ch-cr-ivc2-10", 
  "$ch-cr-ivc2-11", 
  "$ch-cr-ivc2-12", 
  "$ch-cr-ivc2-13", 
  "$ch-cr-ivc2-14", 
  "$ch-cr-ivc2-15", 
  "$ch-cr-ivc2-16", 
  "$ch-cr-ivc2-17", 
  "$ch-cr-ivc2-18", 
  "$ch-cr-ivc2-19", 
  "$ch-cr-ivc2-20", 
  "$ch-cr-ivc2-21", 
  "$ch-cr-ivc2-22", 
  "$ch-cr-ivc2-23", 
  "$ch-cr-ivc2-24", 
  "$ch-cr-ivc2-25", 
  "$ch-cr-ivc2-26", 
  "$ch-cr-ivc2-27", 
  "$ch-cr-ivc2-28", 
  "$ch-cr-ivc2-29", 
  "$ch-cr-ivc2-30", 
  "$ch-cr-ivc2-31", 
  "$ch-cr-ivc2-32", 
  "$ch-cr-ivc2-33", 
  "$ch-cr-ivc2-34", 
  "$ch-cr-ivc2-35", 
  "$ch-cr-ivc2-36", 
  "$ch-cr-ivc2-37", 
  "$ch-cr-ivc2-38", 
  "$ch-cr-ivc2-39", 
  "$ch-cr-ivc2-40", 
  "$ch-cr-ivc2-41", 
  "$ch-cr-ivc2-42", 
  "$ch-cr-ivc2-43", 
  "$ch-cr-ivc2-44", 
  "$ch-cr-ivc2-45", 
  "$ch-cr-ivc2-46", 
  "$ch-cr-ivc2-47", 
  "$ch-cr-ivc2-48", 
  "$ch-cr-ivc2-49", 
  "$ch-cr-ivc2-50", 
  "$ch-cr-ivc2-51", 
  "$ch-cr-ivc2-52", 
  "$ch-cr-ivc2-53", 
  "$ch-cr-ivc2-54", 
  "$ch-cr-ivc2-55", 
  "$ch-cr-ivc2-56", 
  "$ch-cr-ivc2-57", 
  "$ch-cr-ivc2-58", 
  "$ch-cr-ivc2-59", 
  "$ch-cr-ivc2-60", 
  "$ch-cr-ivc2-61", 
  "$ch-cr-ivc2-62", 
  "$ch-cr-ivc2-63", 
  "$csar0", 
  "$cc", 
  "$ccr2", 
  "$ccr3", 
  "$cofr0", 
  "$cofr1", 
  "$cofa0", 
  "$cofa1", 
  "$ccr8", 
  "$ccr9", 
  "$ccr10", 
  "$ccr11", 
  "$ccr12", 
  "$ccr13", 
  "$ccr14", 
  "$csar1", 
  "$acc0_0", 
  "$acc0_1", 
  "$acc0_2", 
  "$acc0_3", 
  "$acc0_4", 
  "$acc0_5", 
  "$acc0_6", 
  "$acc0_7", 
  "$acc1_0", 
  "$acc1_1", 
  "$acc1_2", 
  "$acc1_3", 
  "$acc1_4", 
  "$acc1_5", 
  "$acc1_6", 
  "$acc1_7", 
};