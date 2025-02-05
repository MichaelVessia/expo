/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <UIKit/UIKit.h>

#import <ABI45_0_0React/ABI45_0_0RCTImageLoaderProtocol.h>
#import <ABI45_0_0React/ABI45_0_0RCTImageURLLoaderWithAttribution.h>

ABI45_0_0RCT_EXTERN BOOL ABI45_0_0RCTImageLoadingPerfInstrumentationEnabled(void);
ABI45_0_0RCT_EXTERN void ABI45_0_0RCTEnableImageLoadingPerfInstrumentation(BOOL enabled);

@protocol ABI45_0_0RCTImageLoaderWithAttributionProtocol<ABI45_0_0RCTImageLoaderProtocol, ABI45_0_0RCTImageLoaderLoggableProtocol>

// TODO (T61325135): Remove C++ checks
#ifdef __cplusplus
/**
 * Same as the variant in ABI45_0_0RCTImageURLLoaderProtocol, but allows passing attribution
 * information that each image URL loader can process.
 */
- (ABI45_0_0RCTImageURLLoaderRequest *)loadImageWithURLRequest:(NSURLRequest *)imageURLRequest
                                                 size:(CGSize)size
                                                scale:(CGFloat)scale
                                              clipped:(BOOL)clipped
                                           resizeMode:(ABI45_0_0RCTResizeMode)resizeMode
                                             priority: (ABI45_0_0RCTImageLoaderPriority)priority
                                          attribution:(const ABI45_0_0facebook::ABI45_0_0React::ImageURLLoaderAttribution &)attribution
                                        progressBlock:(ABI45_0_0RCTImageLoaderProgressBlock)progressBlock
                                     partialLoadBlock:(ABI45_0_0RCTImageLoaderPartialLoadBlock)partialLoadBlock
                                      completionBlock:(ABI45_0_0RCTImageLoaderCompletionBlockWithMetadata)completionBlock;
#endif

/**
 * Image instrumentation - start tracking the on-screen visibility of the native image view.
 */
- (void)trackURLImageVisibilityForRequest:(ABI45_0_0RCTImageURLLoaderRequest *)loaderRequest imageView:(UIView *)imageView;

/**
 * Image instrumentation - notify that the request was cancelled.
 */
- (void)trackURLImageRequestDidDestroy:(ABI45_0_0RCTImageURLLoaderRequest *)loaderRequest;

/**
 * Image instrumentation - notify that the native image view was destroyed.
 */
- (void)trackURLImageDidDestroy:(ABI45_0_0RCTImageURLLoaderRequest *)loaderRequest;

@end
