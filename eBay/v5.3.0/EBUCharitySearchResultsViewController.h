/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ComponentUI/EUITableViewController.h>
#import <UIKit/UITableViewDataSource.h>

@class NSArray, NSString;

@interface EBUCharitySearchResultsViewController : EUITableViewController <UITableViewDataSource> {

	BOOL _canFetchAdditionalPage;
	BOOL _shouldFetchAdditionalPage;
	BOOL _pickingDonationCharity;
	NSArray* _results;
	unsigned long long _fetchAdditionalPageThreshold;

}

@property (nonatomic,copy) NSArray * results;                                                          //@synthesize results=_results - In the implementation block
@property (assign,nonatomic) BOOL canFetchAdditionalPage;                                              //@synthesize canFetchAdditionalPage=_canFetchAdditionalPage - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchAdditionalPage;                                           //@synthesize shouldFetchAdditionalPage=_shouldFetchAdditionalPage - In the implementation block
@property (assign,nonatomic) unsigned long long fetchAdditionalPageThreshold;                          //@synthesize fetchAdditionalPageThreshold=_fetchAdditionalPageThreshold - In the implementation block
@property (assign,getter=isPickingDonationCharity,nonatomic) BOOL pickingDonationCharity;              //@synthesize pickingDonationCharity=_pickingDonationCharity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)tableHeaderViewForSearchResultsTable:(id)arg1 ;
-(BOOL)shouldFetchAdditionalPage;
-(unsigned long long)fetchAdditionalPageThreshold;
-(void)setShouldFetchAdditionalPage:(BOOL)arg1 ;
-(BOOL)isPickingDonationCharity;
-(BOOL)canFetchAdditionalPage;
-(void)setCanFetchAdditionalPage:(BOOL)arg1 ;
-(void)setFetchAdditionalPageThreshold:(unsigned long long)arg1 ;
-(void)setPickingDonationCharity:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(NSArray *)results;
-(void)setResults:(NSArray *)arg1 ;
@end

