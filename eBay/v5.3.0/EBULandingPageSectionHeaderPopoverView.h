/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <UIKit/UICollectionReusableView.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <eBay/BlockerViewProtocol.h>
#import <eBay/EBUDropdownIndicatorButtonDelegate.h>
#import <eBay/RotatingPopoverDelegate.h>

@protocol EBULandingPageSectionHeaderPopoverProtocol;
@class NSArray, UIView, EBUDropdownIndicatorButton, UIColor, UITableView, BlockerView, UIScrollView, UIButton, NSLayoutConstraint, NSString;

@interface EBULandingPageSectionHeaderPopoverView : UICollectionReusableView <UITableViewDataSource, UITableViewDelegate, BlockerViewProtocol, EBUDropdownIndicatorButtonDelegate, RotatingPopoverDelegate> {

	BOOL _animatingIn;
	BOOL _showsSelection;
	BOOL _showsBackButton;
	BOOL _animatingOut;
	BOOL _previousScrollEnabled;
	BOOL _canShowMenu;
	id<EBULandingPageSectionHeaderPopoverProtocol> _delegate;
	NSArray* _menuItems;
	UIView* _bottomRule;
	EBUDropdownIndicatorButton* _popoverButton;
	UIColor* _expandedBarBackgroundColor;
	UIColor* _collapsedBarBackgroundColor;
	long long _selectedItem;
	UIView* _containerView;
	UIView* _containerBackgroundView;
	UITableView* _popupTable;
	BlockerView* _popupBlocker;
	UIView* _backgroundBlocker;
	UIScrollView* _parentScrollView;
	UIButton* _backButton;
	NSLayoutConstraint* _mainButtonLeftConstraint;
	NSLayoutConstraint* _mainButtonRightConstraint;
	NSString* _backButtonTitle;
	double _bottomRuleAlphaBeforeExpansion;

}

