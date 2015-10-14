/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:41:48 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/3A543D9E-77DF-4DA3-955A-044E51462F63/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <PTHCommon/PTHViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class PTHTweetbotPostDraft, UITableView, PTHLocationManager, PTHColorGroupTableViewCell, PTHTweetbotLoadingCell, PTHTweetbotMessageCell, NSMutableArray, NSIndexPath, CLLocation, NSString;

@interface PTHTweetbotGeoSearchController : PTHViewController <UITableViewDelegate, UITableViewDataSource> {

	PTHTweetbotPostDraft* _draft;
	UITableView* _tableView;
	BOOL _firstTime;
	PTHLocationManager* _locationManager;
	PTHColorGroupTableViewCell* _disableCell;
	PTHColorGroupTableViewCell* _coordinateCell;
	PTHTweetbotLoadingCell* _loadingCell;
	PTHTweetbotMessageCell* _messageCell;
	NSMutableArray* _places;
	NSIndexPath* _accessorySelectedPath;
	CLLocation* _location;

}

@property (nonatomic,retain) CLLocation * location;                 //@synthesize location=_location - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDraft:(id)arg1 ;
-(void)_accessoryTapped:(id)arg1 ;
-(void)_usePlace;
-(void)ok:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
@end

