/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:26 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBMBballGameData : FBValueObject <NSCoding, NSCopying> {

	NSString* _highScoreUserId;
	long long _highScore;

}

@property (nonatomic,copy,readonly) NSString * highScoreUserId;              //@synthesize highScoreUserId=_highScoreUserId - In the implementation block
@property (nonatomic,readonly) long long highScore;                          //@synthesize highScore=_highScore - In the implementation block
-(long long)highScore;
-(id)initWithHighScoreUserId:(id)arg1 highScore:(long long)arg2 ;
-(NSString *)highScoreUserId;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
