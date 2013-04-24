/*
 lived 2009.11.05
 FEATURE define
*/

#ifndef F_SKYDISP_FRAMEWORK_FEATURE
#define F_SKYDISP_FRAMEWORK_FEATURE

/* Debug Msg 
#if defined(FEATURE_AARM_RELEASE_MODE)
#define SKYDISP_MSG(...)
#else
#define SKYDISP_MSG(...)   ((void)LOG(LOG_WARN, LOG_TAG, __VA_ARGS__))
#endif
*/

/* PMEM ���� ����ȭ
 * MSM_FB_SIZE �� MSM_PMEM_SF_SIZE ũ�� ����
#define F_SKYDISP_PMEM_OPTIMIZE
 */

/* 
 *32bpp ����� ������ �����Ǿ���� �κе� 
 * KERNEL : used     
 * USER   : used
#define CONFIG_F_SKYDISP_FRAMEBUFFER_32
 */
 
/* 
 * init ���μ������� �Ѹ��� �� Cursor ���ֱ� 
 * KERNEL : used     
 * USER   : not used
#define CONFIG_F_SKYDISP_NO_CURSOR_IN_BOOT
 */
 
/* Android Boot Animation �߿� ��Ⱑ 6���� User Set Value��
 * ���� �Ǵ� ������ ���� -> ������ Feature 
 */
#define F_SKYDISP_SET_BACKLIGHT_BEFORE_BOOTANIM

/* 
 *gralloc ��⿡ refresh rate ��� �߸��� �κ� ���� 
#define F_SKYDISP_FIX_REFRESH_RATE
 */

/* 
 * Backlight ���� ���� ���� 
 * KERNEL : used     
 * USER   : not used
#define CONFIG_F_SKYDISP_QBUG_FIX_BACKLIGHT
 */
 
/* Qualcomm�� �۾��� HDMI ���� DUAL Display�� �۾� ����
 * ����, HDMI�� ����ϴ� ���� �Ʒ� Feature�� undefine�ϰ�
 * Qualcomm�� HDMI_DUAL_DISPLAY �� define�ؾ� �Ѵ�.
 * android/device/qcom/msm8660_surf/ ���� 
 * BoardConfig.mk -> TARGET_HAVE_HDMI_OUT := false
 * system.prop -> ro.hdmi.enable=false
 * �� �� ������ ���� Config/Feature �̴�. ���� �� ��
#define F_SKYDISP_REMOVE_HDMI
 */

/*
 * SHARP MIPI ���� ���� ���� ���� Feature
 * KERNEL : used     
 * USER   : not used
#ifndef T_PRESTO
#define CONFIG_F_SKYDISP_QBUG_FIX_MIPI_ERROR
#endif
 */
 
/*
 * SHARP LCD Veil View ���� Feature
#define F_SKYDISP_VEIL_VIEW
 */

/*
 * SKY Boot Logo in Kernel Feature
 * KERNEL : used     
 * USER   : not used
#define CONFIG_F_SKYDISP_BOOT_LOGO_IN_KERNEL
*/
 
/*
 * for TARGET_USES_OVERLAY feature fix
#define F_SKYDISP_OVERLAY_FIX
 */

/*
 * for Mirror Flip Effect for Camera
 * KERNEL : not used     
 * USER   : used
 */
#define F_SKYDISP_GBUG_OVERLAY_FLIP

/*
 * Overlay�� ���� SurfaceView���� Landscape<->Portrait ��ȯ ��
 * ȭ���� �ϱ׷����� ������ ����
 * 1080 ���Ŀ��� �ʿ��Ѱ�?
#define F_SKYDISP_GBUG_FIX_OVERLAY_ORIENTATION
 */

/*
 * LCD Module Reset ##1199 Test Menu
 * KERNEL : used     
 * USER   : used
#define CONFIG_F_SKYDISP_LCD_RESET
*/
 
/*
 * LCD ���� on/off ���, sleep������ �Դ´�
 * �ʿ��� �� ���� �ǰڴ�.
 * EF33/34/35���� Battery Charging�ÿ� �־���
 * KERNEL : used     
 * USER   : used
#define CONFIG_F_SKYDISP_LCD_FORCE_ONOFF
*/

/*
 * Overlay 2�� ��� �����ϵ��� �Ѵ�.
 * 35L�� GIPS �������� GLSurfaceView�� ���� ������ ���ʿ�
 * 40K������ �ʿ��ϴ�
 * Kang Seong-Goo, 2011.08.22, Qualcomm ��� ������� ����
#if defined(T_EF40K)
#define F_SKYDISP_DUAL_OVERLAY
#endif
 */

/*
 * Surface Information �߸��� ��� ����
 */
