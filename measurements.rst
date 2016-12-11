Some example results
====================

2016-12-11 1701
---------------
- Commit:1b9546e9de6a7c7a5a93ef50f841d8145f0a9036
- Author: Frank Jeschke <frank@fjes.de>
- Date:   Sun Dec 11 11:27:25 2016 +0100

System
""""""
See below `System: firefly`_.

Result
""""""
::

  Processortime: 308.910000 s
  mean: 1000004.884075 ns; min: 23065.000000 ns; max: 4921897.000000 ns
   on 20068722 iterations with 433 values larger 1500000 ns
  ./timing_a  102.97s user 205.94s system 1% cpu 5:34:28.82 total

This makes a error rate of 0.002158

Appendix
========

System: firefly
---------------

Operating System (`/proc/version`)::

  Linux version 3.2.0-4-686-pae (debian-kernel@lists.debian.org) (gcc version 4.6.3 (Debian 4.6.3-14) ) #1 SMP Debian 3.2.82-1

CPU (`/proc/cpuinfo`)::

  processor	: 0
  vendor_id	: GenuineIntel
  cpu family	: 6
  model		: 42
  model name	: Intel(R) Core(TM) i7-2600K CPU @ 3.40GHz
  stepping	: 7
  microcode	: 0x23
  cpu MHz		: 1600.000
  cache size	: 8192 KB
  physical id	: 0
  siblings	: 8
  core id		: 0
  cpu cores	: 4
  apicid		: 0
  initial apicid	: 0
  fdiv_bug	: no
  hlt_bug		: no
  f00f_bug	: no
  coma_bug	: no
  fpu		: yes
  fpu_exception	: yes
  cpuid level	: 13
  wp		: yes
  flags		: fpu vme de pse tsc msr pae mce cx8 apic sep mtrr pge mca cmov pat pse36 clflush dts acpi mmx fxsr sse sse2 ss ht tm pbe nx rdtscp lm constant_tsc arch_perfmon pebs bts xtopology nonstop_tsc aperfmperf pni pclmulqdq dtes64 monitor ds_cpl vmx est tm2 ssse3 cx16 xtpr pdcm pcid sse4_1 sse4_2 popcnt tsc_deadline_timer aes xsave avx lahf_lm ida arat epb xsaveopt pln pts dtherm tpr_shadow vnmi flexpriority ept vpid
  bogomips	: 6819.41
  clflush size	: 64
  cache_alignment	: 64
  address sizes	: 36 bits physical, 48 bits virtual
  power management:
  
  processor	: 1
  vendor_id	: GenuineIntel
  cpu family	: 6
  model		: 42
  model name	: Intel(R) Core(TM) i7-2600K CPU @ 3.40GHz
  stepping	: 7
  microcode	: 0x23
  cpu MHz		: 1600.000
  cache size	: 8192 KB
  physical id	: 0
  siblings	: 8
  core id		: 1
  cpu cores	: 4
  apicid		: 2
  initial apicid	: 2
  fdiv_bug	: no
  hlt_bug		: no
  f00f_bug	: no
  coma_bug	: no
  fpu		: yes
  fpu_exception	: yes
  cpuid level	: 13
  wp		: yes
  flags		: fpu vme de pse tsc msr pae mce cx8 apic sep mtrr pge mca cmov pat pse36 clflush dts acpi mmx fxsr sse sse2 ss ht tm pbe nx rdtscp lm constant_tsc arch_perfmon pebs bts xtopology nonstop_tsc aperfmperf pni pclmulqdq dtes64 monitor ds_cpl vmx est tm2 ssse3 cx16 xtpr pdcm pcid sse4_1 sse4_2 popcnt tsc_deadline_timer aes xsave avx lahf_lm ida arat epb xsaveopt pln pts dtherm tpr_shadow vnmi flexpriority ept vpid
  bogomips	: 6819.89
  clflush size	: 64
  cache_alignment	: 64
  address sizes	: 36 bits physical, 48 bits virtual
  power management:
  
  processor	: 2
  vendor_id	: GenuineIntel
  cpu family	: 6
  model		: 42
  model name	: Intel(R) Core(TM) i7-2600K CPU @ 3.40GHz
  stepping	: 7
  microcode	: 0x23
  cpu MHz		: 1600.000
  cache size	: 8192 KB
  physical id	: 0
  siblings	: 8
  core id		: 2
  cpu cores	: 4
  apicid		: 4
  initial apicid	: 4
  fdiv_bug	: no
  hlt_bug		: no
  f00f_bug	: no
  coma_bug	: no
  fpu		: yes
  fpu_exception	: yes
  cpuid level	: 13
  wp		: yes
  flags		: fpu vme de pse tsc msr pae mce cx8 apic sep mtrr pge mca cmov pat pse36 clflush dts acpi mmx fxsr sse sse2 ss ht tm pbe nx rdtscp lm constant_tsc arch_perfmon pebs bts xtopology nonstop_tsc aperfmperf pni pclmulqdq dtes64 monitor ds_cpl vmx est tm2 ssse3 cx16 xtpr pdcm pcid sse4_1 sse4_2 popcnt tsc_deadline_timer aes xsave avx lahf_lm ida arat epb xsaveopt pln pts dtherm tpr_shadow vnmi flexpriority ept vpid
  bogomips	: 6819.89
  clflush size	: 64
  cache_alignment	: 64
  address sizes	: 36 bits physical, 48 bits virtual
  power management:
  
  processor	: 3
  vendor_id	: GenuineIntel
  cpu family	: 6
  model		: 42
  model name	: Intel(R) Core(TM) i7-2600K CPU @ 3.40GHz
  stepping	: 7
  microcode	: 0x23
  cpu MHz		: 1600.000
  cache size	: 8192 KB
  physical id	: 0
  siblings	: 8
  core id		: 3
  cpu cores	: 4
  apicid		: 6
  initial apicid	: 6
  fdiv_bug	: no
  hlt_bug		: no
  f00f_bug	: no
  coma_bug	: no
  fpu		: yes
  fpu_exception	: yes
  cpuid level	: 13
  wp		: yes
  flags		: fpu vme de pse tsc msr pae mce cx8 apic sep mtrr pge mca cmov pat pse36 clflush dts acpi mmx fxsr sse sse2 ss ht tm pbe nx rdtscp lm constant_tsc arch_perfmon pebs bts xtopology nonstop_tsc aperfmperf pni pclmulqdq dtes64 monitor ds_cpl vmx est tm2 ssse3 cx16 xtpr pdcm pcid sse4_1 sse4_2 popcnt tsc_deadline_timer aes xsave avx lahf_lm ida arat epb xsaveopt pln pts dtherm tpr_shadow vnmi flexpriority ept vpid
  bogomips	: 6819.90
  clflush size	: 64
  cache_alignment	: 64
  address sizes	: 36 bits physical, 48 bits virtual
  power management:
  
  processor	: 4
  vendor_id	: GenuineIntel
  cpu family	: 6
  model		: 42
  model name	: Intel(R) Core(TM) i7-2600K CPU @ 3.40GHz
  stepping	: 7
  microcode	: 0x23
  cpu MHz		: 1600.000
  cache size	: 8192 KB
  physical id	: 0
  siblings	: 8
  core id		: 0
  cpu cores	: 4
  apicid		: 1
  initial apicid	: 1
  fdiv_bug	: no
  hlt_bug		: no
  f00f_bug	: no
  coma_bug	: no
  fpu		: yes
  fpu_exception	: yes
  cpuid level	: 13
  wp		: yes
  flags		: fpu vme de pse tsc msr pae mce cx8 apic sep mtrr pge mca cmov pat pse36 clflush dts acpi mmx fxsr sse sse2 ss ht tm pbe nx rdtscp lm constant_tsc arch_perfmon pebs bts xtopology nonstop_tsc aperfmperf pni pclmulqdq dtes64 monitor ds_cpl vmx est tm2 ssse3 cx16 xtpr pdcm pcid sse4_1 sse4_2 popcnt tsc_deadline_timer aes xsave avx lahf_lm ida arat epb xsaveopt pln pts dtherm tpr_shadow vnmi flexpriority ept vpid
  bogomips	: 6819.88
  clflush size	: 64
  cache_alignment	: 64
  address sizes	: 36 bits physical, 48 bits virtual
  power management:
  
  processor	: 5
  vendor_id	: GenuineIntel
  cpu family	: 6
  model		: 42
  model name	: Intel(R) Core(TM) i7-2600K CPU @ 3.40GHz
  stepping	: 7
  microcode	: 0x23
  cpu MHz		: 1600.000
  cache size	: 8192 KB
  physical id	: 0
  siblings	: 8
  core id		: 1
  cpu cores	: 4
  apicid		: 3
  initial apicid	: 3
  fdiv_bug	: no
  hlt_bug		: no
  f00f_bug	: no
  coma_bug	: no
  fpu		: yes
  fpu_exception	: yes
  cpuid level	: 13
  wp		: yes
  flags		: fpu vme de pse tsc msr pae mce cx8 apic sep mtrr pge mca cmov pat pse36 clflush dts acpi mmx fxsr sse sse2 ss ht tm pbe nx rdtscp lm constant_tsc arch_perfmon pebs bts xtopology nonstop_tsc aperfmperf pni pclmulqdq dtes64 monitor ds_cpl vmx est tm2 ssse3 cx16 xtpr pdcm pcid sse4_1 sse4_2 popcnt tsc_deadline_timer aes xsave avx lahf_lm ida arat epb xsaveopt pln pts dtherm tpr_shadow vnmi flexpriority ept vpid
  bogomips	: 6819.89
  clflush size	: 64
  cache_alignment	: 64
  address sizes	: 36 bits physical, 48 bits virtual
  power management:
  
  processor	: 6
  vendor_id	: GenuineIntel
  cpu family	: 6
  model		: 42
  model name	: Intel(R) Core(TM) i7-2600K CPU @ 3.40GHz
  stepping	: 7
  microcode	: 0x23
  cpu MHz		: 3701.000
  cache size	: 8192 KB
  physical id	: 0
  siblings	: 8
  core id		: 2
  cpu cores	: 4
  apicid		: 5
  initial apicid	: 5
  fdiv_bug	: no
  hlt_bug		: no
  f00f_bug	: no
  coma_bug	: no
  fpu		: yes
  fpu_exception	: yes
  cpuid level	: 13
  wp		: yes
  flags		: fpu vme de pse tsc msr pae mce cx8 apic sep mtrr pge mca cmov pat pse36 clflush dts acpi mmx fxsr sse sse2 ss ht tm pbe nx rdtscp lm constant_tsc arch_perfmon pebs bts xtopology nonstop_tsc aperfmperf pni pclmulqdq dtes64 monitor ds_cpl vmx est tm2 ssse3 cx16 xtpr pdcm pcid sse4_1 sse4_2 popcnt tsc_deadline_timer aes xsave avx lahf_lm ida arat epb xsaveopt pln pts dtherm tpr_shadow vnmi flexpriority ept vpid
  bogomips	: 6819.90
  clflush size	: 64
  cache_alignment	: 64
  address sizes	: 36 bits physical, 48 bits virtual
  power management:
  
  processor	: 7
  vendor_id	: GenuineIntel
  cpu family	: 6
  model		: 42
  model name	: Intel(R) Core(TM) i7-2600K CPU @ 3.40GHz
  stepping	: 7
  microcode	: 0x23
  cpu MHz		: 1600.000
  cache size	: 8192 KB
  physical id	: 0
  siblings	: 8
  core id		: 3
  cpu cores	: 4
  apicid		: 7
  initial apicid	: 7
  fdiv_bug	: no
  hlt_bug		: no
  f00f_bug	: no
  coma_bug	: no
  fpu		: yes
  fpu_exception	: yes
  cpuid level	: 13
  wp		: yes
  flags		: fpu vme de pse tsc msr pae mce cx8 apic sep mtrr pge mca cmov pat pse36 clflush dts acpi mmx fxsr sse sse2 ss ht tm pbe nx rdtscp lm constant_tsc arch_perfmon pebs bts xtopology nonstop_tsc aperfmperf pni pclmulqdq dtes64 monitor ds_cpl vmx est tm2 ssse3 cx16 xtpr pdcm pcid sse4_1 sse4_2 popcnt tsc_deadline_timer aes xsave avx lahf_lm ida arat epb xsaveopt pln pts dtherm tpr_shadow vnmi flexpriority ept vpid
  bogomips	: 6819.89
  clflush size	: 64
  cache_alignment	: 64
  address sizes	: 36 bits physical, 48 bits virtual
  power management:
  
