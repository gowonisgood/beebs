/* Copyright (C) 2020 TU Bergakademie Freiberg Karl Fessel
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v2.1. See the file LICENSE in the top level
 * directory for more details.
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
//#include <time.h>
#include <string.h>

/*provide some test program*/
/* Provide some test program */

/* Include all the wasm headers */
#include "blob/aes.wasm.h"
//#include "blob/aesxam.wasm.h"
//#include "blob/arcfour.wasm.h"
#include "blob/arraybinsearch.wasm.h"
#include "blob/arraysort.wasm.h"
#include "blob/basicmath_small.wasm.h"
#include "blob/cast128.wasm.h"
#include "blob/cnt.wasm.h"
#include "blob/compress_test.wasm.h"
#include "blob/crc_32.wasm.h"
//#include "blob/ctl.wasm.h"
#include "blob/des.wasm.h"
#include "blob/dijkstra_small.wasm.h"
#include "blob/dllist.wasm.h"
#include "blob/ef_exp.wasm.h"
#include "blob/ef_log.wasm.h"
#include "blob/ef_mod.wasm.h"
#include "blob/ef_sqrt.wasm.h"
#include "blob/fast_fwd_inc.wasm.h"
#include "blob/fast_rev_d12.wasm.h"
#include "blob/hashtable.wasm.h"
#include "blob/libbs.wasm.h"
#include "blob/libbubblesort.wasm.h"
#include "blob/libcompress.wasm.h"
#include "blob/libcover.wasm.h"
#include "blob/libcrc.wasm.h"
//#include "blob/libcubic.wasm.h"
#include "blob/libdtoa.wasm.h"
#include "blob/libduff.wasm.h"
#include "blob/libedn.wasm.h"
#include "blob/libexpint.wasm.h"
#include "blob/libfac.wasm.h"
#include "blob/libfasta.wasm.h"
#include "blob/libfdct.wasm.h"
#include "blob/libfibcall.wasm.h"
#include "blob/libfir.wasm.h"
#include "blob/libfrac.wasm.h"
#include "blob/libhuffbench.wasm.h"
#include "blob/libinsertsort.wasm.h"
#include "blob/libjanne_complex.wasm.h"
#include "blob/libjfdctint.wasm.h"
#include "blob/liblcdnum.wasm.h"
#include "blob/liblevenshtein.wasm.h"
#include "blob/libludcmp.wasm.h"
#include "blob/libmergesort.wasm.h"
#include "blob/libminver.wasm.h"
#include "blob/libndes.wasm.h"
#include "blob/libns.wasm.h"
#include "blob/libnsichneu.wasm.h"
#include "blob/libpicojpeg.wasm.h"
#include "blob/libprime.wasm.h"
#include "blob/libqsort.wasm.h"
#include "blob/libqurt.wasm.h"
#include "blob/librecursion.wasm.h"
#include "blob/libselect.wasm.h"
#include "blob/libslre.wasm.h"
#include "blob/libsqrt.wasm.h"
#include "blob/libst.wasm.h"
#include "blob/libstb_perlin.wasm.h"
#include "blob/libstatemate.wasm.h"
#include "blob/libstrstr.wasm.h"
#include "blob/libtarai.wasm.h"
#include "blob/libtemplate.wasm.h"
#include "blob/libud.wasm.h"
#include "blob/libwhetstone.wasm.h"
#include "blob/libwikisort.wasm.h"
#include "blob/listinsertsort.wasm.h"
#include "blob/listsort.wasm.h"
//#include "blob/matmult.wasm.h"
#include "blob/md5.wasm.h"
#include "blob/miniz_b.wasm.h"
#include "blob/miniz.wasm.h"
//#include "blob/mont64.wasm.h"
#include "blob/nbody.wasm.h"
#include "blob/nettle-aes.wasm.h"
#include "blob/nettle-sha256.wasm.h"
#include "blob/picojpeg_test.wasm.h"
#include "blob/qrencode.wasm.h"
#include "blob/qrframe.wasm.h"
#include "blob/qrtest.wasm.h"
//#include "blob/queue.wasm.h"
#include "blob/rbtree.wasm.h"
#include "blob/string.wasm.h"
#include "blob/stringsearch1.wasm.h"
//#include "blob/trio.wasm.h"
//#include "blob/triostr.wasm.h"
//#include "blob/trio_test.wasm.h"

