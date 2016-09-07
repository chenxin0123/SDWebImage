//~
//  UIImage+WebP.h
//  SDWebImage
//
//  Created by Olivier Poitrey on 07/06/13.
//  Copyright (c) 2013 Dailymotion. All rights reserved.
//

#ifdef SD_WEBP

#import <UIKit/UIKit.h>

/** WebP 标准是 Google 定制的，迄今为止也只有 Google 发布的 libwebp 实现了该的编解码 。 所以这个库也是该格式的事实标准。 */

// Fix for issue #416 Undefined symbols for architecture armv7 since WebP introduction when deploying to device
void WebPInitPremultiplyNEON(void);

void WebPInitUpsamplersNEON(void);

void VP8DspInitNEON(void);

@interface UIImage (WebP)

+ (UIImage *)sd_imageWithWebPData:(NSData *)data;

@end

#endif
