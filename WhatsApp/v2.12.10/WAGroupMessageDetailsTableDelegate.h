/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:58 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <WhatsApp/WAMessageDetailsTableUpdateDelegate.h>

@protocol WADetailsTableSizeObzerver;
@class NSDictionary, NSDate, NSArray, NSMutableDictionary, UIFont, NSMutableArray, NSIndexPath, NSString;

@interface WAGroupMessageDetailsTableDelegate : NSObject <UITableViewDelegate, UITableViewDataSource, WAMessageDetailsTableUpdateDelegate> {

	id<WADetailsTableSizeObzerver> _sizeObserver;
	NSDictionary* _receiptsInfo;
	NSDate* _sentDate;
	NSArray* _groupMembers;
	NSMutableDictionary* _pushNames;
	BOOL _isMediaMessage;
	BOOL _isPttMessage;
	int _numberOfReceipients;
	double _selectedHeightUnit;
	UIFont* _contactNameFont;
	UIFont* _pushNameFont;
	UIFont* _dateTimeFont;
	double _timeLabelWidth;
	double _dateTimeLabelSpace;
	NSMutableArray* _receipts[3];
	int _receiptSection[3];
	int _numberOfReceipts[3];
	BOOL _showUnfinishedIndication[3];
	NSIndexPath* _expandedIndexPath;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reloadFonts;
-(void)stopOperations;
-(void)tableView:(id)arg1 messageUpdated:(id)arg2 ;
-(id)initWithMessage:(id)arg1 sizeObzerver:(id)arg2 ;
-(id)imageForHeaderInSection:(long long)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)footerViewForTableView:(id)arg1 ;
-(id)titleForHeaderInSection:(long long)arg1 ;
@end
