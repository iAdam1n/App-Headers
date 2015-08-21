/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:41:00 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBClassProvidable.h>
#import <Messenger/FBQIInviteRequesterDelegate.h>
#import <Messenger/MNThreadViewModelConfigurable.h>

@protocol FBQIInviteRequesterDelegate;
@class FBUserSession, FBQIInviteRequester, NSString, MNThreadViewModel;

@interface MNThreadQuickInviteController : NSObject <FBClassProvidable, FBQIInviteRequesterDelegate, MNThreadViewModelConfigurable> {

	FBUserSession* _session;
	FBQIInviteRequester* _inviteRequester;
	NSString* _appId;
	id<FBQIInviteRequesterDelegate> _delegate;
	MNThreadViewModel* _threadViewModel;

}

@property (assign,nonatomic,__weak) id<FBQIInviteRequesterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MNThreadViewModel * threadViewModel;                          //@synthesize threadViewModel=_threadViewModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)inviteRequesterDidSendInvite:(id)arg1 ;
-(void)inviteRequester:(id)arg1 didFailWithError:(id)arg2 ;
-(MNThreadViewModel *)threadViewModel;
-(void)setThreadViewModel:(MNThreadViewModel *)arg1 ;
-(void)configureThreadViewModelDependenciesWith:(id)arg1 ;
-(void)tearDownThreadViewModelDependencies;
-(void)_configureInviteRequesterWithThreadViewModel:(id)arg1 ;
-(void)sendInviteFromSource:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<FBQIInviteRequesterDelegate>)arg1 ;
-(id<FBQIInviteRequesterDelegate>)delegate;
@end

