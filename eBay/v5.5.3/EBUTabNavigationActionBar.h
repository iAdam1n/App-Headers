/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:14 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <eBay/EBUNavigationActionBar.h>
#import <eBay/EBNShoppingCartObserver.h>

@class UIImageView, EUILabel, EUIBadgedButton, EUIButton, NSString, NSLayoutConstraint, NSArray;

@interface EBUTabNavigationActionBar : EBUNavigationActionBar <EBNShoppingCartObserver> {

	BOOL _wantsSearchButton;
	BOOL _useCompactLayout;
	UIImageView* _logoView;
	EUILabel* _titleLabel;
	EUIBadgedButton* _cartButton;
	EUIBadgedButton* _actionButton;
	EUIButton* _searchButton;
	NSString* _title;
	NSLayoutConstraint* _pinShowActionButton;
	NSLayoutConstraint* _pinHideActionButton;
	NSLayoutConstraint* _cartRightEdgeConstraint;
	NSLayoutConstraint* _centeredLogoViewConstraints;
	NSArray* _leftAlignedLogoViewConstraints;

}

@property (nonatomic,retain) UIImageView * logoView;                                        //@synthesize logoView=_logoView - In the implementation block
@property (nonatomic,retain) EUILabel * titleLabel;                                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) EUIBadgedButton * cartButton;                                  //@synthesize cartButton=_cartButton - In the implementation block
@property (nonatomic,retain) EUIBadgedButton * actionButton;                                //@synthesize actionButton=_actionButton - In the implementation block
@property (nonatomic,retain) EUIButton * searchButton;                                      //@synthesize searchButton=_searchButton - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * pinShowActionButton;                      //@synthesize pinShowActionButton=_pinShowActionButton - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * pinHideActionButton;                      //@synthesize pinHideActionButton=_pinHideActionButton - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * cartRightEdgeConstraint;                  //@synthesize cartRightEdgeConstraint=_cartRightEdgeConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * centeredLogoViewConstraints;              //@synthesize centeredLogoViewConstraints=_centeredLogoViewConstraints - In the implementation block
@property (nonatomic,retain) NSArray * leftAlignedLogoViewConstraints;                      //@synthesize leftAlignedLogoViewConstraints=_leftAlignedLogoViewConstraints - In the implementation block
@property (assign,nonatomic) BOOL useCompactLayout;                                         //@synthesize useCompactLayout=_useCompactLayout - In the implementation block
@property (nonatomic,retain) NSString * title;                                              //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) BOOL wantsSearchButton;                                        //@synthesize wantsSearchButton=_wantsSearchButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(EUIBadgedButton *)cartButton;
-(void)setCartButton:(EUIBadgedButton *)arg1 ;
-(void)setupBarItems:(id)arg1 ;
-(void)actionButtonAction:(id)arg1 ;
-(void)cartButtonAction:(id)arg1 ;
-(void)updateCartButtonVisibility;
-(id)barItemView:(unsigned long long)arg1 ;
-(BOOL)isActionButtonShowing;
-(void)updateCartForAccessibility;
-(void)updateBarItemsForAccessibility:(unsigned long long)arg1 ;
-(void)setWantsSearchButton:(BOOL)arg1 ;
-(UIEdgeInsets)calcEdgeInsetsForSearchBar;
-(void)makeBarItemsVisible:(unsigned long long)arg1 animated:(BOOL)arg2 duration:(double)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)wantsSearchButton;
-(NSLayoutConstraint *)pinShowActionButton;
-(void)setPinShowActionButton:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)pinHideActionButton;
-(void)setPinHideActionButton:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)cartRightEdgeConstraint;
-(void)setCartRightEdgeConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)centeredLogoViewConstraints;
-(void)setCenteredLogoViewConstraints:(NSLayoutConstraint *)arg1 ;
-(NSArray *)leftAlignedLogoViewConstraints;
-(void)setLeftAlignedLogoViewConstraints:(NSArray *)arg1 ;
-(BOOL)useCompactLayout;
-(void)setUseCompactLayout:(BOOL)arg1 ;
-(void)dcsChanged:(id)arg1 ;
-(void)dataManagerUpdateCartBadge:(long long)arg1 ;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(EUILabel *)titleLabel;
-(long long)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(long long)arg1 ;
-(long long)indexOfAccessibilityElement:(id)arg1 ;
-(id)accessibilityElements;
-(void)setTitleLabel:(EUILabel *)arg1 ;
-(void)setActionButton:(EUIBadgedButton *)arg1 ;
-(EUIBadgedButton *)actionButton;
-(void)setSearchButton:(EUIButton *)arg1 ;
-(EUIButton *)searchButton;
-(UIImageView *)logoView;
-(void)setLogoView:(UIImageView *)arg1 ;
@end
