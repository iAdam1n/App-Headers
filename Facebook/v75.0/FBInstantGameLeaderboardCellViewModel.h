/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSString;

@interface FBInstantGameLeaderboardCellViewModel : FBValueObject <NSCopying> {

	BOOL _isHighlighted;
	NSURL* _profileImageURL;
	NSString* _name;
	NSString* _scoreString;
	NSString* _rankString;
	long long _roundCornerSpec;

}

@property (nonatomic,copy,readonly) NSURL * profileImageURL;              //@synthesize profileImageURL=_profileImageURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * scoreString;               //@synthesize scoreString=_scoreString - In the implementation block
@property (nonatomic,copy,readonly) NSString * rankString;                //@synthesize rankString=_rankString - In the implementation block
@property (nonatomic,readonly) BOOL isHighlighted;                        //@synthesize isHighlighted=_isHighlighted - In the implementation block
@property (nonatomic,readonly) long long roundCornerSpec;                 //@synthesize roundCornerSpec=_roundCornerSpec - In the implementation block
-(NSString *)scoreString;
-(id)initWithProfileImageURL:(id)arg1 name:(id)arg2 scoreString:(id)arg3 rankString:(id)arg4 isHighlighted:(BOOL)arg5 roundCornerSpec:(long long)arg6 ;
-(long long)roundCornerSpec;
-(NSString *)name;
-(BOOL)isHighlighted;
-(NSURL *)profileImageURL;
-(NSString *)rankString;
@end
