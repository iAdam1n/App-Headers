/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMReachabilityAwareNetworkerDelegate.h>

@protocol MNRegistrationPhoneVerificationRequestSenderDelegate;
@class FBSimpleNetworkerRequest, FBMReachabilityAwareNetworker, LPPhoneNumber, NSString;

@interface MNRegistrationPhoneVerificationRequestSender : NSObject <FBMReachabilityAwareNetworkerDelegate> {

	FBSimpleNetworkerRequest* _restNetworkRequest;
	FBMReachabilityAwareNetworker* _reachabilityAwareNetworker;
	LPPhoneNumber* _phoneNumber;
	id<MNRegistrationPhoneVerificationRequestSenderDelegate> _delegate;

}

@property (nonatomic,readonly) LPPhoneNumber * phoneNumber;                                                         //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (assign,nonatomic,__weak) id<MNRegistrationPhoneVerificationRequestSenderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reachabilityAwareNetworker:(id)arg1 didSucceedWithResult:(id)arg2 complete:(BOOL)arg3 ;
-(void)reachabilityAwareNetworker:(id)arg1 didFailWithError:(id)arg2 ;
-(void)cancel;
-(void)setDelegate:(id<MNRegistrationPhoneVerificationRequestSenderDelegate>)arg1 ;
-(void)dealloc;
-(id<MNRegistrationPhoneVerificationRequestSenderDelegate>)delegate;
-(void)start;
-(LPPhoneNumber *)phoneNumber;
-(id)initWithPhoneNumber:(id)arg1 ;
@end
