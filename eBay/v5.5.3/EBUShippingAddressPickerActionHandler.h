/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:14 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ABPeoplePickerNavigationControllerDelegate.h>

@class ShippingAddressPicker, PostalAddress, NSString;

@interface EBUShippingAddressPickerActionHandler : NSObject <ABPeoplePickerNavigationControllerDelegate> {

	BOOL _canSelectCountry;
	long long _shippingAddressType;
	ShippingAddressPicker* _hostPicker;
	PostalAddress* _addressToAdd;

}

@property (__weak) ShippingAddressPicker * hostPicker;              //@synthesize hostPicker=_hostPicker - In the implementation block
@property (retain) PostalAddress * addressToAdd;                    //@synthesize addressToAdd=_addressToAdd - In the implementation block
@property (assign) BOOL canSelectCountry;                           //@synthesize canSelectCountry=_canSelectCountry - In the implementation block
@property (assign) long long shippingAddressType;                   //@synthesize shippingAddressType=_shippingAddressType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)shippingAddressPickerActionHandlerWithHost:(id)arg1 ;
-(long long)shippingAddressType;
-(PostalAddress *)addressToAdd;
-(void)addContactFromAddressBook;
-(void)editAddress:(id)arg1 ;
-(void)addContactManually;
-(BOOL)canSelectCountry;
-(void)setCanSelectCountry:(BOOL)arg1 ;
-(void)setAddressToAdd:(PostalAddress *)arg1 ;
-(void)presentAddressEditor:(id)arg1 ;
-(void)setShippingAddressType:(long long)arg1 ;
-(void)setHostPicker:(ShippingAddressPicker *)arg1 ;
-(void)showPeoplePicker;
-(ShippingAddressPicker *)hostPicker;
-(void)presentPeoplePicker:(id)arg1 ;
-(id)isoCodeForCountryName:(id)arg1 ;
-(void)dismissPeoplePicker:(id)arg1 ;
-(void)deleteAddress:(id)arg1 ;
-(void)peoplePickerNavigationController:(id)arg1 didSelectPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(void)peoplePickerNavigationControllerDidCancel:(id)arg1 ;
-(BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 ;
@end