@property (nonatomic,retain) BlockerView * popupBlocker;                                                  //@synthesize popupBlocker=_popupBlocker - In the implementation block
@property (nonatomic,retain) UIView * backgroundBlocker;                                                  //@synthesize backgroundBlocker=_backgroundBlocker - In the implementation block
@property (assign) BOOL animatingOut;                                                                     //@synthesize animatingOut=_animatingOut - In the implementation block
@property (assign) BOOL animatingIn;                                                                      //@synthesize animatingIn=_animatingIn - In the implementation block
@property (assign,nonatomic,__weak) UIScrollView * parentScrollView;                                      //@synthesize parentScrollView=_parentScrollView - In the implementation block
@property (assign) BOOL previousScrollEnabled;                                                            //@synthesize previousScrollEnabled=_previousScrollEnabled - In the implementation block
@property (assign) BOOL canShowMenu;                                                                      //@synthesize canShowMenu=_canShowMenu - In the implementation block
@property (nonatomic,retain) UIButton * backButton;                                                       //@synthesize backButton=_backButton - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * mainButtonLeftConstraint;                               //@synthesize mainButtonLeftConstraint=_mainButtonLeftConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * mainButtonRightConstraint;                              //@synthesize mainButtonRightConstraint=_mainButtonRightConstraint - In the implementation block
@property (nonatomic,retain) NSString * backButtonTitle;                                                  //@synthesize backButtonTitle=_backButtonTitle - In the implementation block
@property (assign,nonatomic) double bottomRuleAlphaBeforeExpansion;                                       //@synthesize bottomRuleAlphaBeforeExpansion=_bottomRuleAlphaBeforeExpansion - In the implementation block
@property (assign,nonatomic,__weak) id<EBULandingPageSectionHeaderPopoverProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * menuItems;                                                         //@synthesize menuItems=_menuItems - In the implementation block
@property (readonly) UIView * viewToPopFrom; 
@property (nonatomic,retain) UIView * bottomRule;                                                         //@synthesize bottomRule=_bottomRule - In the implementation block
@property (assign,nonatomic,__weak) EBUDropdownIndicatorButton * popoverButton;                           //@synthesize popoverButton=_popoverButton - In the implementation block
@property (nonatomic,retain) UIColor * expandedBarBackgroundColor;                                        //@synthesize expandedBarBackgroundColor=_expandedBarBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * collapsedBarBackgroundColor;                                       //@synthesize collapsedBarBackgroundColor=_collapsedBarBackgroundColor - In the implementation block
@property (assign) long long selectedItem;                                                                //@synthesize selectedItem=_selectedItem - In the implementation block
@property (assign,nonatomic) BOOL showsSelection;                                                         //@synthesize showsSelection=_showsSelection - In the implementation block
@property (assign,nonatomic) BOOL showsBackButton;                                                        //@synthesize showsBackButton=_showsBackButton - In the implementation block
@property (nonatomic,retain) UIView * containerView;                                                      //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) UIView * containerBackgroundView;                                            //@synthesize containerBackgroundView=_containerBackgroundView - In the implementation block
@property (nonatomic,retain) UITableView * popupTable;                                                    //@synthesize popupTable=_popupTable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)firstItemTopInset;
-(EBUDropdownIndicatorButton *)popoverButton;
-(void)setPopoverButton:(EBUDropdownIndicatorButton *)arg1 ;
-(void)setExpandedBarBackgroundColor:(UIColor *)arg1 ;
-(void)setCollapsedBarBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)collapsedBarBackgroundColor;
-(UITableView *)popupTable;
-(void)setShowsBackButton:(BOOL)arg1 ;
-(void)styleButtonWithoutDropdown;
-(void)setMenuTitle:(id)arg1 ;
-(void)setMenuItems:(id)arg1 withBackButtonTitle:(id)arg2 ;
-(void)showDropdown:(BOOL)arg1 ;
-(void)rotatingPopoverWillDismissPopoverManually:(id)arg1 ;
-(UIView *)viewToPopFrom;
-(void)blockerWasTapped;
-(void)commonButtonSetup:(id)arg1 ;
-(double)backButtonWidth;
-(void)handleAccessibilityEscape;
-(void)setCanShowMenu:(BOOL)arg1 ;
-(void)cancelPopupWithAnimation:(BOOL)arg1 ;
-(void)cancelPopupWithAnimation:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)animatingOut;
-(BlockerView *)popupBlocker;
-(UIView *)backgroundBlocker;
-(void)setPopupTable:(UITableView *)arg1 ;
-(void)setPopupBlocker:(BlockerView *)arg1 ;
-(void)setBackgroundBlocker:(UIView *)arg1 ;
-(UIScrollView *)parentScrollView;
-(BOOL)previousScrollEnabled;
-(void)setParentScrollView:(UIScrollView *)arg1 ;
-(void)setAnimatingOut:(BOOL)arg1 ;
-(UIColor *)expandedBarBackgroundColor;
-(void)setAnimatingIn:(BOOL)arg1 ;
-(void)setPreviousScrollEnabled:(BOOL)arg1 ;
-(void)setBottomRuleAlphaBeforeExpansion:(double)arg1 ;
-(void)showDropdown:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)styleCell:(id)arg1 selected:(BOOL)arg2 ;
-(BOOL)indexPathIsBackButton:(id)arg1 inTableView:(id)arg2 ;
-(void)backButtonPressed:(id)arg1 ;
-(void)style2ButtonWithoutDropdown;
-(void)setBottomRule:(UIView *)arg1 ;
-(BOOL)animatingIn;
-(BOOL)showsBackButton;
-(UIView *)containerBackgroundView;
-(void)setContainerBackgroundView:(UIView *)arg1 ;
-(BOOL)canShowMenu;
-(NSLayoutConstraint *)mainButtonLeftConstraint;
-(void)setMainButtonLeftConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)mainButtonRightConstraint;
-(void)setMainButtonRightConstraint:(NSLayoutConstraint *)arg1 ;
-(double)bottomRuleAlphaBeforeExpansion;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<EBULandingPageSectionHeaderPopoverProtocol>)arg1 ;
-(void)dealloc;
-(void)removeFromSuperview;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<EBULandingPageSectionHeaderPopoverProtocol>)delegate;
-(UIView *)containerView;
-(long long)numberOfSections;
-(void)setContainerView:(UIView *)arg1 ;
-(NSString *)backButtonTitle;
-(void)setBackButtonTitle:(NSString *)arg1 ;
-(void)prepareForReuse;
-(void)setSelectedItem:(long long)arg1 ;
-(long long)selectedItem;
-(void)setMenuItems:(NSArray *)arg1 ;
-(id)accessibilityElementAtIndex:(long long)arg1 ;
-(long long)indexOfAccessibilityElement:(id)arg1 ;
-(id)accessibilityElements;
-(BOOL)popoverControllerShouldDismissPopover:(id)arg1 ;
-(NSArray *)menuItems;
-(void)setShowsSelection:(BOOL)arg1 ;
-(BOOL)showsSelection;
-(UIButton *)backButton;
-(UIView *)bottomRule;
-(void)setBackButton:(UIButton *)arg1 ;
@end
