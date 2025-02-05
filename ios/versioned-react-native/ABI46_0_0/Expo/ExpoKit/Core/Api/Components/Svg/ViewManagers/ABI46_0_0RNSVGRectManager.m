/**
 * Copyright (c) 2015-present, Horcrux.
 * All rights reserved.
 *
 * This source code is licensed under the MIT-style license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import "ABI46_0_0RNSVGRectManager.h"

#import "ABI46_0_0RNSVGRect.h"
#import "ABI46_0_0RCTConvert+RNSVG.h"

@implementation ABI46_0_0RNSVGRectManager

ABI46_0_0RCT_EXPORT_MODULE()

- (ABI46_0_0RNSVGRenderable *)node
{
  return [ABI46_0_0RNSVGRect new];
}

ABI46_0_0RCT_EXPORT_VIEW_PROPERTY(x, ABI46_0_0RNSVGLength*)
ABI46_0_0RCT_EXPORT_VIEW_PROPERTY(y, ABI46_0_0RNSVGLength*)
ABI46_0_0RCT_EXPORT_VIEW_PROPERTY(rectheight, ABI46_0_0RNSVGLength*)
ABI46_0_0RCT_EXPORT_VIEW_PROPERTY(rectwidth, ABI46_0_0RNSVGLength*)
ABI46_0_0RCT_CUSTOM_VIEW_PROPERTY(height, id, ABI46_0_0RNSVGRect)
{
    view.rectheight = [ABI46_0_0RCTConvert ABI46_0_0RNSVGLength:json];
}

ABI46_0_0RCT_CUSTOM_VIEW_PROPERTY(width, id, ABI46_0_0RNSVGRect)
{
    view.rectwidth = [ABI46_0_0RCTConvert ABI46_0_0RNSVGLength:json];
}
ABI46_0_0RCT_EXPORT_VIEW_PROPERTY(rx, ABI46_0_0RNSVGLength*)
ABI46_0_0RCT_EXPORT_VIEW_PROPERTY(ry, ABI46_0_0RNSVGLength*)

@end
