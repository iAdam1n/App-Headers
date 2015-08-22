/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:46 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBSessionClassProvidable.h>
#import <Messenger/FBMAppInitializedListening.h>

@protocol FBMAppProperties;
@class FBMNetworkMonitorView, FBUserSession, MNUserSettings, NSString;

@interface FBMNetworkMonitorController : NSObject <FBSessionClassProvidable, FBMAppInitializedListening> {

	FBMNetworkMonitorView* _view;
	FBUserSession* _session;
	id<FBMAppProperties> _appProperties;
	MNUserSettings* _userSettings;
	BOOL _ligerIsEnabled;
	unsigned long long _appStartType;

}

@property (assign,getter=isDisabled,nonatomic) BOOL disabled; 
@property (assign,nonatomic) unsigned long long appStartType;              //@synthesize appStartType=_appStartType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithUserSession:(id)arg1 appProperties:(id)arg2 userSettings:(id)arg3 ;
-(unsigned long long)appStartType;
-(void)_showNetworkAppStartStateType;
-(void)setLigerEnabled:(BOOL)arg1 ;
-(void)_didEnterForeground:(id)arg1 ;
-(void)_showMessagingFetchMethod;
-(void)_didReceiveFetcherTriggered:(id)arg1 ;
-(void)setAppStartType:(unsigned long long)arg1 ;
-(void)applicationDidCompleteSettingUpBackgroundServices;
-(void)applicationDidCompleteSettingUpAllServices;
-(void)dealloc;
-(void)stop;
-(void)start;
-(void)setDisabled:(BOOL)arg1 ;
-(BOOL)isDisabled;
@end
