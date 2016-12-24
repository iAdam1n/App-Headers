/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:02 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIScrollView.h>
#import <Facebook/FBFriendCenterMenuView.h>

@protocol FBFriendCenterMenuViewDelegate;
@class NSArray, NSString;

@interface _FBDefaultFriendCenterMenuView : UIScrollView <FBFriendCenterMenuView> {

	NSArray* _buttons;
	NSArray* _itemDescriptions;
	id<FBFriendCenterMenuViewDelegate> _friendCenterMenuViewDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBFriendCenterMenuViewDelegate> friendCenterMenuViewDelegate;              //@synthesize friendCenterMenuViewDelegate=_friendCenterMenuViewDelegate - In the implementation block
@property (nonatomic,copy) NSArray * itemDescriptions;                                                            //@synthesize itemDescriptions=_itemDescriptions - In the implementation block
-(void)menuItemButtonTapped:(id)arg1 ;
-(void)_scrollToMenuItem:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(BOOL)_isButtonWellVisible:(id)arg1 ;
-(CGPoint)_adjustedContentOffsetForWellVisibleButton:(id)arg1 ;
-(void)setSelectedMenuItem:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)setMenuItem:(unsigned long long)arg1 badgeNumber:(id)arg2 ;
-(id<FBFriendCenterMenuViewDelegate>)friendCenterMenuViewDelegate;
-(void)setFriendCenterMenuViewDelegate:(id<FBFriendCenterMenuViewDelegate>)arg1 ;
-(void)setItemDescriptions:(NSArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)touchesShouldCancelInContentView:(id)arg1 ;
-(long long)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(long long)arg1 ;
-(long long)indexOfAccessibilityElement:(id)arg1 ;
-(NSArray *)itemDescriptions;
@end
