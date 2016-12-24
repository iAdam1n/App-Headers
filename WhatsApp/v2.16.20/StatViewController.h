/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:46 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WAStaticTableViewController.h>

@class WATableRow, NSTimer;

@interface StatViewController : WAStaticTableViewController {

	WATableRow* _rowMessagesSent;
	WATableRow* _rowMessagesReceived;
	WATableRow* _rowMessageBytesSent;
	WATableRow* _rowMessageBytesReceived;
	WATableRow* _rowMediaBytesSent;
	WATableRow* _rowMediaBytesReceived;
	WATableRow* _rowOutgoingCalls;
	WATableRow* _rowIncomingCalls;
	WATableRow* _rowCallsDuration;
	WATableRow* _rowCallBytesSent;
	WATableRow* _rowCallBytesReceived;
	WATableRow* _rowTotalBytesSent;
	WATableRow* _rowTotalBytesReceived;
	NSTimer* _dataUpdateTimer;

}
+(id)controller;
-(void)updateView:(id)arg1 ;
-(void)resetStats;
-(void)dealloc;
-(void)reloadData;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setupTableView;
@end
