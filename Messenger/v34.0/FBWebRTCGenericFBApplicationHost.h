/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:51 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBClassProvidable.h>
#import <Messenger/FBWebRTCHostApplication.h>

@class FBWebRTCHostApplicationListenerAnnouncer, NSString;

@interface FBWebRTCGenericFBApplicationHost : NSObject <FBClassProvidable, FBWebRTCHostApplication> {

	BOOL _loadedInForeground;
	FBWebRTCHostApplicationListenerAnnouncer* _announcer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isHostApplicationReadyForVoIP,nonatomic,readonly) BOOL hostApplicationReadyForVoIP; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)_onFullyEnterForegroundNotification:(id)arg1 ;
-(id)_findTopModalViewController;
-(id)_findRootViewController;
-(id)modalParentViewController;
-(void)addHostApplicationListener:(id)arg1 ;
-(void)removeHostApplicationListener:(id)arg1 ;
-(BOOL)isHostApplicationReadyForVoIP;
-(void)dealloc;
-(id)init;
@end

