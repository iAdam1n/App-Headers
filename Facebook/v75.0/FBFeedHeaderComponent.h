/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:07 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@interface FBFeedHeaderComponent : CKCompositeComponent
+(id)newWithTitle:(id)arg1 subtitle:(const FBFeedHeaderSubtitle*)arg2 attributes:(const unordered_map<CKComponentViewAttribute, CKBoxedValue, std::__1::hash<CKComponentViewAttribute>, std::__1::equal_to<CKComponentViewAttribute>, std::__1::allocator<std::__1::pair<const CKComponentViewAttribute, CKBoxedValue> > >*)arg3 options:(const SCD_Struct_FB243*)arg4 toolbox:(id)arg5 ;
+(double)secondaryActionsMargin;
+(id)headerStyledString:(id)arg1 toolbox:(id)arg2 ;
+(UIEdgeInsets)contentMargins;
@end
