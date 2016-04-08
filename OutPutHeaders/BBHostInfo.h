/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "WeChat-Structs.h"

@class NSString;

@interface BBHostInfo : XXUnknownSuperclass {
	BBHostInfoValidity ipaddr_sa;
	NSString* _hostName;
	NSString* _hostAddress;
	NSString* _hostCandidate;
}
@property(copy, nonatomic) NSString* hostCandidate;
@property(readonly, copy, nonatomic) NSString* hostAddress;
@property(readonly, copy, nonatomic) NSString* hostName;
-(void).cxx_destruct;
-(BBHostInfoValidity)isIPAddressStringValid:(id)valid;
-(sockaddr*)validAddress;
-(id)initWithHostNameOrNumber:(id)hostNameOrNumber;
@end

