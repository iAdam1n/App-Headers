/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:27 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/T1SearchResultController.h>
#import <Twitter/T1SportSearchResultEntryDataSource.h>

@class TFNTwitterEventSport, T1SportDisplayHelper, T1SoccerTimelineScopeHeaderView, NSString, NSArray;

@interface T1SoccerGameSearchResultController : T1SearchResultController <T1SportSearchResultEntryDataSource> {

	TFNTwitterEventSport* _event;
	T1SportDisplayHelper* _displayHelper;
	T1SoccerTimelineScopeHeaderView* _soccerHeaderView;

}

@property (nonatomic,retain) TFNTwitterEventSport * event;                                    //@synthesize event=_event - In the implementation block
@property (nonatomic,retain) T1SportDisplayHelper * displayHelper;                            //@synthesize displayHelper=_displayHelper - In the implementation block
@property (nonatomic,retain) T1SoccerTimelineScopeHeaderView * soccerHeaderView;              //@synthesize soccerHeaderView=_soccerHeaderView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * tabIdentifiers; 
-(id)initWithAccount:(id)arg1 searchStream:(id)arg2 scribeParameterContext:(id)arg3 ;
-(id)scribeComponent;
-(T1SportDisplayHelper *)displayHelper;
-(void)setDisplayHelper:(T1SportDisplayHelper *)arg1 ;
-(void)didUpdateSportEvent:(id)arg1 ;
-(void)_startDownloadingLogosForHomeTeam:(id)arg1 awayTeam:(id)arg2 ;
-(id)createHeaderView;
-(NSArray *)tabIdentifiers;
-(id)createSearchResultEntry;
-(void)_soccerTeamTapped:(id)arg1 ;
-(T1SoccerTimelineScopeHeaderView *)soccerHeaderView;
-(id)_timeInfoString;
-(void)_updateTeamButton:(id)arg1 withTeam:(id)arg2 ;
-(BOOL)_shouldShowScore;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)setSoccerHeaderView:(T1SoccerTimelineScopeHeaderView *)arg1 ;
-(void)updateWithEvent:(id)arg1 ;
-(void)dealloc;
-(void)setEvent:(TFNTwitterEventSport *)arg1 ;
-(TFNTwitterEventSport *)event;
@end

