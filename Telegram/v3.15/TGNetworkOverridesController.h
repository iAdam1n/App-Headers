/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/TGCollectionMenuController.h>

@class TGCollectionMultilineInputItem, NSArray;

@interface TGNetworkOverridesController : TGCollectionMenuController {

	TGCollectionMultilineInputItem* _tcpPrefixItem;
	NSArray* _datacenterAddressItems;

}
-(void)restartPressed;
-(void)resetDatacenterAddresses;
-(id)init;
-(BOOL)validate;
@end
