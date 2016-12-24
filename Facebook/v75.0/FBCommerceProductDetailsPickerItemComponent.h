/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:05 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>
#import <Facebook/FBHScrollImpressionLogging.h>

@class FBCommerceProductContext, FBMemProductItem;

@interface FBCommerceProductDetailsPickerItemComponent : CKCompositeComponent <FBHScrollImpressionLogging> {

	CKTypedComponentAction<> _cardAction;
	unsigned long long _index;
	FBCommerceProductContext* _context;
	FBMemProductItem* _productItem;

}

@property (nonatomic,readonly) FBCommerceProductContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) FBMemProductItem * productItem;                  //@synthesize productItem=_productItem - In the implementation block
+(id)newWithImageURI:(id)arg1 item:(id)arg2 context:(id)arg3 index:(unsigned long long)arg4 cardAction:(CKTypedComponentAction<>)arg5 imageSize:(double)arg6 ;
-(void)didTapOnCard:(id)arg1 ;
-(FBCommerceProductContext *)context;
-(FBMemProductItem *)productItem;
@end
