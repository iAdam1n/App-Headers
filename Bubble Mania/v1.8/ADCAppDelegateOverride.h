/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:14 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIApplicationDelegate.h>

@class NSString, UIWindow;

@interface ADCAppDelegateOverride : NSObject <UIApplicationDelegate> {

	id _realAppDelegate;

}

@property (nonatomic,retain) id realAppDelegate;                    //@synthesize realAppDelegate=_realAppDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIWindow * window; 
-(id)realAppDelegate;
-(void)setRealAppDelegate:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(unsigned long long)application:(id)arg1 supportedInterfaceOrientationsForWindow:(id)arg2 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
@end

