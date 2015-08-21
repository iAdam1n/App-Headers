/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:41:01 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
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
-(id)initWithSession:(id)arg1 phoneNumber:(id)arg2 searchPrivacyOption:(unsigned long long)arg3 ;
-(void)cancel;
-(void)dealloc;
-(void)setDelegate:(id<MNPhoneVerificationRequestSenderDelegate>)arg1 ;
-(id<MNPhoneVerificationRequestSenderDelegate>)delegate;
-(void)start;
@end

