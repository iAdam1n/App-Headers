/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:49 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBPaymentsPeerToPeerTransferCoordinatorListener.h>

@class NSMutableDictionary, NSString;

@interface FBPaymentsPeerToPeerRiskStateMap : NSObject <FBPaymentsPeerToPeerTransferCoordinatorListener> {

	NSMutableDictionary* _riskStatesByTransferFBID;
	NSString* _currentUserFBID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)riskStateForTransferWithFBID:(id)arg1 ;
-(void)setRiskState:(long long)arg1 forTransferWithFBID:(id)arg2 ;
-(void)didUpdateTransfer:(id)arg1 ;
-(id)initWithTransferCoordinator:(id)arg1 session:(id)arg2 ;
-(id)init;
@end

