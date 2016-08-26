/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:45 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/RCTViewControllerProtocol.h>

@protocol UILayoutSupport, RCTWrapperViewControllerNavigationListener;
@class UIView, RCTEventDispatcher, RCTNavItem, NSString;

@interface RCTWrapperViewController : UIViewController <RCTViewControllerProtocol> {

	UIView* _wrapperView;
	UIView* _contentView;
	RCTEventDispatcher* _eventDispatcher;
	double _previousTopLayoutLength;
	double _previousBottomLayoutLength;
	id<UILayoutSupport> _currentTopLayoutGuide;
	id<UILayoutSupport> _currentBottomLayoutGuide;
	id<RCTWrapperViewControllerNavigationListener> _navigationListener;
	RCTNavItem* _navItem;

}

@property (assign,nonatomic,__weak) id<RCTWrapperViewControllerNavigationListener> navigationListener;              //@synthesize navigationListener=_navigationListener - In the implementation block
@property (nonatomic,retain) RCTNavItem * navItem;                                                                  //@synthesize navItem=_navItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<UILayoutSupport> currentTopLayoutGuide;                                           //@synthesize currentTopLayoutGuide=_currentTopLayoutGuide - In the implementation block
@property (nonatomic,readonly) id<UILayoutSupport> currentBottomLayoutGuide;                                        //@synthesize currentBottomLayoutGuide=_currentBottomLayoutGuide - In the implementation block
-(id<UILayoutSupport>)currentTopLayoutGuide;
-(id<UILayoutSupport>)currentBottomLayoutGuide;
-(RCTNavItem *)navItem;
-(id)initWithNavItem:(id)arg1 ;
-(void)setNavItem:(RCTNavItem *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithContentView:(id)arg1 ;
-(id<RCTWrapperViewControllerNavigationListener>)navigationListener;
-(void)setNavigationListener:(id<RCTWrapperViewControllerNavigationListener>)arg1 ;
@end
