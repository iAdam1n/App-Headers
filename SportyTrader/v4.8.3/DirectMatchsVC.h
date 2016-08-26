/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:00 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/ContentViewControllerWithTableView.h>

@class UIView, UIImageView, UILabel, NSMutableArray;

@interface DirectMatchsVC : ContentViewControllerWithTableView {

	UIView* noLiveView;
	UIImageView* noLiveImageView;
	UILabel* noLiveLabel;
	NSMutableArray* tournamentsArray;
	BOOL requestDone;

}

@property (nonatomic,retain) UIView * noLiveView; 
@property (nonatomic,retain) UIImageView * noLiveImageView; 
@property (nonatomic,retain) UILabel * noLiveLabel; 
@property (nonatomic,retain) NSMutableArray * tournamentsArray; 
-(void)viewWillAppearRoutine;
-(id)getDateLastRequest;
-(void)dataUpdateRequest;
-(void)setupTimer;
-(void)requestFailedWithError:(id)arg1 ;
-(void)updateLastRequestDate;
-(id)flurryTag;
-(id)URLStringForRefreshRequestWithLastUpdateDate:(id)arg1 ;
-(void)favoriteChange:(id)arg1 ;
-(NSMutableArray *)tournamentsArray;
-(void)resetDisplay;
-(void)setTournamentsArray:(NSMutableArray *)arg1 ;
-(void)prepareTournamentsArray;
-(id)URLStringForFullRequest;
-(UILabel *)noLiveLabel;
-(UIImageView *)noLiveImageView;
-(UIView *)noLiveView;
-(void)fullRequestSucceededWithData:(id)arg1 ;
-(void)refreshRequestSucceededWithData:(id)arg1 ;
-(void)setNoLiveView:(UIView *)arg1 ;
-(void)setNoLiveImageView:(UIImageView *)arg1 ;
-(void)setNoLiveLabel:(UILabel *)arg1 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)didReceiveMemoryWarning;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)refreshView;
@end
