/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMObject.h"


@interface MMVideoCompressHelper : MMObject {
}
+(void)compressVideoFromUrl:(id)url toOutputUrl:(id)outputUrl shouldScaleDuration:(BOOL)duration withBlock:(id)block;
+(id)getOutputFilePathFrom:(id)from;
+(id)getCacheFilePathFrom:(id)from;
@end

