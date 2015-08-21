/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:49 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBPaymentsPeerToPeerDataControllerListener.h>
#import <Messenger/FBPaymentsPeerToPeerPaymentMethodsCoordinatorListener.h>
#import <Messenger/FBPaymentsPeerToPeerTransferCoordinatorListener.h>
#import <Messenger/FBPaymentsPeerToPeerFetchControllerListener.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol FBPaymentsPeerToPeerPaymentMethodsCoordinator, FBPaymentsPeerToPeerSettingsViewDataSourceDelegate;
@class FBUserSession, FBPaymentsPeerToPeerFetchController, FBPaymentsPeerToPeerPaymentPinController, FBPaymentsPeerToPeerTransferCoordinator, FBPaymentsPeerToPeerContactsService, FBPaymentsPeerToPeerTouchIDController, FBPaymentsPeerToPeerTransferStatusModelContainer, MNPaymentsExtensibleFlowMap, FBPaymentsPeerToPeerFeatureGatingController, NSArray, NSString;

@interface FBPaymentsPeerToPeerSettingsViewDataSource : NSObject <FBPaymentsPeerToPeerDataControllerListener, FBPaymentsPeerToPeerPaymentMethodsCoordinatorListener, FBPaymentsPeerToPeerTransferCoordinatorListener, FBPaymentsPeerToPeerFetchControllerListener, UITableViewDataSource, UITableViewDelegate> {

	FBUserSession* _session;
	FBPaymentsPeerToPeerFetchController* _fetchController;
	FBPaymentsPeerToPeerPaymentPinController* _paymentPinController;
	id<FBPaymentsPeerToPeerPaymentMethodsCoordinator> _paymentMethodsCoordinator;
	FBPaymentsPeerToPeerTransferCoordinator* _transferCoordinator;
	FBPaymentsPeerToPeerContactsService* _contactsService;
	FBPaymentsPeerToPeerTouchIDController* _touchIDController;
	FBPaymentsPeerToPeerTransferStatusModelContainer* _statusModelContainer;
	MNPaymentsExtensibleFlowMap* _extensibleFlowMap;
	FBPaymentsPeerToPeerFeatureGatingController* _featureGatingController;
	NSArray* _cardCellViewModels;
	NSArray* _transferCellViewModels;
	BOOL _hasMoreTransfers;
	BOOL _hasFetchControllerResponse;
	id _fetchToken;
	unsigned long long _layoutMode;
	id<FBPaymentsPeerToPeerSettingsViewDataSourceDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBPaymentsPeerToPeerSettingsViewDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)fetchController:(id)arg1 didFetch:(id)arg2 query:(id)arg3 dataTypes:(unsigned long long)arg4 response:(id)arg5 date:(id)arg6 ;
-(void)fetchController:(id)arg1 didFailToFetch:(id)arg2 query:(id)arg3 dataTypes:(unsigned long long)arg4 error:(id)arg5 ;
-(void)dataController:(id)arg1 didUpdateDataWithTypes:(unsigned long long)arg2 isOptimistic:(BOOL)arg3 change:(long long)arg4 ;
-(void)didUpdateTransfer:(id)arg1 ;
-(void)_loadViewModelsForRecentTransfers;
-(void)_loadViewModelsForPaymentMethods;
-(void)loadContents;
-(id)_addCardCellInTableView:(id)arg1 ;
-(id)_cardCellForViewModelAtIndex:(unsigned long long)arg1 inTableView:(id)arg2 ;
-(id)_noTransferCellInTableView:(id)arg1 ;
-(id)_showAllTransfersCellInTableView:(id)arg1 ;
-(id)_transferCellForViewModelAtIndex:(unsigned long long)arg1 inTableView:(id)arg2 ;
-(id)_passcodeCellInTableView:(id)arg1 ;
-(id)_touchIDCellInTableView:(id)arg1 touchIDStatus:(long long)arg2 ;
-(void)_onSwitchTouchID:(id)arg1 ;
-(id)_helpCenterCellInTableView:(id)arg1 ;
-(id)_contactUsCellInTableView:(id)arg1 ;
-(void)_handleProcessedTransferCellViewModels:(id)arg1 hasMoreTransfers:(BOOL)arg2 ;
-(id)_settingCellWithText:(id)arg1 detailText:(id)arg2 accessibilityHint:(id)arg3 identifier:(id)arg4 inTableView:(id)arg5 ;
-(void)removeCardCellViewModelAtIndex:(unsigned long long)arg1 ;
-(void)removeTransferCellViewModelAtIndex:(unsigned long long)arg1 ;
-(id)initWithSession:(id)arg1 fetchController:(id)arg2 paymentMethodsCoordinator:(id)arg3 paymentPinController:(id)arg4 transferCoordinator:(id)arg5 contactsService:(id)arg6 touchIDController:(id)arg7 statusModelContainer:(id)arg8 extensibleFlowMap:(id)arg9 featureGatingController:(id)arg10 ;
-(void)paymentMethodsCoordinatorDidUpdate:(id)arg1 oldPresetPaymentMethod:(id)arg2 newPresetPaymentMethod:(id)arg3 isOptimistic:(BOOL)arg4 ;
-(void)paymentMethodsCoordinatorDidUpdate:(id)arg1 isOptimistic:(BOOL)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id<FBPaymentsPeerToPeerSettingsViewDataSourceDelegate>)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(id<FBPaymentsPeerToPeerSettingsViewDataSourceDelegate>)delegate;
@end

