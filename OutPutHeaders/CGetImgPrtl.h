/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PrtlBase.h"

@class CUploadImgWrap;

@interface CGetImgPrtl : PrtlBase {
	CUploadImgWrap* m_oGetImgWrap;
}
@property(retain, nonatomic) CUploadImgWrap* m_oGetImgWrap;
-(void).cxx_destruct;
-(BOOL)HandleResp:(void*)resp;
-(void)InitReq:(void*)req;
-(id)init;
@end

