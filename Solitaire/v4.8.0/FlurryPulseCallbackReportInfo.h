/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:44 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/SolitaireFree-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSNumber, NSMutableArray;

@interface FlurryPulseCallbackReportInfo : NSObject <NSCoding> {

	NSString* _invokeId;
	NSNumber* _callbackId;
	NSString* _substitutedUrl;
	NSMutableArray* _attempts;

}

@property (nonatomic,retain) NSString * invokeId;                    //@synthesize invokeId=_invokeId - In the implementation block
@property (nonatomic,retain) NSNumber * callbackId;                  //@synthesize callbackId=_callbackId - In the implementation block
@property (nonatomic,retain) NSString * substitutedUrl;              //@synthesize substitutedUrl=_substitutedUrl - In the implementation block
@property (nonatomic,retain) NSMutableArray * attempts;              //@synthesize attempts=_attempts - In the implementation block
-(NSMutableArray *)attempts;
-(void)setAttempts:(NSMutableArray *)arg1 ;
-(void)setCallbackId:(NSNumber *)arg1 ;
-(NSNumber *)callbackId;
-(NSString *)invokeId;
-(void)setInvokeId:(NSString *)arg1 ;
-(void)setSubstitutedUrl:(NSString *)arg1 ;
-(NSString *)substitutedUrl;
-(BOOL)finalAttemptMade;
-(void)setAttemptsSent;
-(unsigned long long)removeSentAttempts;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)data;
@end

