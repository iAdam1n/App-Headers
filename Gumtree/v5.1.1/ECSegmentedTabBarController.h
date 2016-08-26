/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/ECBaseViewController.h>

@class NSMutableArray, ECBaseViewController, ECSegmentedTabBarView;

@interface ECSegmentedTabBarController : ECBaseViewController {

	NSMutableArray* _viewControllers;
	ECBaseViewController* _selectedViewController;
	ECSegmentedTabBarView* _segmentedView;

}

@property (nonatomic,retain) NSMutableArray * viewControllers;                           //@synthesize viewControllers=_viewControllers - In the implementation block
@property (nonatomic,retain) ECBaseViewController * selectedViewController;              //@synthesize selectedViewController=_selectedViewController - In the implementation block
@property (nonatomic,retain) ECSegmentedTabBarView * segmentedView;                      //@synthesize segmentedView=_segmentedView - In the implementation block
-(void)switchToTabAtIndex:(unsigned long long)arg1 ;
-(void)setSegmentedView:(ECSegmentedTabBarView *)arg1 ;
-(ECSegmentedTabBarView *)segmentedView;
-(void)handleSelectionChanged;
-(void)switchToControllerAtPosition:(unsigned long long)arg1 ;
-(id)initWithViewControllers:(id)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(NSMutableArray *)viewControllers;
-(void)setViewControllers:(NSMutableArray *)arg1 ;
-(ECBaseViewController *)selectedViewController;
-(void)setSelectedViewController:(ECBaseViewController *)arg1 ;
@end
