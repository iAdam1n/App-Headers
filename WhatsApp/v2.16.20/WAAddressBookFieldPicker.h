/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:47 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WATableViewController.h>

@protocol WAAddressBookFieldPickerDelegate;
@class NSArray;

@interface WAAddressBookFieldPicker : WATableViewController {

	NSArray* _fieldSections;
	NSArray* _fields;
	id<WAAddressBookFieldPickerDelegate> _delegate;

}

@property (nonatomic,copy) NSArray * fields;                                                    //@synthesize fields=_fields - In the implementation block
@property (assign,nonatomic,__weak) id<WAAddressBookFieldPickerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)pickerWithDelegate:(id)arg1 ;
-(void)wa_fontSizeDidChange;
-(void)setupFieldData;
-(void)setDelegate:(id<WAAddressBookFieldPickerDelegate>)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<WAAddressBookFieldPickerDelegate>)delegate;
-(void)viewDidLoad;
-(void)cancelAction:(id)arg1 ;
-(void)setFields:(NSArray *)arg1 ;
-(NSArray *)fields;
@end
