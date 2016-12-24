/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:45:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/5A964037-04EE-4DC1-9951-0A6265E75908/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/AbstractRankingsDataHolder.h>

@class NSArray;

@interface ScorersDataHolder : AbstractRankingsDataHolder {

	NSArray* tournamentsArray;

}

@property (nonatomic,retain) NSArray * tournamentsArray; 
-(NSArray *)tournamentsArray;
-(id)URLStringForRequest;
-(id)keyForLastRequest;
-(void)synchroniseData;
-(void)handleRequestSuccessWithData:(id)arg1 ;
-(void)handleChangeInSortValue;
-(id)viewForHeader;
-(id)tournamentForSection:(long long)arg1 ;
-(void)setTournamentsArray:(NSArray *)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
@end
