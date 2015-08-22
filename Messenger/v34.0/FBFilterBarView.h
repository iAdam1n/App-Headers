/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:35 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIScrollView, UIImageView, UINavigationBar, FBUserSession, NSMutableArray, UIActivityIndicatorView, FBGLFilter, NSString;

@interface FBFilterBarView : UIView {

	UIScrollView* _scrollView;
	UIImageView* _backgroundImageView;
	UINavigationBar* _blendingBar;
	unsigned long long _mediaPickerStyle;
	BOOL _cpuFiltersEnabled;
	BOOL _unifiedMediaGallery;
	FBUserSession* _session;
	NSMutableArray* _filterButtons;
	UIActivityIndicatorView* _generatingIndicator;
	FBGLFilter* _selectedFilter;
	NSString* _selectedCPUFilterName;
	CGRect _originalFrame;

}

@property (nonatomic,retain) NSMutableArray * filterButtons;                             //@synthesize filterButtons=_filterButtons - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * generatingIndicator;              //@synthesize generatingIndicator=_generatingIndicator - In the implementation block
@property (nonatomic,retain) FBGLFilter * selectedFilter;                                //@synthesize selectedFilter=_selectedFilter - In the implementation block
@property (nonatomic,copy) NSString * selectedCPUFilterName;                             //@synthesize selectedCPUFilterName=_selectedCPUFilterName - In the implementation block
@property (assign,nonatomic) CGRect originalFrame;                                       //@synthesize originalFrame=_originalFrame - In the implementation block
-(void)setOriginalFrame:(CGRect)arg1 ;
-(double)_filterMenuHeight;
-(double)_filterButtonSize;
-(double)_filterButtonWidth;
-(double)_filterButtonSpacing;
-(void)_updateSelectionToButtonWithCPUFilterName:(id)arg1 scrollToSelectedFilter:(BOOL)arg2 ;
-(void)_updateSelectionToButtonWithFilter:(id)arg1 scrollToSelectedFilter:(BOOL)arg2 ;
-(unsigned long long)selectedFilterIndex;
-(void)_moveOffsetToViewFilterIndex:(unsigned long long)arg1 ;
-(unsigned long long)_indexForCPUFilterName:(id)arg1 ;
-(unsigned long long)_indexForFitler:(id)arg1 ;
-(CGRect)_filterBarFrameForFilterBarHidden:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 mediaPickerStyle:(unsigned long long)arg2 cpuFiltersEnabled:(BOOL)arg3 unifiedMediaGallery:(BOOL)arg4 session:(id)arg5 ;
-(void)setScrollViewVisible:(BOOL)arg1 withAnimation:(BOOL)arg2 ;
-(id)filterButtonAtIndex:(unsigned long long)arg1 ;
-(void)setSelectedFilter:(FBGLFilter *)arg1 ;
-(void)setSelectedCPUFilterName:(NSString *)arg1 ;
-(void)resetSelectedFilterToNormalFilterWithoutScrolling;
-(void)setFilterBarHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(NSMutableArray *)filterButtons;
-(void)setFilterButtons:(NSMutableArray *)arg1 ;
-(UIActivityIndicatorView *)generatingIndicator;
-(void)setGeneratingIndicator:(UIActivityIndicatorView *)arg1 ;
-(FBGLFilter *)selectedFilter;
-(NSString *)selectedCPUFilterName;
-(CGRect)originalFrame;
-(void)layoutSubviews;
-(void)addButton:(id)arg1 ;
@end
