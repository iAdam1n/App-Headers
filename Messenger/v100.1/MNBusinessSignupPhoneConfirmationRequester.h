/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNBusinessSignupPhoneConfirmationRequesterDelegate;
@class FBUserSession, FBGraphQLMutationHandle;

@interface MNBusinessSignupPhoneConfirmationRequester : NSObject {

	FBUserSession* _session;
	FBGraphQLMutationHandle* _requestHandle;
	id<MNBusinessSignupPhoneConfirmationRequesterDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNBusinessSignupPhoneConfirmationRequesterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)startConfirmationRequestWithPhoneNumber:(id)arg1 ;
-(void)processConfirmationWithCode:(id)arg1 ;
-(void)setDelegate:(id<MNBusinessSignupPhoneConfirmationRequesterDelegate>)arg1 ;
-(id<MNBusinessSignupPhoneConfirmationRequesterDelegate>)delegate;
-(id)initWithSession:(id)arg1 ;
@end
