/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:19:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/08508F9E-DA8B-4AFD-AB09-7444BD482D44/ECBCricketApp.app/ECBCricketApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSProxy.h>
#import <UIKit/UIApplicationDelegate.h>

@protocol UIApplicationDelegate;
@class NSObject, NSString, UIWindow;

@interface UAAppDelegateProxy : NSProxy <UIApplicationDelegate> {

	NSObject*<UIApplicationDelegate> _airshipAppDelegate;
	NSObject*<UIApplicationDelegate> _originalAppDelegate;

}

@property (nonatomic,retain) NSObject*<UIApplicationDelegate> airshipAppDelegate;               //@synthesize airshipAppDelegate=_airshipAppDelegate - In the implementation block
@property (nonatomic,retain) NSObject*<UIApplicationDelegate> originalAppDelegate;              //@synthesize originalAppDelegate=_originalAppDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIWindow * window; 
-(BOOL)airshipDelegateRespondsToSelector:(SEL)arg1 ;
-(NSObject*<UIApplicationDelegate>)airshipAppDelegate;
-(void)setOriginalAppDelegate:(NSObject*<UIApplicationDelegate>)arg1 ;
-(void)setAirshipAppDelegate:(NSObject*<UIApplicationDelegate>)arg1 ;
-(NSObject*<UIApplicationDelegate>)originalAppDelegate;
-(id)init;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 fetchCompletionHandler:(/*^block*/id)arg3 ;
-(void)application:(id)arg1 handleActionWithIdentifier:(id)arg2 forRemoteNotification:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
@end
