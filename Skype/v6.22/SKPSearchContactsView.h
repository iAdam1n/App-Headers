/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:43 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/Skype-Structs.h>
#import <UIKit/UIView.h>

@class MKBlueSearchBar, MKTableView, UIView, MKActivityIndicatorView, NSLayoutConstraint;

@interface SKPSearchContactsView : UIView {

	MKBlueSearchBar* _searchBar;
	MKTableView* _tableView;
	UIView* _searchOverlay;
	MKActivityIndicatorView* _activityIndicatorView;
	long long _state;
	/*^block*/id _dismissBlock;
	UIView* _headerBar;
	NSLayoutConstraint* _heightSearchBarLayoutConstraint;

}

@property (nonatomic,retain) UIView * headerBar;                                                //@synthesize headerBar=_headerBar - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * heightSearchBarLayoutConstraint;              //@synthesize heightSearchBarLayoutConstraint=_heightSearchBarLayoutConstraint - In the implementation block
@property (nonatomic,retain) MKBlueSearchBar * searchBar;                                       //@synthesize searchBar=_searchBar - In the implementation block
@property (nonatomic,retain) MKTableView * tableView;                                           //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) MKActivityIndicatorView * activityIndicatorView;                   //@synthesize activityIndicatorView=_activityIndicatorView - In the implementation block
@property (nonatomic,retain) UIView * searchOverlay;                                            //@synthesize searchOverlay=_searchOverlay - In the implementation block
@property (assign,nonatomic) long long state;                                                   //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) id dismissBlock;                                                     //@synthesize dismissBlock=_dismissBlock - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(UIView *)searchOverlay;
-(id)viewConstraints;
-(id)dismissBlock;
-(void)setDismissBlock:(id)arg1 ;
-(UIView *)headerBar;
-(NSLayoutConstraint *)heightSearchBarLayoutConstraint;
-(double)heightSearchBar;
-(void)setHeightSearchBarLayoutConstraint:(NSLayoutConstraint *)arg1 ;
-(void)searchOverlayDidTap:(id)arg1 ;
-(void)setSearchOverlay:(UIView *)arg1 ;
-(void)setHeaderBar:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(MKTableView *)tableView;
-(void)setTableView:(MKTableView *)arg1 ;
-(void)updateConstraints;
-(MKBlueSearchBar *)searchBar;
-(void)setSearchBar:(MKBlueSearchBar *)arg1 ;
-(MKActivityIndicatorView *)activityIndicatorView;
-(void)setActivityIndicatorView:(MKActivityIndicatorView *)arg1 ;
@end
