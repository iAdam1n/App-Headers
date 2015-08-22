/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:58 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/MNContactsSyncLock.h>
#import <Messenger/FBSessionClassProvidable.h>

@class MNContactsSyncLockDelegateAnnouncer, FBNetworker, FBUserSession, MNUserSettings, MNGraphGlobalContactsSyncLockRequest, NSString;

@interface MNGraphGlobalContactsSyncLock : NSObject <MNContactsSyncLock, FBSessionClassProvidable> {

	MNContactsSyncLockDelegateAnnouncer* _delegateAnnouncer;
	FBNetworker* _networker;
	FBUserSession* _session;
	MNUserSettings* _userSettings;
	MNGraphGlobalContactsSyncLockRequest* _currentRequest;

}

@property (nonatomic,retain) MNContactsSyncLockDelegateAnnouncer * delegateAnnouncer;              //@synthesize delegateAnnouncer=_delegateAnnouncer - In the implementation block
@property (nonatomic,retain) FBNetworker * networker;                                              //@synthesize networker=_networker - In the implementation block
@property (nonatomic,retain) FBUserSession * session;                                              //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) MNUserSettings * userSettings;                                        //@synthesize userSettings=_userSettings - In the implementation block
@property (nonatomic,retain) MNGraphGlobalContactsSyncLockRequest * currentRequest;                //@synthesize currentRequest=_currentRequest - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(FBNetworker *)networker;
-(void)setUserSettings:(MNUserSettings *)arg1 ;
-(void)_contactsSyncLockValueChanged:(id)arg1 ;
-(id)initWithSession:(id)arg1 userSettings:(id)arg2 ;
-(id)_setLockValueTo:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(id)turnOffWithCompletionHandler:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(id)turnOnWithCompletionHandler:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(MNContactsSyncLockDelegateAnnouncer *)delegateAnnouncer;
-(void)setDelegateAnnouncer:(MNContactsSyncLockDelegateAnnouncer *)arg1 ;
-(void)setNetworker:(FBNetworker *)arg1 ;
-(void)setCurrentRequest:(MNGraphGlobalContactsSyncLockRequest *)arg1 ;
-(void)addDelegate:(id)arg1 ;
-(void)dealloc;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
-(MNGraphGlobalContactsSyncLockRequest *)currentRequest;
-(void)removeDelegate:(id)arg1 ;
-(MNUserSettings *)userSettings;
@end
