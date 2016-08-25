/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class EBUSearchTextField, UIButton, UIView, UIImageView, EUIImageView, EBUSearchBarBackgroundView, NSMutableArray, NSArray, NSLayoutConstraint, NSString;

@interface EBUSearchBarView : UIView <UIGestureRecognizerDelegate> {

	BOOL _isActive;
	BOOL _isTextFieldCenteredInActiveState;
	BOOL _showSearchBarBackground;
	BOOL _isSearchBarBackgroundFixedWidthForInactiveState;
	BOOL _isEditing;
	BOOL _isSellerSearch;
	EBUSearchTextField* _textField;
	UIButton* _cancelButton;
	UIButton* _scanButton;
	UIButton* _followButton;
	UIButton* _searchButton;
	UIView* _scanButtonContainer;
	UIImageView* _seachIconImageView;
	EUIImageView* _sellerAvatarImageView;
	EBUSearchBarBackgroundView* _barBackgroundView;
	NSMutableArray* _staticConstraints;
	NSMutableArray* _inactiveStateConstraints;
	NSMutableArray* _activeStateConstraints;
	NSArray* _currentConstraints;
	NSMutableArray* _followButtonHorizontalConstraints;
	NSMutableArray* _inactiveStateBarBackgroundHorizontalConstraints;
	NSLayoutConstraint* _inactiveStateTextFieldWidthConstraint;
	double _leftPaddingForInactiveState;
	double _rightPaddingForInctiveState;
	NSString* _sellerID;

}