/* Function declarations */
bool iwasm_runtime_init(void);
void iwasm_runtime_destroy(void);

/* wamr_run is a very direct interpretation of "i like to have a wamr_run" */
int wamr_run(void *bytecode, size_t bytecode_len, int argc, char **argv);

/* wamr_run_cp creates a copy bytecode and argv
 * if argc is 0 it is set to 1 and argv[0] is set to ""
 * to create some space for a return value */
int wamr_run_cp(const void *bytecode, size_t bytecode_len, int argc, const char **argv);

#define telltruth(X) ((X) ? "true" : "false")

int main(void)
{
    /* aes_wasm */
    //printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    //wamr_run_cp(aes_wasm, aes_wasm_len, 0, 0);
    //iwasm_runtime_destroy();
    /* End of aes_wasm */

    /* aesxam_wasm */
    //printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    //wamr_run_cp(aesxam_wasm, aesxam_wasm_len, 0, 0);
    //iwasm_runtime_destroy();
    /* End of aesxam_wasm */

    /* arcfour_wasm */
    //printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    //wamr_run_cp(arcfour_wasm, arcfour_wasm_len, 0, 0);
    //iwasm_runtime_destroy();
    /* End of arcfour_wasm */

    /* arraybinsearch_wasm */
    printf("iwasm_initialized_arraybinsearch: %s\n", telltruth(iwasm_runtime_init()));
    wamr_run_cp(arraybinsearch_wasm, arraybinsearch_wasm_len, 0, 0);
    iwasm_runtime_destroy();
    /* End of arraybinsearch_wasm */

    /* arraysort_wasm */
    printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    wamr_run_cp(arraysort_wasm, arraysort_wasm_len, 0, 0);
    iwasm_runtime_destroy();
    /* End of arraysort_wasm */

    /* basicmath_small_wasm */
    //printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    //wamr_run_cp(basicmath_small_wasm, basicmath_small_wasm_len, 0, 0);
    //iwasm_runtime_destroy();
    /* End of basicmath_small_wasm */

    /* cast128_wasm */
    printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    wamr_run_cp(cast128_wasm, cast128_wasm_len, 0, 0);
    iwasm_runtime_destroy();
    /* End of cast128_wasm */

    /* cnt_wasm */
    printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    wamr_run_cp(cnt_wasm, cnt_wasm_len, 0, 0);
    iwasm_runtime_destroy();
    /* End of cnt_wasm */

    /* compress_test_wasm */
    printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    wamr_run_cp(compress_test_wasm, compress_test_wasm_len, 0, 0);
    iwasm_runtime_destroy();
    /* End of compress_test_wasm */

    /* crc_32_wasm */
    printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    wamr_run_cp(crc_32_wasm, crc_32_wasm_len, 0, 0);
    iwasm_runtime_destroy();
    /* End of crc_32_wasm */

    /* ctl_wasm */
    //printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    //wamr_run_cp(ctl_wasm, ctl_wasm_len, 0, 0);
    //iwasm_runtime_destroy();
    /* End of ctl_wasm */

    /* des_wasm */
    printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    wamr_run_cp(des_wasm, des_wasm_len, 0, 0);
    iwasm_runtime_destroy();
    /* End of des_wasm */

    /* dijkstra_small_wasm */
    //printf("iwasm_initialized dijkstra_small: %s\n", telltruth(iwasm_runtime_init()));
    //wamr_run_cp(dijkstra_small_wasm, dijkstra_small_wasm_len, 0, 0);
    //iwasm_runtime_destroy();
    /* End of dijkstra_small_wasm */

    /* dllist_wasm */
    //printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    //wamr_run_cp(dllist_wasm, dllist_wasm_len, 0, 0);
    //iwasm_runtime_destroy();
    /* End of dllist_wasm */

    /* ef_exp_wasm */
    printf("iwasm_initialized ef_exp_wasm: %s\n", telltruth(iwasm_runtime_init()));
    wamr_run_cp(ef_exp_wasm, ef_exp_wasm_len, 0, 0);
    iwasm_runtime_destroy();
    /* End of ef_exp_wasm */

    /* ef_log_wasm */
    printf("iwasm_initialized ef_log_wasm: %s\n", telltruth(iwasm_runtime_init()));
    wamr_run_cp(ef_log_wasm, ef_log_wasm_len, 0, 0);
    iwasm_runtime_destroy();
    /* End of ef_log_wasm */

    /* ef_mod_wasm */
    printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    wamr_run_cp(ef_mod_wasm, ef_mod_wasm_len, 0, 0);
    iwasm_runtime_destroy();
    /* End of ef_mod_wasm */

    /* ef_sqrt_wasm */
    printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    wamr_run_cp(ef_sqrt_wasm, ef_sqrt_wasm_len, 0, 0);
    iwasm_runtime_destroy();
    /* End of ef_sqrt_wasm */

    /* fast.fwd.inc_wasm */
    //printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    //wamr_run_cp(fast_fwd_inc_wasm, fast_fwd_inc_wasm_len, 0, 0);
    //iwasm_runtime_destroy();
    /* End of fast.fwd.inc_wasm */

    /* fast.rev.d12_wasm */
    //printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    //wamr_run_cp(fast_rev_d12_wasm, fast_rev_d12_wasm_len, 0, 0);
    //iwasm_runtime_destroy();
    /* End of fast.rev.d12_wasm */

    /* hashtable_wasm */
    printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    wamr_run_cp(hashtable_wasm, hashtable_wasm_len, 0, 0);
    iwasm_runtime_destroy();
    /* End of hashtable_wasm */

    /* libbs_wasm */
    printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    wamr_run_cp(libbs_wasm, libbs_wasm_len, 0, 0);
    iwasm_runtime_destroy();
    /* End of libbs_wasm */

    /* libbubblesort_wasm */
    printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    wamr_run_cp(libbubblesort_wasm, libbubblesort_wasm_len, 0, 0);
    iwasm_runtime_destroy();
    /* End of libbubblesort_wasm */

    /* libcompress_wasm */
    printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    wamr_run_cp(libcompress_wasm, libcompress_wasm_len, 0, 0);
    iwasm_runtime_destroy();
    /* End of libcompress_wasm */

    /* libcover_wasm */ //fail to link
    //printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    //wamr_run_cp(libcover_wasm, libcover_wasm_len, 0, 0);
    //iwasm_runtime_destroy();
    /* End of libcover_wasm */

    /* libcrc_wasm */
    printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    wamr_run_cp(libcrc_wasm, libcrc_wasm_len, 0, 0);
    iwasm_runtime_destroy();
    /* End of libcrc_wasm */

    /* libcubic_wasm */
    //printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    //wamr_run_cp(libcubic_wasm, libcubic_wasm_len, 0, 0);
    //iwasm_runtime_destroy();
    /* End of libcubic_wasm */

    /* libdtoa_wasm */
    printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    wamr_run_cp(libdtoa_wasm, libdtoa_wasm_len, 0, 0);
    iwasm_runtime_destroy();
    /* End of libdtoa_wasm */

    /* libduff_wasm */
    printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    wamr_run_cp(libduff_wasm, libduff_wasm_len, 0, 0);
    iwasm_runtime_destroy();
    /* End of libduff_wasm */

    /* libedn_wasm */
    printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    wamr_run_cp(libedn_wasm, libedn_wasm_len, 0, 0);
    iwasm_runtime_destroy();
    /* End of libedn_wasm */

    /* libexpint_wasm */
    printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    wamr_run_cp(libexpint_wasm, libexpint_wasm_len, 0, 0);
    iwasm_runtime_destroy();
    /* End of libexpint_wasm */

    /* libfac_wasm */
    //printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    //wamr_run_cp(libfac_wasm, libfac_wasm_len, 0, 0);
    //iwasm_runtime_destroy();
    /* End of libfac_wasm */

    /* libfasta_wasm */ //fail to link
    //printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    //wamr_run_cp(libfasta_wasm, libfasta_wasm_len, 0, 0);
    //iwasm_runtime_destroy();
    /* End of libfasta_wasm */

    /* libfdct_wasm */
    printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    wamr_run_cp(libfdct_wasm, libfdct_wasm_len, 0, 0);
    iwasm_runtime_destroy();
    /* End of libfdct_wasm */

    /* libfibcall_wasm */
    printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    wamr_run_cp(libfibcall_wasm, libfibcall_wasm_len, 0, 0);
    iwasm_runtime_destroy();
    /* End of libfibcall_wasm */

    /* libfir_wasm */
    printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    wamr_run_cp(libfir_wasm, libfir_wasm_len, 0, 0);
    iwasm_runtime_destroy();
    /* End of libfir_wasm */

    /* libfrac_wasm */
    printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    wamr_run_cp(libfrac_wasm, libfrac_wasm_len, 0, 0);
    iwasm_runtime_destroy();
    /* End of libfrac_wasm */

    /* libhuffbench_wasm */
    printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    wamr_run_cp(libhuffbench_wasm, libhuffbench_wasm_len, 0, 0);
    iwasm_runtime_destroy();
    /* End of libhuffbench_wasm */

    /* libinsertsort_wasm */
    printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    wamr_run_cp(libinsertsort_wasm, libinsertsort_wasm_len, 0, 0);
    iwasm_runtime_destroy();
    /* End of libinsertsort_wasm */

    /* libjanne_complex_wasm */
    printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    wamr_run_cp(libjanne_complex_wasm, libjanne_complex_wasm_len, 0, 0);
    iwasm_runtime_destroy();
    /* End of libjanne_complex_wasm */

    /* libjfdctint_wasm */
    printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    wamr_run_cp(libjfdctint_wasm, libjfdctint_wasm_len, 0, 0);
    iwasm_runtime_destroy();
    /* End of libjfdctint_wasm */

    /* liblcdnum_wasm */
    printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    wamr_run_cp(liblcdnum_wasm, liblcdnum_wasm_len, 0, 0);
    iwasm_runtime_destroy();
    /* End of liblcdnum_wasm */

    /* liblevenshtein_wasm */
    printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    wamr_run_cp(liblevenshtein_wasm, liblevenshtein_wasm_len, 0, 0);
    iwasm_runtime_destroy();
    /* End of liblevenshtein_wasm */

    /* libludcmp_wasm */
    printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    wamr_run_cp(libludcmp_wasm, libludcmp_wasm_len, 0, 0);
    iwasm_runtime_destroy();
    /* End of libludcmp_wasm */

    /* libmergesort_wasm */
    printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    wamr_run_cp(libmergesort_wasm, libmergesort_wasm_len, 0, 0);
    iwasm_runtime_destroy();
    /* End of libmergesort_wasm */

    /* libminver_wasm */
    printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    wamr_run_cp(libminver_wasm, libminver_wasm_len, 0, 0);
    iwasm_runtime_destroy();
    /* End of libminver_wasm */

    /* libndes_wasm */
    printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    wamr_run_cp(libndes_wasm, libndes_wasm_len, 0, 0);
    iwasm_runtime_destroy();
    /* End of libndes_wasm */

    /* libns_wasm */
    printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    wamr_run_cp(libns_wasm, libns_wasm_len, 0, 0);
    iwasm_runtime_destroy();
    /* End of libns_wasm */

    /* libnsichneu_wasm */
    printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    wamr_run_cp(libnsichneu_wasm, libnsichneu_wasm_len, 0, 0);
    iwasm_runtime_destroy();
    /* End of libnsichneu_wasm */

    /* libpicojpeg_wasm */
    //printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    //wamr_run_cp(libpicojpeg_wasm, libpicojpeg_wasm_len, 0, 0);
    //iwasm_runtime_destroy();
    /* End of libpicojpeg_wasm */

    /* libprime_wasm */
    printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    wamr_run_cp(libprime_wasm, libprime_wasm_len, 0, 0);
    iwasm_runtime_destroy();
    /* End of libprime_wasm */

    /* libqsort_wasm */
    //printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    //wamr_run_cp(libqsort_wasm, libqsort_wasm_len, 0, 0);
    //iwasm_runtime_destroy();
    /* End of libqsort_wasm */

    /* libqurt_wasm */
    printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    wamr_run_cp(libqurt_wasm, libqurt_wasm_len, 0, 0);
    iwasm_runtime_destroy();
    /* End of libqurt_wasm */

    /* librecursion_wasm */
    printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    wamr_run_cp(librecursion_wasm, librecursion_wasm_len, 0, 0);
    iwasm_runtime_destroy();
    /* End of librecursion_wasm */

    /* libselect_wasm */
    printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    wamr_run_cp(libselect_wasm, libselect_wasm_len, 0, 0);
    iwasm_runtime_destroy();
    /* End of libselect_wasm */

    /* libslre_wasm */
    printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    wamr_run_cp(libslre_wasm, libslre_wasm_len, 0, 0);
    iwasm_runtime_destroy();
    /* End of libslre_wasm */

    /* libsqrt_wasm */
    //printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    //wamr_run_cp(libsqrt_wasm, libsqrt_wasm_len, 0, 0);
    //iwasm_runtime_destroy();
    /* End of libsqrt_wasm */

    /* libst_wasm */
    //printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    //wamr_run_cp(libst_wasm, libst_wasm_len, 0, 0);
    //iwasm_runtime_destroy();
    /* End of libst_wasm */

    /* libstb_perlin_wasm */
    printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    wamr_run_cp(libstb_perlin_wasm, libstb_perlin_wasm_len, 0, 0);
    iwasm_runtime_destroy();
    /* End of libstb_perlin_wasm */

    /* libstatemate_wasm */
    printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    wamr_run_cp(libstatemate_wasm, libstatemate_wasm_len, 0, 0);
    iwasm_runtime_destroy();
    /* End of libstatemate_wasm */

    /* libstrstr_wasm */
    printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    wamr_run_cp(libstrstr_wasm, libstrstr_wasm_len, 0, 0);
    iwasm_runtime_destroy();
    /* End of libstrstr_wasm */

    /* libtarai_wasm */
    printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    wamr_run_cp(libtarai_wasm, libtarai_wasm_len, 0, 0);
    iwasm_runtime_destroy();
    /* End of libtarai_wasm */

    /* libtemplate_wasm */
    printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    wamr_run_cp(libtemplate_wasm, libtemplate_wasm_len, 0, 0);
    iwasm_runtime_destroy();
    /* End of libtemplate_wasm */

    /* libud_wasm */
    //printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    //wamr_run_cp(libud_wasm, libud_wasm_len, 0, 0);
    //iwasm_runtime_destroy();
    /* End of libud_wasm */

    /* libwhetstone_wasm */
    //printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    //wamr_run_cp(libwhetstone_wasm, libwhetstone_wasm_len, 0, 0);
    //iwasm_runtime_destroy();
    /* End of libwhetstone_wasm */

    /* libwikisort_wasm */
    printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    wamr_run_cp(libwikisort_wasm, libwikisort_wasm_len, 0, 0);
    iwasm_runtime_destroy();
    /* End of libwikisort_wasm */

    /* listinsertsort_wasm */
    printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    wamr_run_cp(listinsertsort_wasm, listinsertsort_wasm_len, 0, 0);
    iwasm_runtime_destroy();
    /* End of listinsertsort_wasm */

    /* listsort_wasm */
    printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    wamr_run_cp(listsort_wasm, listsort_wasm_len, 0, 0);
    iwasm_runtime_destroy();
    /* End of listsort_wasm */

    /* matmult_wasm */
    //printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    //wamr_run_cp(matmult_wasm, matmult_wasm_len, 0, 0);
    //iwasm_runtime_destroy();
    /* End of matmult_wasm */

    /* md5_wasm */
    printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    wamr_run_cp(md5_wasm, md5_wasm_len, 0, 0);
    iwasm_runtime_destroy();
    /* End of md5_wasm */

    /* miniz_b_wasm */
    //printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    //wamr_run_cp(miniz_b_wasm, miniz_b_wasm_len, 0, 0);
    //iwasm_runtime_destroy();
    /* End of miniz_b_wasm */

    /* miniz_wasm */ //fail to link
    //printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    //wamr_run_cp(miniz_wasm, miniz_wasm_len, 0, 0);
    //iwasm_runtime_destroy();
    /* End of miniz_wasm */

    /* mont64_wasm */
    //printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    //wamr_run_cp(mont64_wasm, mont64_wasm_len, 0, 0);
    //iwasm_runtime_destroy();
    /* End of mont64_wasm */

    /* nbody_wasm */
    printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    wamr_run_cp(nbody_wasm, nbody_wasm_len, 0, 0);
    iwasm_runtime_destroy();
    /* End of nbody_wasm */

    /* nettle-aes_wasm */ //fail to link
    //printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    //wamr_run_cp(nettle_aes_wasm, nettle_aes_wasm_len, 0, 0);
    //iwasm_runtime_destroy();
    /* End of nettle-aes_wasm */

    /* nettle-sha256_wasm */ //fail to link
    //printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    //wamr_run_cp(nettle_sha256_wasm, nettle_sha256_wasm_len, 0, 0);
    //iwasm_runtime_destroy();
    /* End of nettle-sha256_wasm */

    /* picojpeg_test_wasm */ //fail to link
    //printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    //wamr_run_cp(picojpeg_test_wasm, picojpeg_test_wasm_len, 0, 0);
    //iwasm_runtime_destroy();
    /* End of picojpeg_test_wasm */

    /* qrencode_wasm */
    //printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    //wamr_run_cp(qrencode_wasm, qrencode_wasm_len, 0, 0);
    //iwasm_runtime_destroy();
    /* End of qrencode_wasm */

    /* qrframe_wasm */
    //printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    //wamr_run_cp(qrframe_wasm, qrframe_wasm_len, 0, 0);
    //iwasm_runtime_destroy();
    /* End of qrframe_wasm */

    /* qrtest_wasm */
    //printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    //wamr_run_cp(qrtest_wasm, qrtest_wasm_len, 0, 0);
    //iwasm_runtime_destroy();
    /* End of qrtest_wasm */

    /* queue_wasm */
    //printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    //wamr_run_cp(queue_wasm, queue_wasm_len, 0, 0);
    //iwasm_runtime_destroy();
    /* End of queue_wasm */

    /* rbtree_wasm */
    printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    wamr_run_cp(rbtree_wasm, rbtree_wasm_len, 0, 0);
    iwasm_runtime_destroy();
    /* End of rbtree_wasm */

    /* string_wasm */
    printf("iwasm_initialized stirng : %s\n", telltruth(iwasm_runtime_init()));
    wamr_run_cp(string_wasm, string_wasm_len, 0, 0);
    iwasm_runtime_destroy();
    /* End of string_wasm */

    /* stringsearch1_wasm */ //fail to linking
    //printf("iwasm_initialized stringsearch1 : %s\n", telltruth(iwasm_runtime_init()));
    //wamr_run_cp(stringsearch1_wasm, stringsearch1_wasm_len, 0, 0);
    //iwasm_runtime_destroy();
    /* End of stringsearch1_wasm */

    /* trio_wasm */
    //printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    //wamr_run_cp(trio_wasm, trio_wasm_len, 0, 0);
    //iwasm_runtime_destroy();
    /* End of trio_wasm */

    /* triostr_wasm */
    //printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    //wamr_run_cp(triostr_wasm, triostr_wasm_len, 0, 0);
    //iwasm_runtime_destroy();
    /* End of triostr_wasm */

    /* trio_test_wasm */
    //printf("iwasm_initialized: %s\n", telltruth(iwasm_runtime_init()));
    //wamr_run_cp(trio_test_wasm, trio_test_wasm_len, 0, 0);
    //iwasm_runtime_destroy();
    /* End of trio_test_wasm */

    return 0;
}

