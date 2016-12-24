/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:10 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKComponentController.h>

@class FBPageComponentFlowShoppingCartDataModel;

@interface FBPageComponentFlowShoppingCartComponentController : CKComponentController {

	FBPageComponentFlowShoppingCartDataModel* _currentModel;

}
-(void)didMount;
-(id)initWithComponent:(id)arg1 ;
-(void)updateFormFieldsWithShoppingCartDataModel:(id)arg1 context:(id)arg2 ;
-(void)updateFormFieldsForTipWithSender:(id)arg1 tip:(id)arg2 isCash:(BOOL)arg3 ;
-(void)shoppingCartItemComponent:(id)arg1 didRemoveItem:(id)arg2 ;
-(void)shoppingCartItemComponent:(id)arg1 didUpdateItemQuantities:(id)arg2 ;
-(void)shoppingCartItemComponent:(id)arg1 didUpdateTip:(id)arg2 ;
-(void)shoppingCartItemComponent:(id)arg1 didUpdateTipAsCash:(id)arg2 ;
@end
