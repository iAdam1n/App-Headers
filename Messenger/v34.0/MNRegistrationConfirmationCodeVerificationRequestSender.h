/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:41:02 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBMReachabilityAwareNetworkerDelegate.h>

@protocol FBPhoneNumber, MNRegistrationConfirmationCodeVerificationRequestSenderDelegate;
@class NSString, FBMRestNetworkerRequest, FBMReachabilityAwareNetworker;

@interface MNRegistrationConfirmationCodeVerificationRequestSender : NSObject <FBMReachabilityAwareNetworkerDelegate> {

	NSString* _confirmationCode;
	FBMRestNetworkerRequest* _restNetworkRequest;
	FBMReachabilityAwareNetworker* _reachabilityAwareNetworker;
	id<FBPhoneNumber> _phoneNumber;
	id<MNRegistrationConfirmationCodeVerificationRequestSenderDelegate> _delegate;

}

@property (nonatomic,copy,readonly) id<FBPhoneNumber> phoneNumber;                                                             //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (assign,nonatomic,__weak) id<MNRegistrationConfirmationCodeVerificationRequestSenderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)requestParametersWithConfirmationCode:(id)arg1 phoneNumber:(id)arg2 ;
-(void)reachabilityAwareNetworker:(id)arg1 didSucceedWithResult:(id)arg2 complete:(BOOL)arg3 ;
-(void)reachabilityAwareNetworker:(id)arg1 didFailWithError:(id)arg2 ;
-(id)initWithConfirmationCode:(id)arg1 phoneNumber:(id)arg2 ;
-(void)cancel;
-(void)dealloc;
-(void)setDelegate:(id<MNRegistrationConfirmationCodeVerificationRequestSenderDelegate>)arg1 ;
-(id<MNRegistrationConfirmationCodeVerificationRequestSenderDelegate>)delegate;
-(void)start;
-(id<FBPhoneNumber>)phoneNumber;
@end

