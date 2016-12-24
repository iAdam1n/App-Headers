/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:12 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBFeedAwesomizerProfileListCarSortSheetViewControllerProtocol.h>

@protocol FBFeedAwesomizerProfileListCartSortSheetPadViewControllerDelegate;
@class CKComponentHostingView, NSString;

@interface FBFeedAwesomizerProfileListCardSortSheetPadViewController : UIViewController <FBFeedAwesomizerProfileListCarSortSheetViewControllerProtocol> {

	CKComponentHostingView* _sortSheetView;
	id<FBFeedAwesomizerProfileListCartSortSheetPadViewControllerDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)sortTapAction:(id)arg1 sortMode:(id)arg2 ;
-(void)filterTapAction:(id)arg1 filterMode:(id)arg2 ;
-(void)dismissSortSheet;
-(id)initWithModel:(id)arg1 componentProvider:(Class)arg2 delegate:(id)arg3 ;
-(void)loadView;
-(BOOL)accessibilityPerformEscape;
-(void)updateModel:(id)arg1 ;
@end
