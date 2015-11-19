/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:17 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol ECSearchResultsMapTableViewModelContextProtocol;
@class NSArray, ECSearchResultsMapView, NSString;

@interface ECSearchResultsMapTableViewModel : NSObject <UITableViewDataSource, UITableViewDelegate> {

	id<ECSearchResultsMapTableViewModelContextProtocol> _contextDelegate;
	NSArray* _clusterItems;
	ECSearchResultsMapView* _mapView;

}

@property (assign,nonatomic,__weak) id<ECSearchResultsMapTableViewModelContextProtocol> contextDelegate;              //@synthesize contextDelegate=_contextDelegate - In the implementation block
@property (nonatomic,retain) NSArray * clusterItems;                                                                  //@synthesize clusterItems=_clusterItems - In the implementation block
@property (assign,nonatomic,__weak) ECSearchResultsMapView * mapView;                                                 //@synthesize mapView=_mapView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)createWithMapView:(id)arg1 ;
-(id)adForIndexPath:(id)arg1 ;
-(void)setContextDelegate:(id<ECSearchResultsMapTableViewModelContextProtocol>)arg1 ;
-(id<ECSearchResultsMapTableViewModelContextProtocol>)contextDelegate;
-(void)showItems:(id)arg1 ;
-(void)hideItems;
-(NSArray *)clusterItems;
-(void)setClusterItems:(NSArray *)arg1 ;
-(void)updateTableVisible;
-(void)setMapView:(ECSearchResultsMapView *)arg1 ;
-(ECSearchResultsMapView *)mapView;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
@end
