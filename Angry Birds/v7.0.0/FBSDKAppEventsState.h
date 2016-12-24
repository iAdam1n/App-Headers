/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 7:32:38 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/7A9B3F5D-7CE0-4395-B5B1-42A1050C3CA9/AngryBirdsClassic.app/AngryBirdsClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AngryBirdsClassic/AngryBirdsClassic-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray, NSString, NSArray;

@interface FBSDKAppEventsState : NSObject <NSCopying, NSSecureCoding> {

	NSMutableArray* _mutableEvents;
	unsigned long long _numSkipped;
	NSString* _tokenString;
	NSString* _appID;

}

@property (copy,readonly) NSArray * events; 
@property (readonly) unsigned long long numSkipped;              //@synthesize numSkipped=_numSkipped - In the implementation block
@property (copy,readonly) NSString * tokenString;                //@synthesize tokenString=_tokenString - In the implementation block
@property (copy,readonly) NSString * appID;                      //@synthesize appID=_appID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithToken:(id)arg1 appID:(id)arg2 ;
-(BOOL)isCompatibleWithTokenString:(id)arg1 appID:(id)arg2 ;
-(void)addEvent:(id)arg1 isImplicit:(BOOL)arg2 ;
-(BOOL)isCompatibleWithAppEventsState:(id)arg1 ;
-(void)addEventsFromAppEventState:(id)arg1 ;
-(id)JSONStringForEvents:(BOOL)arg1 ;
-(BOOL)areAllEventsImplicit;
-(unsigned long long)numSkipped;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)events;
-(NSString *)tokenString;
-(NSString *)appID;
@end
