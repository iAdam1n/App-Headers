/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:04 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <WhatsApp/WAMessageDetailsTableUpdateDelegate.h>

@class NSDictionary, NSDate, UIFont, NSString;

@interface WAMessageDetailsTableDelegate : NSObject <UITableViewDelegate, UITableViewDataSource, WAMessageDetailsTableUpdateDelegate> {

	NSDictionary* _receiptInfo;
	NSDate* _receiptDate[3];
	int _receiptRow[3];
	BOOL _isMediaMessage;
	BOOL _isPttMessage;
	double _cellHeight;
	UIFont* _cellNameFont;
	UIFont* _dateTimeFont;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reloadFonts;
-(void)stopOperations;
-(void)tableView:(id)arg1 messageUpdated:(id)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)initWithMessage:(id)arg1 ;
@end

