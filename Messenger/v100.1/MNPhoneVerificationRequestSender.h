/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMReachabilityAwareNetworkerDelegate.h>

@protocol MNPhoneVerificationRequestSenderDelegate;
@class FBMReachabilityAwareNetworker, NSString;

@interface MNPhoneVerificationRequestSender : NSObject <FBMReachabilityAwareNetworkerDelegate> {

	FBMReachabilityAwareNetworker* _reachabilityAwareNetworker;
	id<MNPhoneVerificationRequestSenderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNPhoneVerificationRequestSenderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)titleStringForErrorCode:(long long)arg1 ;
+(id)messageStringForErrorCode:(long long)arg1 ;
-(void)reachabilityAwareNetworker:(id)arg1 didSucceedWithResult:(id)arg2 complete:(BOOL)arg3 ;
-(void)reachabilityAwareNetworker:(id)arg1 didFailWithError:(id)arg2 ;
-(id)initWithSession:(id)arg1 phoneNumber:(id)arg2 ;
-(id)initWithSession:(id)arg1 phoneNumber:(id)arg2 searchPrivacyOption:(unsigned long long)arg3 shouldEnableSMSActivation:(BOOL)arg4 ;
-(void)cancel;
-(void)setDelegate:(id<MNPhoneVerificationRequestSenderDelegate>)arg1 ;
-(void)dealloc;
-(id<MNPhoneVerificationRequestSenderDelegate>)delegate;
-(void)start;
@end
