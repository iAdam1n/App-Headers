/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:58 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/ACTReporter.h>

@class NSString;

@interface ACTConversionReporter : ACTReporter

@property (nonatomic,copy) NSString * value; 
+(void)reportWithConversionID:(id)arg1 label:(id)arg2 value:(id)arg3 isRepeatable:(BOOL)arg4 ;
+(BOOL)registerReferrer:(id)arg1 ;
+(void)reportWithProductID:(id)arg1 value:(id)arg2 isRepeatable:(BOOL)arg3 ;
-(id)initWithProductID:(id)arg1 value:(id)arg2 isRepeatable:(BOOL)arg3 ;
-(id)initWithConversionID:(id)arg1 label:(id)arg2 value:(id)arg3 isRepeatable:(BOOL)arg4 ;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
@end
