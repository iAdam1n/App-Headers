/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:23 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBIntentTarget.h>

@class NSString, NSArray;

@interface FBPageEventsIntentTarget : FBIntentTarget {

	NSString* _FBID;
	long long _context;
	NSArray* _highlightedEventIDs;

}

@property (nonatomic,copy,readonly) NSString * FBID;                            //@synthesize FBID=_FBID - In the implementation block
@property (nonatomic,readonly) long long context;                               //@synthesize context=_context - In the implementation block
@property (nonatomic,copy,readonly) NSArray * highlightedEventIDs;              //@synthesize highlightedEventIDs=_highlightedEventIDs - In the implementation block
+(id)pageEventsTargetWithFBID:(id)arg1 context:(long long)arg2 highlightedEventIDs:(id)arg3 ;
+(id)pageEventsTargetWithFBID:(id)arg1 context:(long long)arg2 ;
-(NSString *)FBID;
-(id)fallbackURLs;
-(NSArray *)highlightedEventIDs;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)context;
@end
