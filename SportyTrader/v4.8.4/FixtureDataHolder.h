/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:45:08 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/5A964037-04EE-4DC1-9951-0A6265E75908/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/AbstractRankingsDataHolder.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <UIKit/UIPickerViewDelegate.h>

@class TournamentWithFixture, NSString;

@interface FixtureDataHolder : AbstractRankingsDataHolder <UIPickerViewDataSource, UIPickerViewDelegate> {

	TournamentWithFixture* tournamentSelectedForDateChange;

}

@property (assign,nonatomic,__weak) TournamentWithFixture * tournamentSelectedForDateChange; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)prepareCell:(id)arg1 withMatch:(id)arg2 andDatesTypeNBA:(BOOL)arg3 ;
-(id)URLStringForRequest;
-(id)keyForLastRequest;
-(void)synchroniseData;
-(void)handleRequestSuccessWithData:(id)arg1 ;
-(void)handleChangeInSortValue;
-(id)viewForHeader;
-(id)tournamentForSection:(long long)arg1 ;
-(void)setTournamentSelectedForDateChange:(TournamentWithFixture *)arg1 ;
-(void)openDatePickerWithTournament:(id)arg1 ;
-(id)URLStringForDatesRequestWithIDLigues:(id)arg1 ;
-(TournamentWithFixture *)tournamentSelectedForDateChange;
-(void)confirmDateChange;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
@end
