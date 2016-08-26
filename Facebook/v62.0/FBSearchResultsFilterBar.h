/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:29 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBSearchResultsFilterBarDelegate;
@class UIView, UIScrollView, NSMutableArray, UIButton, NSArray;

@interface FBSearchResultsFilterBar : UIView {

	UIView* _backgroundView;
	UIScrollView* _scrollView;
	NSMutableArray* _filterButtons;
	id<FBSearchResultsFilterBarDelegate> _delegate;
	UIButton* _locationFilterButton;
	NSArray* _filterGroups;

}

@property (assign,nonatomic,__weak) id<FBSearchResultsFilterBarDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIButton * locationFilterButton;                                 //@synthesize locationFilterButton=_locationFilterButton - In the implementation block
@property (nonatomic,copy) NSArray * filterGroups;                                              //@synthesize filterGroups=_filterGroups - In the implementation block
-(void)_resetFilterButtons;
-(id)_buttonWithStyle:(unsigned long long)arg1 glyphName:(unsigned long long)arg2 ;
-(void)_didTapFilterButton:(id)arg1 ;
-(void)_layoutFilterButtons;
-(UIButton *)locationFilterButton;
-(void)setFilterGroups:(NSArray *)arg1 ;
-(NSArray *)filterGroups;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBSearchResultsFilterBarDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBSearchResultsFilterBarDelegate>)delegate;
@end
