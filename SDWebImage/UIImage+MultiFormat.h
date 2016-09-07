//!
//  UIImage+MultiFormat.h
//  SDWebImage
//
//  Created by Olivier Poitrey on 07/06/13.
//  Copyright (c) 2013 Dailymotion. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (MultiFormat)

/**
 * NSData -> UIImage 自动判断图片格式 webp gif jpeg png
 */
+ (UIImage *)sd_imageWithData:(NSData *)data;

@end
