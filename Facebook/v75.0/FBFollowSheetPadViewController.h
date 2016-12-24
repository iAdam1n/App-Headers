/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:11 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>

@protocol FBFollowSheetPadViewControllerDelegate;
@class CKComponentHostingView;

@interface FBFollowSheetPadViewController : UIViewController {

	CKComponentHostingView* _followSheetView;
	id<FBFollowSheetPadViewControllerDelegate> _delegate;

}
+(id)newWithPerson:(id)arg1 session:(id)arg2 delegate:(id)arg3 ;
-(void)dismissFollowSheet;
-(id)initWithModel:(id)arg1 componentProvider:(Class)arg2 fieldSetToObserve:(const FBGraphQLFieldSetRef)arg3 session:(id)arg4 delegate:(id)arg5 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(long long)preferredInterfaceOrientationForPresentation;
-(BOOL)accessibilityPerformEscape;
-(CGSize)popoverContentSize;
-(void)updateModel:(id)arg1 ;
@end