#define F_SKYDISP_FIX_INVALID_SURFACE
 
/*
 * Overlay ��� ��, MDP_OV_PLAY_NOWAIT�� ���� ó�� �߰�
 */
/*#define F_SKYDISP_OV_PLAY_NOWAIT*/

/*
 * LCD Gamma Table Test
#define F_SKYDISP_LCD_GAMMA_TEST
 */

/*
 * 8660 MIPI Video mode LCD display
 * by Qualcomm SR fix
#define F_SKYDISP_MIPI_VIDEO_LK_DISPLAY
 */

/*
 * MHL-HDMI ���� ��, Feature �ڸ�/�ػ� ���� API ���
 * KERNEL : used     
 * USER   : used

#ifndef T_PRESTO
#define CONFIG_F_SKYDISP_HDMI_OPTION
#endif //30145 PATCH OUT
 */
 
/*
 * 2011.08.19
 * GPU composition ��� ��, ASHMEM ����� ���� Feature
 * BoardConfig.mk�� TARGET_GRALLOC_USES_ASHMEM := true �⺻ ������ �� �ϸ�,
 * Kernel config�� /dev/pmem ���� ��ü�� ���� ���� Feature��
 * android/system/core/rootdir/ueventd.rc ���� /dev/pmem permission ������ ����
 * KERNEL : used     
 * USER   : not used
#define CONFIG_F_SKYDISP_USE_ASHMEM
 */

/*
 * Beam On Bug Fix, because the screen does not display at Beam on  
 * KERNEL : used     
 * USER   : used
 * Author : LS4 p13156 LKS
 */
#ifdef T_PRESTO
#define CONFIG_F_SKYDISP_BEAM_ON_BUG_FIX
#endif

/*
 * 2011.09.21
 * Camera ���� ��, rotation �Ǵ� �� ���� �ڵ�
 * KERNEL : not used
 * USER   : used
 */
#define F_SKYDISP_FIX_EXIT_CAMERA

/*
 * 2011.10.01
 * setCrop ��, YCbCr ���� Cb/Cr flip ���� ����
 * KERNEL : not used
 * USER   : used
#define F_SKYDISP_FIX_Y_CBCR_FLIP
 */

/*
 * 2011.10.20
 * BootAnimation��� overlay by-pass �ǵ��� ��:��������
 * KERNEL : not used
 * USER   : used
 */
#define F_SKYDISP_USE_BYPASS

/*EF47S BUG FIX*/
/*
 * 2012.05.24
 * Image blinking when rotate to the portrait (CASE #829448)
 * KERNEL : not used
 * USER   : used
 */
#define F_SKYDISP_BUG_FIX_ROTATE_TO_PORTRAIT_BLINK
/*
 * 2012.05.24
 * VT RESET PROBLEM
 * KERNEL : not used
 * USER   : used
 */ 
#define F_SKYDISP_BUG_FIX_VT_RESET
/*
 * 2012.05.24
 * when rotate to portrait, screen is changed green (downscaling problem)
 * KERNEL : used
 * USER   : not used
#define CONFIG_F_SKYDISP_BUG_FIX_MDP_DOWNSCALING
 */ 
 
/*
 * 2012.05.24
 * when video player is playing, screen color is change problem
 * KERNEL : used
 * USER   : not used
#define CONFIG_F_SKYDISP_BUG_FIX_YUV_REVERSE
 */
 
/*
 * 2012.05.24
 * when hw accelator be used, shodow font problem
 * KERNEL : not used
 * USER   : used
 */
#define F_SKYDISP_BUG_FIX_FONT_SHADOW_BROKEN

/*EF47S HDMI PATCH
#define CONFIG_F_SKYDISP_HDMI_BLOCK
#define	CONFIG_PANTECH_F_HDMI_NOTIFY_POWER_ON
#define CONFIG_PANTECH_FORMAT_FOR_MHL_LIMIT
*/

#define QUALCOMM_CONFIG_HDMI_PREVENT_ROTATE_BUG
/*
 * HDMI Caption Feature
#define CONFIG_F_SKYDISP_HDMI_CAPTION
 */
//PZ2223 DataEncryption
#define CONFIG_F_SKYDISP_RETRY_ENCRYPTION		/// p16008 @ 20120425 : prevent surfaceflinger's error when encryption mode 

#define CONFIG_F_SKYDISP_QBUG_FIX_GALLERY_REVERSE_PICTURE //GCAN 20120712 When GALLERY application exit, picture reverse problem solve
//#define CONFIG_F_SKYDISP_QBUG_FIX_VIDEO_PLAYBACK_HALT //GCAN 20120712 : For prevent video playback halt, 30155 patch rollback
#endif  /* SKY_FRAMEWORK_FEATURE */
