/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WCDeviceTask.h"


@interface __WCDeviceSendDataTask : WCDeviceTask {
	int _m_sendState;
	long long _m_sessionId;
	unsigned long long _m_sendCGIFinishTime;
}
@property(assign, nonatomic) unsigned long long m_sendCGIFinishTime;
@property(assign) int m_sendState;
@property(assign) long long m_sessionId;
-(id)init;
@end

