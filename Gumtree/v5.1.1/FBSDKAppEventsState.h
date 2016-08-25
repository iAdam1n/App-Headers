/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
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
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)tokenString;
-(NSArray *)events;
-(NSString *)appID;
@end

