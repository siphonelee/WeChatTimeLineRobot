/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WCPayControlLogic.h"

@class JSEvent;

@interface WCPayJSApiAuthenticationControlLogic : WCPayControlLogic {
	JSEvent* m_jsEvent;
	int m_enWCPayCheckAuthorityScene;
	int m_enWCPayCheckOpenWCPayViewAuthorityScene;
}
-(void).cxx_destruct;
-(void)OnCheckWCPayJsApiRequest:(id)request Error:(id)error;
-(void)stopLogic;
-(void)startLogic;
-(id)initWithJSEvent:(id)jsevent Scene:(int)scene WithOpenViewScene:(int)openViewScene;
-(id)initWithJSEvent:(id)jsevent Scene:(int)scene;
@end

