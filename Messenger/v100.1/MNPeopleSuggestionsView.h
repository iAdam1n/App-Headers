/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:21 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class FBListViewScrollManager, MNLoadingView, UISegmentedControl, UIView, NSArray, UITableView;

@interface MNPeopleSuggestionsView : UIView {

	FBListViewScrollManager* _scrollManager;
	MNLoadingView* _loadingView;
	UISegmentedControl* _segmentedControl;
	UIView* _segmentedControlContainer;
	NSArray* _suggestionSourceTitles;
	UITableView* _suggestionTableView;
	/*^block*/id _suggestionSourceSelectionChangedBlock;
	UIView* _nullStateView;

}

@property (nonatomic,readonly) UITableView * suggestionTableView;                 //@synthesize suggestionTableView=_suggestionTableView - In the implementation block
@property (assign,nonatomic) BOOL showLoadingView; 
@property (nonatomic,copy) id suggestionSourceSelectionChangedBlock;              //@synthesize suggestionSourceSelectionChangedBlock=_suggestionSourceSelectionChangedBlock - In the implementation block
@property (nonatomic,retain) UIView * nullStateView;                              //@synthesize nullStateView=_nullStateView - In the implementation block
-(void)mn_setBottomContentInset:(double)arg1 ;
-(void)mn_setTopContentInset:(double)arg1 ;
-(UIView *)nullStateView;
-(void)_updateTableViewContentInset;
-(UITableView *)suggestionTableView;
-(void)scrollSuggestionsTableViewToTopAnimated:(BOOL)arg1 ;
-(void)_segmentedControlSelectionChanged:(id)arg1 ;
-(UIEdgeInsets)_contentInsetForMainContentView;
-(double)_peopleSuggestionsViewTabBarHeight;
-(void)selectSuggestionSourceTitleAtIndex:(long long)arg1 ;
-(id)suggestionSourceSelectionChangedBlock;
-(void)setShowLoadingView:(BOOL)arg1 ;
-(void)setSuggestionSourceSelectionChangedBlock:(id)arg1 ;
-(void)setSuggestionSourceTitles:(id)arg1 withSelectedIndex:(long long)arg2 ;
-(void)setNullStateView:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg1 ;
-(BOOL)showLoadingView;
@end
