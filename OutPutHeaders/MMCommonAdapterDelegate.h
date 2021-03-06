/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol MMCommonAdapterDelegate <NSObject>
@optional
-(void)LogFeatureIdKey:(unsigned)key key:(unsigned)key2 value:(unsigned)value isKeyLog:(bool)log;
-(void)LogFeatureExt:(unsigned long)ext logExt:(id)ext2 isReportNow:(bool)now isImportant:(bool)important;
-(void)NetworkLogOutput:(id)output;
-(void)LogWithinCommon:(int)common module:(const char*)module file:(const char*)file line:(int)line funcName:(const char*)name message:(id)message;
-(BOOL)ShouldLog:(int);
-(BOOL)IsChinese;
@end

