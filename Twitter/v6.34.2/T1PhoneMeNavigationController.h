/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:25 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/T1PhoneTabNavigationController.h>

@class T1AddAvatarTakeoverPromptViewController;

@interface T1PhoneMeNavigationController : T1PhoneTabNavigationController {

	T1AddAvatarTakeoverPromptViewController* _promptViewController;

}

@property (nonatomic,retain) T1AddAvatarTakeoverPromptViewController * promptViewController;              //@synthesize promptViewController=_promptViewController - In the implementation block
+(id)panelID;
-(id)scribePage;
-(void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1 ;
-(id)rootTabViewControllerForAccount:(id)arg1 ;
-(void)setPromptViewController:(T1AddAvatarTakeoverPromptViewController *)arg1 ;
-(T1AddAvatarTakeoverPromptViewController *)promptViewController;
-(void)tabView:(id)arg1 wasSelected:(BOOL)arg2 ;
-(void)tabWasLongPressed;
@end
