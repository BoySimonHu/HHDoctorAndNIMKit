#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "HHMBProgressHUD.h"
#import "internal.h"
#import "ijksdl.h"
#import "ijksdl_class.h"
#import "ijksdl_endian.h"
#import "ijksdl_error.h"
#import "ijksdl_fourcc.h"
#import "ijksdl_gles2.h"
#import "ijksdl_inc_internal.h"
#import "ijksdl_log.h"
#import "ijksdl_misc.h"
#import "ijksdl_mutex.h"
#import "ijksdl_stdinc.h"
#import "ijksdl_thread.h"
#import "ijksdl_timer.h"
#import "ijksdl_video.h"
#import "ijksdl_vout.h"
#import "IJKSDLGLView.h"
#import "ijksdl_ios.h"
#import "ijksdl_vout_overlay_videotoolbox.h"
#import "NTESGLView.h"
#import "ObjectMapper.h"
#import "CGGeometry+RSKImageCropper.h"
#import "RSKImageCropper.h"
#import "RSKImageCropViewController+Protected.h"
#import "RSKImageCropViewController.h"
#import "RSKImageScrollView.h"
#import "RSKTouchView.h"
#import "UIApplication+RSKImageCropper.h"
#import "UIImage+RSKImageCropper.h"
#import "HHCameraImageModel.h"
#import "PhotoPicker.h"
#import "HHCameraUtil.h"
#import "HHPHAssetManager.h"
#import "HttpsDNSAuth.h"
#import "HHAnimatedImageRep.h"
#import "HHImageCache.h"
#import "HHImageCacheConfig.h"
#import "HHWebImageCoder.h"
#import "HHWebImageCoderHelper.h"
#import "HHWebImageCodersManager.h"
#import "HHWebImageCompat.h"
#import "HHWebImageDownloader.h"
#import "HHWebImageDownloaderOperation.h"
#import "HHWebImageFrame.h"
#import "HHWebImageGIFCoder.h"
#import "HHWebImageImageIOCoder.h"
#import "HHWebImageManager.h"
#import "HHWebImageOperation.h"
#import "HHWebImagePrefetcher.h"
#import "HHWebImageTransition.h"
#import "NSData+hhImageContentType.h"
#import "NSImage+hhWebCache.h"
#import "UIButton+hhWebCache.h"
#import "UIImage+hhForceDecode.h"
#import "UIImage+hhGIF.h"
#import "UIImage+hhMultiFormat.h"
#import "UIImageView+hhHighlightedWebCache.h"
#import "UIImageView+hhWebCache.h"
#import "UIView+hhWebCache.h"
#import "UIView+hhWebCacheOperation.h"

FOUNDATION_EXPORT double HHDoctorSDKVersionNumber;
FOUNDATION_EXPORT const unsigned char HHDoctorSDKVersionString[];

