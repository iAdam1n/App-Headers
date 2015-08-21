/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:44:05 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/DE3331E2-1165-4E9B-8894-BDF4D69820B5/ECBCricketApp.app/ECBCricketApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <ECBCricketApp/UAAction.h>

@class UAActivityViewController, UIPopoverController;

@interface UAShareAction : UAAction {

	UAActivityViewController* _lastActivityViewController;
	UIPopoverController* _popoverController;

}

@property (nonatomic,retain) UAActivityViewController * lastActivityViewController;              //@synthesize lastActivityViewController=_lastActivityViewController - In the implementation block
@property (nonatomic,retain) UIPopoverController * popoverController;                            //@synthesize popoverController=_popoverController - In the implementation block
-(void)performWithArguments:(id)arg1 actionName:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)acceptsArguments:(id)arg1 ;
-(void)setLastActivityViewController:(UAActivityViewController *)arg1 ;
-(UAActivityViewController *)lastActivityViewController;
-(void)setPopoverController:(UIPopoverController *)arg1 ;
-(UIPopoverController *)popoverController;
@end
