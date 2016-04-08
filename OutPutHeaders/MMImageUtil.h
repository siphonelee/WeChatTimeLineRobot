/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "WeChat-Structs.h"


@interface MMImageUtil : XXUnknownSuperclass {
}
+(id)generateVideoThumbImage:(id)image atTime:(double)time;
+(id)genarateOriginImageDataFromUIImage:(id)uiimage;
+(id)resizeToMinSideLenDisplayMode:(int)minSideLenDisplayMode originImage:(id)image;
+(id)image:(id)image scaleAspectFitSize:(CGSize)size withOrientation:(int)orientation;
+(unsigned)getMaxImageSizeAreaFitMemory;
+(id)scaleImageToFitMemory:(id)fitMemory;
+(unsigned)amountOfFreeMemory;
+(void)mov2mp4withInputURL:(id)inputURL withOutputURL:(id)outputURL withTarget:(id)target withSel:(SEL)sel withQuality:(id)quality;
+(id)scaledImageWithImage:(id)image inWidth:(float)width inHeight:(float)height;
+(id)scaledImageWithAsset:(id)asset inWidth:(float)width inHeight:(float)height;
+(id)scaledImageWithAsset:(id)asset withSize:(CGSize)size;
+(BOOL)isImageEditedWithRepresentation:(id)representation;
+(id)compressImageToFullScreen:(id)fullScreen;
+(id)bytes2str:(long long)str;
+(id)fitImageOfLongImage:(id)longImage;
+(void)writeImageToFile:(id)file withURL:(id)url;
+(id)maskedFourRoundedCornerImageForColor:(id)color imageSize:(CGSize)size;
+(id)maskedTwoRoundedCornerImageForColor:(id)color imageSize:(CGSize)size;
+(id)getImageByColor:(id)color inSize:(CGSize)size isSender:(BOOL)sender;
+(id)maskImage:(id)image isSender:(BOOL)sender inSize:(CGSize)size;
+(void)addReceiverNodeViewPathToContext:(CGContextRef)context inRect:(CGRect)rect scale:(float)scale;
+(void)addSenderNodeViewPathToContext:(CGContextRef)context inRect:(CGRect)rect scale:(float)scale;
+(id)hdImageWithContentsOfFile:(id)file;
+(id)maskedThumbImageForMessageImage:(id)messageImage imageSize:(CGSize)size isSender:(BOOL)sender;
+(CGSize)maskedThumbImageSizeForMessageImage:(CGSize)messageImage;
+(CGSize)maskedThumbImageSize:(CGSize)size;
+(id)getDataCompressedImage:(id)image CompressConfig:(id)config;
+(id)getNormalCompressedImage:(id)image CompressConfig:(id)config;
+(id)resizeToNormalCompressImage:(id)normalCompressImage CompressConfig:(id)config;
@end

