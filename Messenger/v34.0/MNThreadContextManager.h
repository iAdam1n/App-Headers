/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:47 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBClassProvidable.h>

@protocol MNAuthenticationManager;
@class MNThreadContextLoader, MNThreadContextManagerListenerAnnouncer, FBUserSession, MNThreadContextExperimentContext, NSString;

@interface MNThreadContextManager : NSObject <FBClassProvidable> {

	MNThreadContextLoader* _threadContextLoader;
	MNThreadContextManagerListenerAnnouncer* _threadContextManagerListenerAnnoncer;
	FBUserSession* _session;
	id<MNAuthenticationManager> _authenticationManager;
	MNThreadContextExperimentContext* _threadContextExperimentContext;
	unsigned long long _threadContextExperimentContextState;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithThreadContextLaoder:(id)arg1 threadContextManagerListenerAnnoncer:(id)arg2 authenticationManager:(id)arg3 session:(id)arg4 ;
-(void)_initThreadContextExperimentContextIfNecessary;
-(BOOL)_passesGating;
-(id)_loadThreadContextForThreadKey:(id)arg1 usersByUserId:(id)arg2 firstSenderName:(id)arg3 numberOfMembers:(long long)arg4 ;
-(id)threadContextViewModelForThreadKey:(id)arg1 oldestLoadedMessageSenderId:(id)arg2 isFirstMessageLoaded:(BOOL)arg3 usersByUserId:(id)arg4 isEmptyThread:(BOOL)arg5 numberOfMembers:(long long)arg6 ;
@end
