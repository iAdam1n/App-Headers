/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:18 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNServiceControllable.h>
#import <Messenger/FBClassProvidable.h>

@class NSUserDefaults, FBAnalyticsPerfLogger, NSBundle, NSString;

@interface MNLinkTimeLoggingService : NSObject <MNServiceControllable, FBClassProvidable> {

	NSUserDefaults* _defaults;
	FBAnalyticsPerfLogger* _perfLogger;
	NSBundle* _shellBundle;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithUserDefaults:(id)arg1 perfLogger:(id)arg2 shellBundle:(id)arg3 ;
-(void)stop;
-(void)start:(id)arg1 ;
-(void)handleIdle;
@end
