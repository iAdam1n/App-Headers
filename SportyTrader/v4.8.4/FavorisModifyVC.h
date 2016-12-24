/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:45:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/5A964037-04EE-4DC1-9951-0A6265E75908/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/ContentViewControllerWithTableView.h>
#import <UIKit/UIAlertViewDelegate.h>

@class NSArray, NSString;

@interface FavorisModifyVC : ContentViewControllerWithTableView <UIAlertViewDelegate> {

	NSArray* sectionsArray;
	NSArray* tournamentsArray;
	NSArray* matchsArray;
	NSArray* teamsArray;

}

@property (nonatomic,retain) NSArray * sectionsArray; 
@property (nonatomic,retain) NSArray * tournamentsArray; 
@property (nonatomic,retain) NSArray * matchsArray; 
@property (nonatomic,retain) NSArray * teamsArray; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)flurryTag;
-(NSArray *)matchsArray;
-(void)favoriteChange:(id)arg1 ;
-(NSArray *)tournamentsArray;
-(void)setMatchsArray:(NSArray *)arg1 ;
-(void)setTournamentsArray:(NSArray *)arg1 ;
-(void)prepareContentArray;
-(NSArray *)sectionsArray;
-(void)setTeamsArray:(NSArray *)arg1 ;
-(void)setSectionsArray:(NSArray *)arg1 ;
-(NSArray *)teamsArray;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)didReceiveMemoryWarning;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)deleteSection:(id)arg1 ;
@end
