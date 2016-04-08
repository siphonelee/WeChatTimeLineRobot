/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSSet, FBSDKAccessToken;

@interface FBSDKLoginManagerLoginResult : XXUnknownSuperclass {
	BOOL _isCancelled;
	FBSDKAccessToken* _token;
	NSSet* _grantedPermissions;
	NSSet* _declinedPermissions;
}
@property(copy, nonatomic) NSSet* declinedPermissions;
@property(copy, nonatomic) NSSet* grantedPermissions;
@property(readonly, assign, nonatomic) BOOL isCancelled;
@property(copy, nonatomic) FBSDKAccessToken* token;
-(void).cxx_destruct;
-(id)initWithToken:(id)token isCancelled:(BOOL)cancelled grantedPermissions:(id)permissions declinedPermissions:(id)permissions4;
@end

