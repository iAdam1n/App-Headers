/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:14 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol EBNAddressBookProtocol;
@class EBNCheckoutDataManager, UITableView, EBUShippingAddressPickerActionHandler;

@interface EBUShippingAddressPickerTableViewSectionFactory : NSObject {

	EBNCheckoutDataManager*<EBNAddressBookProtocol> _addressDM;
	UITableView* _tableView;
	EBUShippingAddressPickerActionHandler* _actionHandler;

}

@property (__weak) EBNCheckoutDataManager*<EBNAddressBookProtocol> addressDM;              //@synthesize addressDM=_addressDM - In the implementation block
@property (__weak) UITableView * tableView;                                                //@synthesize tableView=_tableView - In the implementation block
@property (__weak) EBUShippingAddressPickerActionHandler * actionHandler;                  //@synthesize actionHandler=_actionHandler - In the implementation block
+(id)factoryWithAddressDataManager:(id)arg1 tableView:(id)arg2 actionHandler:(id)arg3 ;
-(id)setupShippingAddressSectionForAddressType:(long long)arg1 withSelectedAddressId:(id)arg2 ;
-(id)setupAddAddressSectionForAddressType:(long long)arg1 ;
-(id)actionCellWithSelector:(SEL)arg1 style:(long long)arg2 ;
-(void)setAddressDM:(EBNCheckoutDataManager*<EBNAddressBookProtocol>)arg1 ;
-(EBNCheckoutDataManager*<EBNAddressBookProtocol>)addressDM;
-(id)shippingAddressCellForAddress:(id)arg1 addressType:(long long)arg2 isSelectedAddress:(BOOL)arg3 ;
-(id)defaultShippingAddressForAddressType:(long long)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(UITableView *)tableView;
-(void)setActionHandler:(EBUShippingAddressPickerActionHandler *)arg1 ;
-(EBUShippingAddressPickerActionHandler *)actionHandler;
@end
