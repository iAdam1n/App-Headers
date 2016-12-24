/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:25 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface FBInstantGameListGameSocialInfo : FBValueObject <NSCopying> {

	NSArray* _profileImageURLs;
	NSString* _socialText;

}

@property (nonatomic,copy,readonly) NSArray * profileImageURLs;              //@synthesize profileImageURLs=_profileImageURLs - In the implementation block
@property (nonatomic,copy,readonly) NSString * socialText;                   //@synthesize socialText=_socialText - In the implementation block
-(id)initWithProfileImageURLs:(id)arg1 socialText:(id)arg2 ;
-(NSArray *)profileImageURLs;
-(NSString *)socialText;
@end
