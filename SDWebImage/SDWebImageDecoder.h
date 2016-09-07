/*!
 * This file is part of the SDWebImage package.
 * (c) Olivier Poitrey <rs@dailymotion.com>
 *
 * Created by james <https://github.com/mystcolor> on 9/28/11.
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 */

#import <Foundation/Foundation.h>
#import "SDWebImageCompat.h"

@interface UIImage (ForceDecode)
/**
 *  Decompressing images that are downloaded and cached can improve performance but can consume lot of memory.
 */
+ (UIImage *)decodedImageWithImage:(UIImage *)image;

@end
