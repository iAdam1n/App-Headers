/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class UIView, FBSearchBar, UITableView;

@interface FBCrowdsourcingCityPickerView : UIView {

	UIView* _bottomSearchBarSeparator;
	FBSearchBar* _searchBar;
	UITableView* _searchResultsTableView;
	UITableView* _nullStateTableView;

}

@property (nonatomic,readonly) FBSearchBar * searchBar;                           //@synthesize searchBar=_searchBar - In the implementation block
@property (nonatomic,readonly) UITableView * searchResultsTableView;              //@synthesize searchResultsTableView=_searchResultsTableView - In the implementation block
@property (nonatomic,readonly) UITableView * nullStateTableView;                  //@synthesize nullStateTableView=_nullStateTableView - In the implementation block
-(UITableView *)nullStateTableView;
-(id)initWithFrame:(CGRect)arg1 placeholderText:(id)arg2 ;
-(void)showSearchResultsTableView;
-(void)showNullStateTableView;
-(void)layoutSubviews;
-(FBSearchBar *)searchBar;
-(UITableView *)searchResultsTableView;
@end
