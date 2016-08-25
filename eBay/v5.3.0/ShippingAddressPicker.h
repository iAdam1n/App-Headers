/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/ProgressViewController.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <eBay/CheckoutDataManagerObserver.h>
#import <eBay/NewShippingAddressDelegate.h>
#import <eBay/EBNAddressBookObserver.h>

@protocol EBNAddressBookProtocol;
@class EBUEditableTableView, EBNCheckoutDataManager, PostalAddress, NSString, EUIBarButtonItem, EBUShippingAddressPickerActionHandler, EBUShippingAddressPickerTableViewSectionFactory, NSArray, UINavigationBar, UINavigationItem;

@interface ShippingAddressPicker : ProgressViewController <UIAlertViewDelegate, UITableViewDelegate, UITableViewDataSource, CheckoutDataManagerObserver, NewShippingAddressDelegate, EBNAddressBookObserver> {

	BOOL _canSelectCountry;
	BOOL _forShippinglabel;
	EBUEditableTableView* _pickerTableView;
	EBNCheckoutDataManager*<EBNAddressBookProtocol> _addressBookManager;
	long long _checkedItem;
	long long _shippingAddressType;
	PostalAddress* _addressToAdd;
	NSString* _initalSelectedAddressId;
	EUIBarButtonItem* _doneEditButtonItem;
	EBUShippingAddressPickerActionHandler* _actionHandler;
	EBUShippingAddressPickerTableViewSectionFactory* _tableViewSectionFactory;
	NSArray* _tableViewSections;
	UINavigationBar* _navBar;
	UINavigationItem* _navItem;

}

@property (assign,nonatomic) long long checkedItem;                                                           //@synthesize checkedItem=_checkedItem - In the implementation block
@property (nonatomic,retain) EUIBarButtonItem * doneEditButtonItem;                                           //@synthesize doneEditButtonItem=_doneEditButtonItem - In the implementation block
@property (retain) EBUShippingAddressPickerActionHandler * actionHandler;                                     //@synthesize actionHandler=_actionHandler - In the implementation block
@property (retain) EBUShippingAddressPickerTableViewSectionFactory * tableViewSectionFactory;                 //@synthesize tableViewSectionFactory=_tableViewSectionFactory - In the implementation block
@property (retain) NSArray * tableViewSections;                                                               //@synthesize tableViewSections=_tableViewSections - In the implementation block
@property (nonatomic,retain) UINavigationBar * navBar;                                                        //@synthesize navBar=_navBar - In the implementation block
@property (nonatomic,retain) UINavigationItem * navItem;                                                      //@synthesize navItem=_navItem - In the implementation block
@property (nonatomic,retain) EBUEditableTableView * pickerTableView;                                          //@synthesize pickerTableView=_pickerTableView - In the implementation block
@property (nonatomic,retain) EBNCheckoutDataManager*<EBNAddressBookProtocol> addressBookManager;              //@synthesize addressBookManager=_addressBookManager - In the implementation block
@property (assign,nonatomic) BOOL canSelectCountry;                                                           //@synthesize canSelectCountry=_canSelectCountry - In the implementation block
@property (assign,nonatomic) BOOL forShippinglabel;                                                           //@synthesize forShippinglabel=_forShippinglabel - In the implementation block
@property (assign,nonatomic) long long shippingAddressType;                                                   //@synthesize shippingAddressType=_shippingAddressType - In the implementation block
@property (nonatomic,retain) PostalAddress * addressToAdd;                                                    //@synthesize addressToAdd=_addressToAdd - In the implementation block
@property (nonatomic,retain) NSString * initalSelectedAddressId;                                              //@synthesize initalSelectedAddressId=_initalSelectedAddressId - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)shipToAddressPickerWithAddressBookManager:(id)arg1 ;
+(id)shipFromAddressPickerWithAddressBookManager:(id)arg1 ;
-(void)trackViewDidBecomeActive;
-(void)reloadTableData;
-(id)loadingOverlay;
-(id)initWithAddressBookManager:(id)arg1 ;
-(BOOL)forShippinglabel;
-(void)setNavItem:(UINavigationItem *)arg1 ;
-(EBNCheckoutDataManager*<EBNAddressBookProtocol>)addressBookManager;
-(void)setDoneEditButtonItem:(EUIBarButtonItem *)arg1 ;
-(UINavigationItem *)navItem;
-(EUIBarButtonItem *)doneEditButtonItem;
-(EBUEditableTableView *)pickerTableView;
-(void)setTableViewSectionFactory:(EBUShippingAddressPickerTableViewSectionFactory *)arg1 ;
-(void)setupNavBar;
-(void)setCheckedItem:(long long)arg1 ;
-(id)userShippingAddresses;
-(long long)shippingAddressType;
-(NSArray *)tableViewSections;
-(void)updateDoneEditButtonItemTitle;
-(void)trackAppearance;
-(PostalAddress *)addressToAdd;
-(void)commitSelectedAddress;
-(BOOL)usedFromUserProfile;
-(void)editAddress:(id)arg1 ;
-(id)defaultAddressID;
-(void)setupCheckedItem;
-(BOOL)canSelectCountry;
-(void)setCanSelectCountry:(BOOL)arg1 ;
-(void)setAddressToAdd:(PostalAddress *)arg1 ;
-(long long)checkedItem;
-(NSString *)initalSelectedAddressId;
-(EBUShippingAddressPickerTableViewSectionFactory *)tableViewSectionFactory;
-(void)setTableViewSections:(NSArray *)arg1 ;
-(void)commitDefaultAddress:(id)arg1 ;
-(void)addressChangeSuccessful;
-(void)addContactFromAddressBook:(id)arg1 ;
-(void)addContactManually:(id)arg1 ;
-(void)setPickerTableView:(EBUEditableTableView *)arg1 ;
-(void)setAddressBookManager:(EBNCheckoutDataManager*<EBNAddressBookProtocol>)arg1 ;
-(void)setForShippinglabel:(BOOL)arg1 ;
-(void)setShippingAddressType:(long long)arg1 ;
-(void)setInitalSelectedAddressId:(NSString *)arg1 ;
-(void)addressBookIsBeingChanged;
-(void)addressBookUpdateAddFailed;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)accessibilityPerformEscape;
-(EBUShippingAddressPickerActionHandler *)actionHandler;
-(void)setActionHandler:(EBUShippingAddressPickerActionHandler *)arg1 ;
-(void)addressBookChanged:(BOOL)arg1 ;
-(void)dismissView;
-(void)setNavBar:(UINavigationBar *)arg1 ;
-(UINavigationBar *)navBar;
-(void)editAction:(id)arg1 ;
@end

