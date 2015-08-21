/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:20 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SportyTrader/ContentViewControllerWithDateChange.h>

@class UIView, UIImageView, UILabel, NSArray;

@interface ResultatsPaysVC : ContentViewControllerWithDateChange {

	UIView* noMatchsView;
	UIImageView* noMatchsImageView;
	UILabel* noMatchsLabel;
	UILabel* headerResultatsLabel;
	UILabel* headerMatchsLabel;
	UILabel* headerLiveMatchsLabel;
	NSArray* countryList;
	BOOL isRefreshing;
	BOOL overrideNoMatchViewDisplay;

}

@property (nonatomic,retain) UIView * noMatchsView; 
@property (nonatomic,retain) UIImageView * noMatchsImageView; 
@property (nonatomic,retain) UILabel * noMatchsLabel; 
@property (nonatomic,retain) UILabel * headerResultatsLabel; 
@property (nonatomic,retain) UILabel * headerMatchsLabel; 
@property (nonatomic,retain) UILabel * headerLiveMatchsLabel; 
@property (nonatomic,retain) NSArray * countryList; 
@property (assign,nonatomic) BOOL overrideNoMatchViewDisplay; 
-(id)flurryTag;
-(UILabel *)noMatchsLabel;
-(UILabel *)headerResultatsLabel;
-(UILabel *)headerMatchsLabel;
-(UILabel *)headerLiveMatchsLabel;
-(UIImageView *)noMatchsImageView;
-(void)viewWillAppearRoutine;
-(id)getDateLastRequest;
-(void)dataUpdateRequest;
-(void)synchroniseCountryList;
-(UIView *)noMatchsView;
-(void)setupTimer;
-(id)selectedDateKey;
-(id)URLStringForFullRequestWithDateMaths:(id)arg1 ;
-(void)fullRequestSucceededWithData:(id)arg1 andMatchsDate:(id)arg2 ;
-(void)requestFailedWithError:(id)arg1 ;
-(id)URLStringForRefreshRequestWithLastUpdateDate:(id)arg1 ;
-(void)refreshRequestSucceededWithData:(id)arg1 andMatchsDate:(id)arg2 ;
-(void)updateLastRequestDate;
-(void)setCountryList:(NSArray *)arg1 ;
-(id)availableDatesKey;
-(id)URLStringForDatesRequest;
-(void)changeSelectedDateWithIndex:(long long)arg1 ;
-(void)setNoMatchsView:(UIView *)arg1 ;
-(void)setNoMatchsImageView:(UIImageView *)arg1 ;
-(void)setNoMatchsLabel:(UILabel *)arg1 ;
-(void)setHeaderResultatsLabel:(UILabel *)arg1 ;
-(void)setHeaderMatchsLabel:(UILabel *)arg1 ;
-(void)setHeaderLiveMatchsLabel:(UILabel *)arg1 ;
-(BOOL)overrideNoMatchViewDisplay;
-(void)setOverrideNoMatchViewDisplay:(BOOL)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)didReceiveMemoryWarning;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(NSArray *)countryList;
-(void)refreshView;
@end

