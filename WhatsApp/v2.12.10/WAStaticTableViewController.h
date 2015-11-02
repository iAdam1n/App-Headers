/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:54 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <WhatsApp/WATableViewController.h>

@class NSMutableArray, NSArray;

@interface WAStaticTableViewController : WATableViewController {

	NSMutableArray* _sections;

}

@property (nonatomic,retain) NSArray * sections;              //@synthesize sections=_sections - In the implementation block
-(void)wa_fontSizeDidChange;
-(void)deselectActiveCell;
-(void)setupTableView;
-(void)willDisplayHeaderView:(id)arg1 forSection:(long long)arg2 ;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)reload;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewDidLoad;
-(void)setSections:(NSArray *)arg1 ;
-(NSArray *)sections;
-(id)addSection;
-(id)rowAtIndexPath:(id)arg1 ;
@end
