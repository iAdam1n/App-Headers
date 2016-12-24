/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBBackgroundStateManaging.h>
#import <Messenger/FBExtensionBackgroundStateListener.h>

@class NSString;

@interface FBExtensionBackgroundStateManager : NSObject <FBBackgroundStateManaging, FBExtensionBackgroundStateListener> {

	unsigned long long _extensionState;
	BOOL _applicationBecomingActive;

}

@property (assign,getter=isApplicationBecomingActive,nonatomic) BOOL applicationBecomingActive;              //@synthesize applicationBecomingActive=_applicationBecomingActive - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isApplicationBackgrounded;
-(BOOL)isApplicationActive;
-(void)setApplicationBecomingActive:(BOOL)arg1 ;
-(BOOL)supportsBackgroundRefreshStatus;
-(BOOL)isApplicationInactive;
-(BOOL)isApplicationBecomingActive;
-(void)extensionDidReturnToHostApp;
-(void)_extensionWillEnterForeground;
-(void)_extensionDidEnterBackground;
-(void)_extensionWillResignActive;
-(void)_extensionDidBecomeActive;
-(id)init;
-(void)dealloc;
-(long long)applicationState;
-(unsigned long long)beginBackgroundTaskWithName:(id)arg1 expirationHandler:(/*^block*/id)arg2 ;
-(void)endBackgroundTask:(unsigned long long)arg1 ;
-(void)setMinimumBackgroundFetchInterval:(double)arg1 ;
-(long long)backgroundRefreshStatus;
-(void)extensionDidBecomeActive;
@end
