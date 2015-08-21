/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:21 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SportyTrader/ContentViewControllerWithDateChange.h>

@class UIButton, UIView, UIImageView, UILabel, NSMutableArray;

@interface FavorisMatchsVC : ContentViewControllerWithDateChange {

	UIButton* modifyButton;
	UIView* noFavoritesView;
	UIImageView* noFavoritesBackgroundImageView;
	UILabel* noFavoritesTopLabel;
	UILabel* noFavoritesMiddleLabel;
	UILabel* noFavoritesBottomLabel;
	UIView* noFavoritesAtDateView;
	UIImageView* noFavoritesAtDateImageView;
	UILabel* noFavoritesAtDateLabel;
	NSMutableArray* tournamentsArray;
	BOOL isRefreshing;
	BOOL overrideNoMatchViewDisplay;

}

@property (nonatomic,retain) UIButton * modifyButton; 
@property (nonatomic,retain) UIView * noFavoritesView; 
@property (nonatomic,retain) UIImageView * noFavoritesBackgroundImageView; 
@property (nonatomic,retain) UILabel * noFavoritesTopLabel; 
@property (nonatomic,retain) UILabel * noFavoritesMiddleLabel; 
@property (nonatomic,retain) UILabel * noFavoritesBottomLabel; 
@property (nonatomic,retain) UIView * noFavoritesAtDateView; 
@property (nonatomic,retain) UIImageView * noFavoritesAtDateImageView; 
@property (nonatomic,retain) UILabel * noFavoritesAtDateLabel; 
@property (nonatomic,retain) NSMutableArray * tournamentsArray; 
@property (assign,nonatomic) BOOL overrideNoMatchViewDisplay; 
-(id)flurryTag;
-(void)viewWillAppearRoutine;
-(id)getDateLastRequest;
-(void)dataUpdateRequest;
-(void)setupTimer;
-(id)selectedDateKey;
-(id)URLStringForFullRequestWithDateMaths:(id)arg1 ;
-(void)fullRequestSucceededWithData:(id)arg1 andMatchsDate:(id)arg2 ;
-(void)requestFailedWithError:(id)arg1 ;
-(id)URLStringForRefreshRequestWithLastUpdateDate:(id)arg1 ;
-(void)refreshRequestSucceededWithData:(id)arg1 andMatchsDate:(id)arg2 ;
-(void)updateLastRequestDate;
-(id)availableDatesKey;
-(id)URLStringForDatesRequest;
-(void)changeSelectedDateWithIndex:(long long)arg1 ;
-(BOOL)overrideNoMatchViewDisplay;
-(void)setOverrideNoMatchViewDisplay:(BOOL)arg1 ;
-(void)favoriteChange:(id)arg1 ;
-(UILabel *)noFavoritesTopLabel;
-(UILabel *)noFavoritesMiddleLabel;
-(UILabel *)noFavoritesBottomLabel;
-(void)manageFavorites:(id)arg1 ;
-(NSMutableArray *)tournamentsArray;
-(void)openDatePicker;
-(UIImageView *)noFavoritesBackgroundImageView;
-(UIImageView *)noFavoritesAtDateImageView;
-(UILabel *)noFavoritesAtDateLabel;
-(UIButton *)modifyButton;
-(void)setTournamentsArray:(NSMutableArray *)arg1 ;
-(void)prepareTournamentsArray;
-(UIView *)noFavoritesAtDateView;
-(UIView *)noFavoritesView;
-(void)setModifyButton:(UIButton *)arg1 ;
-(void)setNoFavoritesView:(UIView *)arg1 ;
-(void)setNoFavoritesBackgroundImageView:(UIImageView *)arg1 ;
-(void)setNoFavoritesTopLabel:(UILabel *)arg1 ;
-(void)setNoFavoritesMiddleLabel:(UILabel *)arg1 ;
-(void)setNoFavoritesBottomLabel:(UILabel *)arg1 ;
-(void)setNoFavoritesAtDateView:(UIView *)arg1 ;
-(void)setNoFavoritesAtDateImageView:(UIImageView *)arg1 ;
-(void)setNoFavoritesAtDateLabel:(UILabel *)arg1 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)didReceiveMemoryWarning;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)refreshView;
@end
