/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:22 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, FBSSOLoginControllerDelegate;
@class ACAccount, NSObject;

@interface FBSSOLoginAvailabilityObserver : NSObject {

	ACAccount* _fbAccount;
	BOOL _waitingForAccountStoreAccessRequest;
	NSObject*<OS_dispatch_queue> _queue;
	id<FBSSOLoginControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBSSOLoginControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)startObservingSSOAvailability;
-(void)_determineSSOLoginAvailabilityForDelegate;
-(id)init;
-(void)setDelegate:(id<FBSSOLoginControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBSSOLoginControllerDelegate>)delegate;
-(void)_accountStoreChanged:(id)arg1 ;
@end

