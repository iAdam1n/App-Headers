/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:47 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TAGResourceUtil : NSObject
+(id)expandResource:(id)arg1 ;
+(id)expandIthValue:(unsigned long long)arg1 resource:(id)arg2 expandedValues:(id)arg3 pendingExpansions:(id)arg4 ;
+(id)expandFunctionCall:(id)arg1 resource:(id)arg2 expandedValues:(id)arg3 index:(unsigned long long)arg4 ;
+(id)expandRule:(id)arg1 tags:(id)arg2 macros:(id)arg3 predicates:(id)arg4 ;
+(void)logAndThrow:(id)arg1 ;
+(id)objectWithTAGPBArrayBoundsCheck:(id)arg1 index:(unsigned long long)arg2 listName:(id)arg3 ;
+(id)valueBuilderBasedOnValue:(id)arg1 ;
+(id)servingValue:(id)arg1 ;
+(id)objectWithNSArrayBoundsCheck:(id)arg1 index:(unsigned long long)arg2 listName:(id)arg3 ;
@end

