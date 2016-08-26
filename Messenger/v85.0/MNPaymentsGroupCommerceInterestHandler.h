/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:20 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNThreadMessageSenderPluginServiceExtension.h>

@class NSMutableDictionary, FBUserSession, NSString;

@interface MNPaymentsGroupCommerceInterestHandler : NSObject <MNThreadMessageSenderPluginServiceExtension> {

	NSMutableDictionary* _commerceSellerOptionIds;
	FBUserSession* _userSession;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithUserSession:(id)arg1 ;
-(void)handleEnqueuedMessage:(id)arg1 ;
-(void)handleSentMessage:(id)arg1 ;
-(void)handleFailedMessage:(id)arg1 error:(id)arg2 ;
-(void)handleIncomingInterestWithRecipientId:(id)arg1 withCommerceSellerOptionId:(id)arg2 ;
-(void)handleOutgoingMessagesWithRecipientId:(id)arg1 ;
@end
