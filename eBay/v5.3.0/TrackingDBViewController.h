/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@class NSDictionary, NSMutableArray;

@interface TrackingDBViewController : UITableViewController {

	NSDictionary* _filterInfo;
	NSMutableArray* _filterImpressionIDs;

}

@property (nonatomic,retain) NSDictionary * filterInfo;                         //@synthesize filterInfo=_filterInfo - In the implementation block
@property (nonatomic,retain) NSMutableArray * filterImpressionIDs;              //@synthesize filterImpressionIDs=_filterImpressionIDs - In the implementation block
-(void)setFilterInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)filterInfo;
-(void)setFilterImpressionIDs:(NSMutableArray *)arg1 ;
-(NSMutableArray *)filterImpressionIDs;
-(void)mtsTypeSelected:(id)arg1 ;
-(id)titleForEvent:(id)arg1 withTimeStamp:(id)arg2 andImpressionID:(int)arg3 ;
-(void)impressionSelected:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)showAll;
@end
