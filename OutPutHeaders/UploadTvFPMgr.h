/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UploadAFPMgr.h"

@class CLLocation;

@interface UploadTvFPMgr : UploadAFPMgr {
	CLLocation* _curLocation;
}
@property(retain, nonatomic) CLLocation* curLocation;
-(void).cxx_destruct;
-(void)MessageReturn:(id)aReturn Event:(unsigned long)event;
-(void)SendFPData:(id)data FPId:(unsigned long)anId Duration:(float)duration EndFlag:(unsigned long)flag;
-(void)dealloc;
-(id)initWithDelegate:(id)delegate;
@end

