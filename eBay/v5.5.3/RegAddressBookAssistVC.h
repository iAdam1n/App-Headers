/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:14 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ComponentUI/EUIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class NSArray, NSMutableArray, UIView, UITableView, UILabel, UIBarButtonItem, UINib, RegistrationUIInstance, NSString;

@interface RegAddressBookAssistVC : EUIViewController <UITableViewDataSource, UITableViewDelegate> {

	NSArray* labelArray;
	NSMutableArray* tableCellArray;
	UIView* horizontalRuleView;
	UITableView* placeTypeTable;
	UILabel* whichContactInfo;
	UIBarButtonItem* cancelButton;
	UINib* tableCellTemplate;
	RegistrationUIInstance* _instance;
	void* _personRec;

}

@property (nonatomic,retain) RegistrationUIInstance * instance;              //@synthesize instance=_instance - In the implementation block
@property (assign,nonatomic) void* personRec;                                //@synthesize personRec=_personRec - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithInstance:(id)arg1 ;
-(void)buildTableCellArray;
-(void*)personRec;
-(double)setFrameForLabel:(id)arg1 topPosition:(double)arg2 ;
-(void)setPersonRec:(void*)arg1 ;
-(void)cancelButtonHit:(id)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewDidLoad;
-(void)setInstance:(RegistrationUIInstance *)arg1 ;
-(RegistrationUIInstance *)instance;
@end

