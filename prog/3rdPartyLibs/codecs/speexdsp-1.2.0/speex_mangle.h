#pragma once

#define speex_buffer_init op4s_speex_buffer_init
#define speex_buffer_destroy op4s_speex_buffer_destroy
#define speex_buffer_write op4s_speex_buffer_write
#define speex_buffer_writezeros op4s_speex_buffer_writezeros
#define speex_buffer_read op4s_speex_buffer_read
#define speex_buffer_get_available op4s_speex_buffer_get_available
#define speex_buffer_resize op4s_speex_buffer_resize

#define speex_decorrelate_new op4s_speex_decorrelate_new
#define speex_decorrelate op4s_speex_decorrelate
#define speex_decorrelate_destroy op4s_speex_decorrelate_destroy

#define jitter_buffer_init op4s_jitter_buffer_init
#define jitter_buffer_reset op4s_jitter_buffer_reset
#define jitter_buffer_destroy op4s_jitter_buffer_destroy
#define jitter_buffer_put op4s_jitter_buffer_put
#define jitter_buffer_get op4s_jitter_buffer_get
#define jitter_buffer_get_pointer_timestamp op4s_jitter_buffer_get_pointer_timestamp
#define jitter_buffer_tick op4s_jitter_buffer_tick
#define jitter_buffer_update_delay op4s_jitter_buffer_update_delay

#define speex_preprocess_state_init op4s_speex_preprocess_state_init
#define speex_preprocess_state_destroy op4s_speex_preprocess_state_destroy
#define speex_preprocess_run op4s_speex_preprocess_run
#define speex_preprocess op4s_speex_preprocess
#define speex_preprocess_estimate_update op4s_speex_preprocess_estimate_update
#define speex_preprocess_ctl op4s_speex_preprocess_ctl

#define speex_resampler_init op4s_speex_resampler_init
#define speex_resampler_init_frac op4s_speex_resampler_init_frac
#define speex_resampler_destroy op4s_speex_resampler_destroy
#define speex_resampler_process_float op4s_speex_resampler_process_float
#define speex_resampler_process_int op4s_speex_resampler_process_int
#define speex_resampler_process_interleaved_float op4s_speex_resampler_process_interleaved_float
#define speex_resampler_process_interleaved_int op4s_speex_resampler_process_interleaved_int
#define speex_resampler_set_rate op4s_speex_resampler_set_rate
#define speex_resampler_get_rate op4s_speex_resampler_get_rate
#define speex_resampler_set_rate_frac op4s_speex_resampler_set_rate_frac
#define speex_resampler_get_ratio op4s_speex_resampler_get_ratio
#define speex_resampler_set_quality op4s_speex_resampler_set_quality
#define speex_resampler_get_quality op4s_speex_resampler_get_quality
#define speex_resampler_set_input_stride op4s_speex_resampler_set_input_stride
#define speex_resampler_get_input_stride op4s_speex_resampler_get_input_stride
#define speex_resampler_set_output_stride op4s_speex_resampler_set_output_stride
#define speex_resampler_get_output_stride op4s_speex_resampler_get_output_stride
#define speex_resampler_skip_zeros op4s_speex_resampler_skip_zeros
#define speex_resampler_reset_mem op4s_speex_resampler_reset_mem
#define speex_resampler_strerror op4s_speex_resampler_strerror
