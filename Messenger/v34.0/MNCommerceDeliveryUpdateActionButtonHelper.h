/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:38 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class MNBusinessNavigationHandler, FBMemMessengerRetailShipment, NSString;

@interface MNCommerceDeliveryUpdateActionButtonHelper : NSObject <UITableViewDataSource, UITableViewDelegate> {

	MNBusinessNavigationHandler* _navigationHandler;
	FBMemMessengerRetailShipment* _shipment;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_commerceCellStyle;
-(void)_configureCell:(id)arg1 withTitle:(id)arg2 disabled:(BOOL)arg3 ;
-(void)_didTapChangeShipping;
-(void)_didTapViewOrderDetails;
-(id)initWithNavigationHandler:(id)arg1 ;
-(void)setShipment:(id)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
@end

