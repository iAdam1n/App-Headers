/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:04 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKComponentController.h>
#import <Facebook/FBAdInterfacesDetailedTargetingEventHandlerDelegate.h>

@class UIViewController, NSArray, NSString;

@interface FBAdInterfacesDetailedTargetingComponentController : CKComponentController <FBAdInterfacesDetailedTargetingEventHandlerDelegate> {

	UIViewController* _vc;
	NSArray* _originalDetailedTargetingItems;
	NSArray* _selectedDetailedTargetingItems;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didTapComponent:(id)arg1 ;
-(id)serializeDetailtedTargetingitems:(id)arg1 ;
-(id)serializeArrayData:(id)arg1 ;
-(BOOL)wereDetailedTargetingItemsChanged;
-(void)doneSelectingDetailedTargeting;
-(void)detailedTargetingComponentDidSelectTargetingWithMetadata:(id)arg1 ;
@end

