/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ComponentUI/EUIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class NSMutableArray, UIBarButtonItem, UITableView, UITableViewCell, UIImageView, UILabel, RegistrationController, RegistrationUIInstance, NSString;

@interface RegAutofillTypeVC : EUIViewController <UITableViewDataSource, UITableViewDelegate> {

	NSMutableArray* tableCellArray;
	UIBarButtonItem* cancelItem;
	UITableView* tableView;
	UITableView* prefillTypeTable;
	UITableViewCell* headerCell;
	UITableViewCell* ppaHeaderCell;
	UITableViewCell* templateCell;
	UITableViewCell* manualCell;
	UIImageView* logoImageView;
	UILabel* welcomeLabel;
	UILabel* guidanceLabel;
	UILabel* ppaAlmostThereLabel;
	UILabel* ppaGuidanceLabel;
	UILabel* enterShippingAddressPromtLabel;
	BOOL createdRedLaserButton;
	BOOL navStackSwizzled;
	BOOL userChoseAutofillType;
	RegistrationController* _controller;
	RegistrationUIInstance* _instance;

}

@property (nonatomic,retain) RegistrationController * controller;              //@synthesize controller=_controller - In the implementation block
@property (nonatomic,retain) RegistrationUIInstance * instance;                //@synthesize instance=_instance - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithInstance:(id)arg1 ;
-(void)contactsButtonPressed;
-(id)createAutofillCellWithName:(id)arg1 action:(SEL)arg2 ;
-(void)dlButtonPressed;
-(void)geoButtonPressed;
-(void)cardioButtonPressed;
-(void)swizzleNavStack:(BOOL)arg1 ;
-(void)fbButtonPressed;
-(void)manualButtonPressed;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(RegistrationController *)controller;
-(void)setController:(RegistrationController *)arg1 ;
-(BOOL)accessibilityPerformEscape;
-(void)setInstance:(RegistrationUIInstance *)arg1 ;
-(RegistrationUIInstance *)instance;
-(void)cancelButtonPressed;
@end

