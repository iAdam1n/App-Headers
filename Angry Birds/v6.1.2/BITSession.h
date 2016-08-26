/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:01:47 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/3822BE3B-29D4-4DEB-BFFF-FDA22D01C707/AngryBirdsClassic.app/AngryBirdsClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AngryBirdsClassic/BITTelemetryObject.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface BITSession : BITTelemetryObject <NSCoding> {

	NSString* _sessionId;
	NSString* _isFirst;
	NSString* _isNew;

}

@property (nonatomic,copy) NSString * sessionId;              //@synthesize sessionId=_sessionId - In the implementation block
@property (nonatomic,copy) NSString * isFirst;                //@synthesize isFirst=_isFirst - In the implementation block
@property (nonatomic,copy) NSString * isNew;                  //@synthesize isNew=_isNew - In the implementation block
-(id)serializeToDictionary;
-(NSString *)isFirst;
-(void)setIsFirst:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)sessionId;
-(void)setSessionId:(NSString *)arg1 ;
-(void)setIsNew:(NSString *)arg1 ;
-(NSString *)isNew;
@end
