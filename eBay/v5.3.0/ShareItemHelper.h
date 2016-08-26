/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@class ViewItemDataManager, UIViewController, UIView, UIPopoverController, EBUShareItem, NSMutableArray, UIImage, RDActivityViewController, NSString;

@interface ShareItemHelper : NSObject <UIPopoverControllerDelegate> {

	ViewItemDataManager* _dataManager;
	UIViewController* _viewController;
	UIView* _view;
	UIView* _popoverButton;
	UIPopoverController* _popover;
	EBUShareItem* _shareItem;
	NSMutableArray* _excludedSharingActivities;
	UIImage* _itemPreviewImg;
	RDActivityViewController* _activityVC;

}

@property (nonatomic,retain) UIPopoverController * popover;                           //@synthesize popover=_popover - In the implementation block
@property (nonatomic,retain) EBUShareItem * shareItem;                                //@synthesize shareItem=_shareItem - In the implementation block
@property (nonatomic,retain) NSMutableArray * excludedSharingActivities;              //@synthesize excludedSharingActivities=_excludedSharingActivities - In the implementation block
@property (nonatomic,retain) UIImage * itemPreviewImg;                                //@synthesize itemPreviewImg=_itemPreviewImg - In the implementation block
@property (nonatomic,retain) RDActivityViewController * activityVC;                   //@synthesize activityVC=_activityVC - In the implementation block
@property (nonatomic,retain) ViewItemDataManager * dataManager;                       //@synthesize dataManager=_dataManager - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * viewController;                //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,retain) UIView * view;                                           //@synthesize view=_view - In the implementation block
@property (nonatomic,retain) UIView * popoverButton;                                  //@synthesize popoverButton=_popoverButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setShareItem:(EBUShareItem *)arg1 ;
-(void)setItemPreviewImg:(UIImage *)arg1 ;
-(void)showShareSheet;
-(void)setActivityVC:(RDActivityViewController *)arg1 ;
-(RDActivityViewController *)activityVC;
-(UIView *)popoverButton;
-(id)initWithShareItem:(id)arg1 ;
-(void)shareItem:(id)arg1 ;
-(void)setPopoverButton:(UIView *)arg1 ;
-(EBUShareItem *)shareItem;
-(NSMutableArray *)excludedSharingActivities;
-(void)setExcludedSharingActivities:(NSMutableArray *)arg1 ;
-(UIImage *)itemPreviewImg;
-(void)setDataManager:(ViewItemDataManager *)arg1 ;
-(id)initWithDataManager:(id)arg1 ;
-(ViewItemDataManager *)dataManager;
-(void)registerExitTracking;
-(void)dealloc;
-(UIView *)view;
-(void)setView:(UIView *)arg1 ;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)popoverController:(id)arg1 willRepositionPopoverToRect:(inout CGRect*)arg2 inView:(inout id*)arg3 ;
-(UIPopoverController *)popover;
-(void)setPopover:(UIPopoverController *)arg1 ;
-(void)applicationDidEnterBackground;
@end
