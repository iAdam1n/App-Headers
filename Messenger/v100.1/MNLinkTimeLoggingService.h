/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
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
