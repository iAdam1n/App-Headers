/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:23 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBIntentTarget.h>

@class NSString, NSDictionary;

@interface FBPageComponentFlowIntentTarget : FBIntentTarget {

	NSString* _FBID;
	NSString* _flowType;
	NSDictionary* _initialInput;

}

@property (nonatomic,copy,readonly) NSString * FBID;                          //@synthesize FBID=_FBID - In the implementation block
@property (nonatomic,copy,readonly) NSString * flowType;                      //@synthesize flowType=_flowType - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * initialInput;              //@synthesize initialInput=_initialInput - In the implementation block
+(id)pageComponentFlowTargetWithFBID:(id)arg1 flowType:(id)arg2 initialInput:(id)arg3 ;
+(id)URLMapping;
-(NSString *)FBID;
-(id)fallbackURLs;
-(NSDictionary *)initialInput;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)flowType;
@end