@property (nonatomic,retain) EBUSearchTextField * textField;                                                //@synthesize textField=_textField - In the implementation block
@property (nonatomic,retain) UIButton * cancelButton;                                                       //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) UIButton * scanButton;                                                         //@synthesize scanButton=_scanButton - In the implementation block
@property (nonatomic,retain) UIButton * followButton;                                                       //@synthesize followButton=_followButton - In the implementation block
@property (nonatomic,retain) UIButton * searchButton;                                                       //@synthesize searchButton=_searchButton - In the implementation block
@property (nonatomic,retain) UIView * scanButtonContainer;                                                  //@synthesize scanButtonContainer=_scanButtonContainer - In the implementation block
@property (nonatomic,retain) UIImageView * seachIconImageView;                                              //@synthesize seachIconImageView=_seachIconImageView - In the implementation block
@property (nonatomic,retain) EUIImageView * sellerAvatarImageView;                                          //@synthesize sellerAvatarImageView=_sellerAvatarImageView - In the implementation block
@property (nonatomic,retain) EBUSearchBarBackgroundView * barBackgroundView;                                //@synthesize barBackgroundView=_barBackgroundView - In the implementation block
@property (nonatomic,retain) NSMutableArray * staticConstraints;                                            //@synthesize staticConstraints=_staticConstraints - In the implementation block
@property (nonatomic,retain) NSMutableArray * inactiveStateConstraints;                                     //@synthesize inactiveStateConstraints=_inactiveStateConstraints - In the implementation block
@property (nonatomic,retain) NSMutableArray * activeStateConstraints;                                       //@synthesize activeStateConstraints=_activeStateConstraints - In the implementation block
@property (nonatomic,retain) NSArray * currentConstraints;                                                  //@synthesize currentConstraints=_currentConstraints - In the implementation block
@property (nonatomic,retain) NSMutableArray * followButtonHorizontalConstraints;                            //@synthesize followButtonHorizontalConstraints=_followButtonHorizontalConstraints - In the implementation block
@property (nonatomic,retain) NSMutableArray * inactiveStateBarBackgroundHorizontalConstraints;              //@synthesize inactiveStateBarBackgroundHorizontalConstraints=_inactiveStateBarBackgroundHorizontalConstraints - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * inactiveStateTextFieldWidthConstraint;                    //@synthesize inactiveStateTextFieldWidthConstraint=_inactiveStateTextFieldWidthConstraint - In the implementation block
@property (assign,nonatomic) double leftPaddingForInactiveState;                                            //@synthesize leftPaddingForInactiveState=_leftPaddingForInactiveState - In the implementation block
@property (assign,nonatomic) double rightPaddingForInctiveState;                                            //@synthesize rightPaddingForInctiveState=_rightPaddingForInctiveState - In the implementation block
@property (assign,nonatomic) BOOL isSellerSearch;                                                           //@synthesize isSellerSearch=_isSellerSearch - In the implementation block
@property (nonatomic,retain) NSString * sellerID;                                                           //@synthesize sellerID=_sellerID - In the implementation block
@property (assign,nonatomic) BOOL isActive;                                                                 //@synthesize isActive=_isActive - In the implementation block
@property (assign,nonatomic) BOOL isTextFieldCenteredInActiveState;                                         //@synthesize isTextFieldCenteredInActiveState=_isTextFieldCenteredInActiveState - In the implementation block
@property (assign,nonatomic) BOOL showSearchBarBackground;                                                  //@synthesize showSearchBarBackground=_showSearchBarBackground - In the implementation block
@property (assign,nonatomic) BOOL isSearchBarBackgroundFixedWidthForInactiveState;                          //@synthesize isSearchBarBackgroundFixedWidthForInactiveState=_isSearchBarBackgroundFixedWidthForInactiveState - In the implementation block
@property (assign,nonatomic) BOOL isEditing;                                                                //@synthesize isEditing=_isEditing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIButton *)followButton;
-(void)setFollowButton:(UIButton *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 wantsFollowButton:(BOOL)arg2 wantsScanButton:(BOOL)arg3 ;
-(UIButton *)scanButton;
-(UIButton *)searchButton;
-(void)setIsSearchBarBackgroundFixedWidthForInactiveState:(BOOL)arg1 ;
-(void)updateWithSearchOptions:(id)arg1 animated:(BOOL)arg2 showSellerPrefixForSellerSearch:(BOOL)arg3 browsedCategory:(id)arg4 ;
-(void)setIsActive:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)isTextFieldCenteredInActiveState;
-(double)barWidthForActiveState:(BOOL)arg1 ;
-(BOOL)showSearchBarBackground;
-(void)setShowSearchBarBackground:(BOOL)arg1 ;
-(void)updateSearchBarBackgroundLayoutForInactiveStateWithLeftPadding:(double)arg1 rightPadding:(double)arg2 ;
-(void)setSearchButton:(UIButton *)arg1 ;
-(double)searchBarHeight;
-(double)searchFieldLeftViewWidth;
-(void)configureTextField;
-(double)searchFieldRightViewWidth;
-(void)barBackgroundViewTapAction:(id)arg1 ;
-(void)configureSearchBarBackground;
-(double)leftPaddingForSearchIcon;
-(double)paddingBetweenSearchIconAndTextBox;
-(void)configureSearchIcon;
-(BOOL)hasCustomSearchBarBackgroundLayoutForInactiveState;
-(void)setNeedsUpdateInactiveStateBarBackgroundHorizontalConstraints;
-(void)updateLayoutAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)updatePlaceholderWithSearchOptions:(id)arg1 browsedCategory:(id)arg2 ;
-(id)calculateAccessibilityElements;
-(void)setScanButton:(UIButton *)arg1 ;
-(void)setIsTextFieldCenteredInActiveState:(BOOL)arg1 ;
-(BOOL)isSearchBarBackgroundFixedWidthForInactiveState;
-(UIView *)scanButtonContainer;
-(void)setScanButtonContainer:(UIView *)arg1 ;
-(UIImageView *)seachIconImageView;
-(void)setSeachIconImageView:(UIImageView *)arg1 ;
-(EUIImageView *)sellerAvatarImageView;
-(void)setSellerAvatarImageView:(EUIImageView *)arg1 ;
-(EBUSearchBarBackgroundView *)barBackgroundView;
-(void)setBarBackgroundView:(EBUSearchBarBackgroundView *)arg1 ;
-(NSMutableArray *)staticConstraints;
-(void)setStaticConstraints:(NSMutableArray *)arg1 ;
-(NSMutableArray *)inactiveStateConstraints;
-(void)setInactiveStateConstraints:(NSMutableArray *)arg1 ;
-(NSMutableArray *)activeStateConstraints;
-(void)setActiveStateConstraints:(NSMutableArray *)arg1 ;
-(NSMutableArray *)followButtonHorizontalConstraints;
-(void)setFollowButtonHorizontalConstraints:(NSMutableArray *)arg1 ;
-(NSMutableArray *)inactiveStateBarBackgroundHorizontalConstraints;
-(void)setInactiveStateBarBackgroundHorizontalConstraints:(NSMutableArray *)arg1 ;
-(NSLayoutConstraint *)inactiveStateTextFieldWidthConstraint;
-(void)setInactiveStateTextFieldWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(double)leftPaddingForInactiveState;
-(void)setLeftPaddingForInactiveState:(double)arg1 ;
-(double)rightPaddingForInctiveState;
-(void)setRightPaddingForInctiveState:(double)arg1 ;
-(BOOL)isSellerSearch;
-(NSString *)sellerID;
-(void)setSellerID:(NSString *)arg1 ;
-(void)setIsSellerSearch:(BOOL)arg1 ;
-(void)setIsEditing:(BOOL)arg1 ;
-(void)layoutSubviews;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(BOOL)isActive;
-(BOOL)isEditing;
-(UIButton *)cancelButton;
-(void)setCancelButton:(UIButton *)arg1 ;
-(void)updateConstraints;
-(void)setIsActive:(BOOL)arg1 ;
-(EBUSearchTextField *)textField;
-(void)setCurrentConstraints:(NSArray *)arg1 ;
-(NSArray *)currentConstraints;
-(void)setTextField:(EBUSearchTextField *)arg1 ;
@end

