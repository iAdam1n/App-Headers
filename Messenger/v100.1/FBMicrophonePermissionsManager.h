/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBMicrophonePermissionsManager : NSObject
+(BOOL)shouldPresentAuthorizationPrompt;
+(BOOL)userDidAuthorizeMicrophoneAccess;
+(BOOL)userDidDenyMicrophoneAccess;
+(int)ios6GetMicrophoneAccess;
+(id)sharedInstance;
-(void)requestMicrophoneAccessWithPerformBlock:(/*^block*/id)arg1 failureBlock:(/*^block*/id)arg2 ;
-(void)_executeBlockOnMainThread:(/*^block*/id)arg1 ;
-(void)_presentMicrophonePermissionsPromptWithAccessGrantedBlock:(/*^block*/id)arg1 accessDeniedBlock:(/*^block*/id)arg2 ;
@end
