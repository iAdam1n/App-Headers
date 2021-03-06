/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>
#import <Facebook/FBHScrollImpressionLogging.h>
#import <Facebook/FBPageServiceItemTappableTarget.h>

@class FBMemProductItem;

@interface FBPageServiceItemFeaturedComponent : CKCompositeComponent <FBHScrollImpressionLogging, FBPageServiceItemTappableTarget> {

	FBMemProductItem* _serviceItem;

}

@property (nonatomic,readonly) FBMemProductItem * serviceItem;              //@synthesize serviceItem=_serviceItem - In the implementation block
+(id)newWithProductItem:(id)arg1 imageDownloader:(id)arg2 scenePath:(id)arg3 action:(CKTypedComponentAction<>)arg4 ;
-(FBMemProductItem *)serviceItem;
@end

