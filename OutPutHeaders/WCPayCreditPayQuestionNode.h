/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class WCPayCreditPayQuestionStruct;

@interface WCPayCreditPayQuestionNode : XXUnknownSuperclass {
	BOOL m_bSelect;
	BOOL m_bTwoLevel;
	WCPayCreditPayQuestionStruct* m_oQuestionNode;
	WCPayCreditPayQuestionStruct* m_oNextQuestionNode;
}
@property(retain, nonatomic) WCPayCreditPayQuestionStruct* m_oNextQuestionNode;
@property(retain, nonatomic) WCPayCreditPayQuestionStruct* m_oQuestionNode;
@property(assign, nonatomic) BOOL m_bTwoLevel;
@property(assign, nonatomic) BOOL m_bSelect;
-(void).cxx_destruct;
@end

